#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Dump/Reflection.hpp>
#endif

#include <RED4ext/RTTISystem.hpp>
#include <RED4ext/Scripting/CProperty.hpp>

#include <fstream>
#include <numeric>
#include <stack>
#include <string>
#include <unordered_map>

namespace GameReflection
{
RED4EXT_INLINE void Dump(std::filesystem::path filePath, bool aVerbose)
{
    auto rttiSystem = RED4ext::CRTTISystem::Get();
    auto* scriptable = rttiSystem->GetClass("IScriptable");
    auto* serializable = rttiSystem->GetClass("ISerializable");
    auto* redEvent = rttiSystem->GetClass("redEvent");

    std::unordered_map<RED4ext::CClass*, ClassDependencyBuilder> descriptorMap;

    // Collect all the prefixes so we can determine nesting
    std::unordered_map<std::string, std::vector<std::string>> prefixHierarchy;

    // Trim the preceeding lower-case suffix, this seems to be either a namespace or directory, or both
    auto GetPrefix = [](const std::string& input) -> std::string {
        size_t i = 0;
        for (; i < input.size(); ++i)
        {
            if (isupper(input[i]))
            {
                break;
            }
        }

        if (i == 0)
            return "";

        return input.substr(0, i);
    };

    // First pass gather all properties and descriptors
    rttiSystem->types.for_each(
        [&descriptorMap, GetPrefix, &prefixHierarchy](RED4ext::CName n, RED4ext::IRTTIType*& type) {
            if (type->GetType() == RED4ext::ERTTIType::Class)
            {
                auto classType = static_cast<RED4ext::CClass*>(type);
                if (classType->flags.isNative)
                {
                    ClassDependencyBuilder builder;
                    builder.pType = classType;

                    if (!classType->flags.isAbstract)
                    {
                        for (auto i = 0; i < classType->unk118.size; ++i)
                        {
                            auto prop = classType->unk118.entries[i];
                            if (!prop->flags.b21)
                            {
                                builder.mPropertyMap.emplace(prop->valueOffset, prop);
                            }
                        }
                    }

                    descriptorMap.emplace(classType, builder);
                }
            }

            switch (type->GetType())
            {
            case RED4ext::ERTTIType::Class:
            case RED4ext::ERTTIType::Enum:
            case RED4ext::ERTTIType::BitField:
            {
                std::string prefix = GetPrefix(n.ToString());
                if (!prefix.empty())
                {
                    prefixHierarchy[prefix] = std::vector<std::string>();
                }
                break;
            }
            default:
                break;
            }
        });

    // Build a mapped list of nested prefixes
    for (auto& prefix : prefixHierarchy)
    {
        for (auto i = 0; i < prefix.first.size(); ++i)
        {
            auto testPrefix = prefix.first.substr(0, i + 1);

            // Find a substring of ourselves somewhere else in the list
            auto it = prefixHierarchy.find(testPrefix);
            if (it != prefixHierarchy.end())
            {
                prefix.second.push_back(testPrefix);
            }
        }

        for (auto it = prefix.second.rbegin(); it != prefix.second.rend(); ++it)
        {
            auto next = it;
            if (++next != prefix.second.rend())
            {
                *it = it->substr(next->size(), it->size() - next->size());
            }
        }
    }

    // Second pass traverse parents to move properties into parent class if it happened to be abstract
    for (auto& desc : descriptorMap)
    {
        std::stack<RED4ext::CClass*> stack;
        RED4ext::CClass* parent = desc.first->parent;
        while (parent)
        {
            stack.push(parent);
            parent = parent->parent;
        }

        auto it = desc.second.mPropertyMap.begin();
        while (it != desc.second.mPropertyMap.end() && !stack.empty())
        {
            auto parentClass = stack.top();
            if (it->first < parentClass->GetSize()) // Property offset fits within this parent class
            {
                auto pit = descriptorMap.find(parentClass);
                if (pit != descriptorMap.end())
                {
                    pit->second.mPropertyMap[it->first] = it->second;

                    it = desc.second.mPropertyMap.erase(it);
                    continue;
                }
            }
            else
            {
                it = desc.second.mPropertyMap.begin();
                stack.pop();
                continue;
            }

            ++it;
        }
    }

    auto fileToPath = [aVerbose, redEvent, scriptable, serializable, GetPrefix,
                       &prefixHierarchy](RED4ext::IRTTIType* type) -> std::string {
        RED4ext::CName name;
        type->GetName(name);

        std::string pathPrefix = GetPrefix(name.ToString());
        if (!pathPrefix.empty())
        {
            auto it = prefixHierarchy.find(pathPrefix);
            if (it != prefixHierarchy.end())
            {
                pathPrefix = std::accumulate(it->second.begin(), it->second.end(), std::string(),
                                             [](const std::string& a, const std::string& b) -> std::string {
                                                 return a + (a.length() > 0 ? "/" : "") + b;
                                             });
            }

            pathPrefix += "/";
        }

        // Additional categorization
        if (aVerbose)
        {
            if (type->GetType() == RED4ext::ERTTIType::Class)
            {
                auto* pClass = static_cast<RED4ext::CClass*>(type);
                if (pClass->IsA(redEvent))
                {
                    return pathPrefix + "event/";
                }
                else if (pClass->IsA(scriptable))
                {
                    return pathPrefix + "scriptable/";
                }
                else if (pClass->IsA(serializable))
                {
                    return pathPrefix + "serializable/";
                }
                else
                {
                    return pathPrefix + "types/";
                }
            }
            else if (type->GetType() == RED4ext::ERTTIType::Enum)
            {
                return pathPrefix + "enum/";
            }
            else if (type->GetType() == RED4ext::ERTTIType::BitField)
            {
                return pathPrefix + "bitfield/";
            }
        }

        return pathPrefix;
    };

    // Remove the prefix from the class
    auto SanitizeType = [GetPrefix](RED4ext::IRTTIType* type) -> std::string {
        RED4ext::CName name;
        type->GetName(name);
        std::string fullName = name.ToString();
        auto prefix = GetPrefix(fullName);
        return fullName.substr(prefix.size(), fullName.size() - prefix.size());
    };

    // Convert the prefixes into a namespace
    auto GetNamespace = [&prefixHierarchy](const std::string& prefix) -> std::string {
        std::string ns;
        if (!prefix.empty())
        {
            auto it = prefixHierarchy.find(prefix);
            if (it != prefixHierarchy.end())
            {
                ns = std::accumulate(it->second.begin(), it->second.end(), std::string(),
                                     [](const std::string& a, const std::string& b) -> std::string {
                                         return a + (a.length() > 0 ? "::" : "") + b;
                                     });
            }
        }

        return ns;
    };

    // Combine the namespace and sanitized name
    auto QualifiedType = [GetNamespace, GetPrefix, &prefixHierarchy](RED4ext::IRTTIType* type) -> std::string {
        RED4ext::CName name;
        type->GetName(name);

        std::string fullName = name.ToString();
        auto prefix = GetPrefix(fullName);
        auto stripped = fullName.substr(prefix.size(), fullName.size() - prefix.size());
        auto ns = GetNamespace(prefix);

        return ns.empty() ? stripped : ns + "::" + stripped;
    };

    // Third pass crawl dependencies, then build the File Descriptor to dump out
    for (auto& desc : descriptorMap)
    {
        if (desc.second.pType->parent)
        {
            desc.second.Accumulate(desc.second.pType->parent);
        }

        for (auto& prop : desc.second.mPropertyMap)
        {
            desc.second.Accumulate(prop.second->type);
        }

        ClassFileDescriptor fileDescriptor;
        desc.second.ToFileDescriptor(fileDescriptor, SanitizeType, QualifiedType, fileToPath);
        fileDescriptor.EmitFile(filePath);

        // TODO: Accumulate and emit Bitfield and Enum files too
    }
}

RED4EXT_INLINE void ClassDependencyBuilder::Accumulate(RED4ext::IRTTIType* aType)
{
    switch (aType->GetType())
    {
    case RED4ext::ERTTIType::WeakHandle:
    {
        mIndirect.emplace(static_cast<RED4ext::CWeakHandle*>(aType)->GetInnerType());
        mDirect.emplace(aType);
        break;
    }
    case RED4ext::ERTTIType::Handle:
    {
        // Handles are indirect references to the object they carry
        mIndirect.emplace(static_cast<RED4ext::CHandle*>(aType)->GetInnerType());
        mDirect.emplace(aType);
        break;
    }
    case RED4ext::ERTTIType::Array:
    {
        // Arrays may contain Handles or Direct refs to other types
        Accumulate(static_cast<RED4ext::CArray*>(aType)->GetInnerType());
        mDirect.emplace(aType);
        break;
    }
    default:
    {
        // Promote from indirect to direct dependency
        auto it = mIndirect.find(aType);
        if (it != mIndirect.end())
        {
            mIndirect.erase(it);
        }
        mDirect.emplace(aType);
        break;
    }
    }
}

RED4EXT_INLINE void ClassDependencyBuilder::ToFileDescriptor(ClassFileDescriptor& aFd, NameTransformer aNameTransformer,
                                                             NameTransformer aQualifiedTransformer,
                                                             DescriptorPath aTypeToPath)
{
    RED4ext::CName name;
    pType->GetName(name);

    aFd.name = aNameTransformer(pType);
    aFd.nameQualified = aQualifiedTransformer(pType);

    aFd.trueName = name.ToString();
    aFd.size = pType->GetSize();
    aFd.directory = aTypeToPath(pType);

    if (pType->parent)
    {
        aFd.parent = aNameTransformer(pType->parent);
        aFd.parentQualified = aQualifiedTransformer(pType->parent);
        aFd.parentSize = pType->parent->GetSize();
    }

    for (auto& dir : mDirect)
    {
        switch (dir->GetType())
        {
        case RED4ext::ERTTIType::Enum:
        case RED4ext::ERTTIType::BitField:
        case RED4ext::ERTTIType::Class:
        {
            aFd.includes.emplace(aTypeToPath(dir) + aNameTransformer(dir));
            break;
        }
        case RED4ext::ERTTIType::Array:
        {
            aFd.includes.emplace("DynArray");
            break;
        }
        case RED4ext::ERTTIType::Name:
        {
            aFd.includes.emplace("CName");
            break;
        }
        case RED4ext::ERTTIType::WeakHandle:
        case RED4ext::ERTTIType::Handle:
        {
            aFd.includes.emplace("Handle");
            break;
        }
        case RED4ext::ERTTIType::Simple:
        {
            aFd.includes.emplace("SimpleTypes");
            break;
        }
        default:
            break;
        }
    }

    for (auto& ind : mIndirect)
    {
        aFd.fwdDeclarations.emplace(aQualifiedTransformer(ind));
    }

    for (auto& prop : mPropertyMap)
    {
        std::string propTypeName = TypeToString(prop.second->type, aNameTransformer);
        std::string propTypeNameQualified = TypeToString(prop.second->type, aQualifiedTransformer);
        std::string propName = prop.second->name.ToString();

        // Filter invalid characters, WHY are some like this?
        bool isValid =
            !propName.empty() && propName.find_first_of(' ') == std::string::npos &&
            propName.find_first_of('-') == std::string::npos && propName.find_first_of('\'') == std::string::npos &&
            propName.find_first_of('(') == std::string::npos && propName.find_first_of(')') == std::string::npos;

        aFd.properties.push_back(
            {propTypeName, propTypeNameQualified, propName, isValid, prop.first, prop.second->type->GetSize()});
    }
}

RED4EXT_INLINE std::string TypeToString(RED4ext::IRTTIType* aType, NameTransformer aNameTransformer)
{
    // Handle some simple type conversions and fundamentals
    static std::unordered_map<std::string, std::string> s_typeMap = {
        {"Int8", "int8_t"},   {"Int16", "int16_t"},   {"Int32", "int32_t"},   {"Int64", "int64_t"},
        {"Uint8", "uint8_t"}, {"Uint16", "uint16_t"}, {"Uint32", "uint32_t"}, {"Uint64", "uint64_t"},
        {"Float", "float"},   {"Bool", "bool"},       {"String", "CString"},  {"gameItemID", "ItemID"}};

    std::string typeName;
    switch (aType->GetType())
    {
    case RED4ext::ERTTIType::WeakHandle:
    {
        typeName = "WeakHandle<" +
                   TypeToString(static_cast<RED4ext::CWeakHandle*>(aType)->GetInnerType(), aNameTransformer) + ">";
        break;
    }
    case RED4ext::ERTTIType::Handle:
    {
        typeName =
            "Handle<" + TypeToString(static_cast<RED4ext::CHandle*>(aType)->GetInnerType(), aNameTransformer) + ">";
        break;
    }
    case RED4ext::ERTTIType::Array:
    {
        typeName =
            "DynArray<" + TypeToString(static_cast<RED4ext::CArray*>(aType)->GetInnerType(), aNameTransformer) + ">";
        break;
    }

    case RED4ext::ERTTIType::Name:
    case RED4ext::ERTTIType::Fundamental:
    case RED4ext::ERTTIType::Class:
    case RED4ext::ERTTIType::Simple:
    case RED4ext::ERTTIType::Enum:
    case RED4ext::ERTTIType::BitField:
    {
        RED4ext::CName trueName;
        aType->GetName(trueName);

        auto it = s_typeMap.find(trueName.ToString());
        if (it != s_typeMap.end())
        {
            typeName = it->second;
        }
        else
        {
            typeName = aNameTransformer(aType);
        }

        return typeName;
    }

        // case RED4ext::ERTTIType::StaticArray:
        // case RED4ext::ERTTIType::NativeArray:
        // case RED4ext::ERTTIType::Pointer:
        // case RED4ext::ERTTIType::ResourceReference:
        // case RED4ext::ERTTIType::ResourceAsyncReference:
        // case RED4ext::ERTTIType::LegacySingleChannelCurve:
        // case RED4ext::ERTTIType::ScriptReference:

    default:
    {
        break;
    }
    }

    if (typeName.empty())
    {
        RED4ext::CName trueName;
        aType->GetName(trueName);

        // We don't have this type supported yet but we can put some bytes in as placeholder as we know its size
        typeName =
            "std::array<uint8_t, " + std::to_string(aType->GetSize()) + ">/* UNHANDLED: " + trueName.ToString() + "*/";
    }

    return typeName;
}

RED4EXT_INLINE void ClassFileDescriptor::EmitFile(std::filesystem::path aFilePath)
{
    aFilePath /= directory;
    std::filesystem::create_directories(aFilePath);
    aFilePath /= name + ".hpp";

    std::ofstream o(aFilePath);

    o << "#pragma once" << std::endl << std::endl;

    o << "#include <cstdint>" << std::endl;
    o << "#include <RED4ext/Common.hpp>" << std::endl;
    o << "#include <RED4ext/REDhash.hpp>" << std::endl;

    for (auto inc : includes)
    {
        o << "#include <RED4ext/" << inc << ".hpp>" << std::endl;
    }
    o << std::endl;

    o << "namespace RED4ext" << std::endl;
    o << "{" << std::endl;

    if (fwdDeclarations.size())
    {
        for (auto fwd : fwdDeclarations)
        {
            auto index = fwd.find_last_of("::");
            if (index != std::string::npos)
            {
                auto ns = fwd.substr(0, index - 1);
                auto fwdDecl = fwd.substr(index + 1, fwd.size() - index);

                o << "namespace " << ns << " { "
                  << "struct " << fwdDecl << "; }" << std::endl;
            }
            else
            {
                o << "struct " << fwd << ";" << std::endl;
            }
        }
        o << std::endl;
    }

    auto nsIndex = nameQualified.find_last_of("::");
    if (nsIndex != std::string::npos)
    {
        auto ns = nameQualified.substr(0, nsIndex - 1);

        o << "namespace " << ns << " { " << std::endl;
        o << "struct " << name;
    }
    else
    {
        o << "struct " << nameQualified;
    }

    if (!parent.empty())
    {
        o << " : " << parentQualified;
    }
    o << std::endl;
    o << "{" << std::endl;

    o << "    constexpr CName NAME = FNV1a(\"" << trueName << "\");" << std::endl << std::endl;

    if (properties.size())
    {
        uint32_t lastOffset = properties[0].offset;
        uint32_t lastSize = 0;

        for (auto prop : properties)
        {
            o << "    " << prop.typeQualified << " ";

            // Some properties have C++ invalid names for unknown reasons, we will convert to something valid
            // and then print the original name in the comment
            if (prop.isNameValid)
            {
                o << prop.name;
            }
            else
            {
                o << "unk" << std::hex << std::setw(2) << std::setfill('0') << std::uppercase << prop.offset;
            }

            o << "; // " << std::hex << std::setw(2) << std::setfill('0') << std::uppercase << prop.offset;
            if (!prop.isNameValid)
            {
                o << " -- " << prop.name;
            }
            o << std::endl;

            o.unsetf(std::ios::hex | std::ios::uppercase);

            // Fix gap between two properties (This doesn't seem to occur. Maybe code is wrong?)
            int64_t byteGap = static_cast<int64_t>(lastOffset + lastSize) - static_cast<int64_t>(prop.offset);
            if (byteGap > 0)
            {
                uint32_t gapStart = lastOffset + lastSize;

                o << "    uint8_t unk" << std::hex << std::setw(2) << std::setfill('0') << std::uppercase << gapStart
                  << "[0x" << byteGap << "]; // " << gapStart << std::endl;

                o.unsetf(std::ios::hex | std::ios::uppercase);
            }

            lastOffset = prop.offset;
            lastSize = prop.size;
        }

        auto& back = properties.back();
        if (back.offset + back.size < size) // Pad remainder of class based on the last property
        {
            uint32_t gapStart = back.offset + back.size;
            int64_t byteGap = size - (back.offset + back.size);
            o << "    uint8_t unk" << std::hex << std::setw(2) << std::setfill('0') << std::uppercase << gapStart
              << "[0x" << byteGap << "]; // " << gapStart << std::endl;

            o.unsetf(std::ios::hex | std::ios::uppercase);
        }
    }
    else if (size - parentSize > 0) // Pad the whole class
    {
        uint32_t gapStart = parentSize;
        int64_t byteGap = size - parentSize;
        o << "    uint8_t unk" << std::hex << std::setw(2) << std::setfill('0') << std::uppercase << gapStart << "[0x"
          << byteGap << "]; // " << gapStart << std::endl;

        o.unsetf(std::ios::hex | std::ios::uppercase);
    }

    o << "};" << std::endl;
    o << "RED4EXT_ASSERT_SIZE(" << name << ", 0x" << std::hex << std::uppercase << size << ");" << std::endl;

    if (nsIndex != std::string::npos)
    {
        auto ns = nameQualified.substr(0, nsIndex - 1);

        o << "} // namespace " << ns << std::endl;
    }

    o << "} // namespace RED4ext" << std::endl;
}

} // namespace GameReflection
