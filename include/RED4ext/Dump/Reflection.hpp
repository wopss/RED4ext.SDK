#pragma once

#include <filesystem>
#include <functional>
#include <map>
#include <set>
#include <unordered_set>

namespace RED4ext
{
struct CClass;
struct IRTTIType;
struct CProperty;
} // namespace RED4ext

namespace GameReflection
{
using GetPrefix = std::function<std::string(const std::string&)>;
using NameTransformer = std::function<std::string(RED4ext::IRTTIType*)>;
using DescriptorPath = std::function<std::string(RED4ext::IRTTIType*)>;
using NamespaceTransformer = std::function<std::vector<std::string>(RED4ext::IRTTIType*)>;

struct ClassFileDescriptor
{
    std::set<std::string> includes;
    std::set<std::string> fwdDeclarations;

    std::string name;
    std::string nameQualified;
    std::string trueName;
    std::string parent;
    std::string parentQualified;
    std::string directory;
    size_t size = 0;
    size_t parentSize = 0;

    struct PropertyDescriptor
    {
        std::string type;
        std::string typeQualified;
        std::string name;
        bool isNameValid = false;
        size_t offset = 0;
        size_t size = 0;
    };

    std::vector<PropertyDescriptor> properties;

    void EmitFile(std::filesystem::path aFilePath);
};

struct ClassDependencyBuilder
{
    RED4ext::CClass* pType;
    std::unordered_set<RED4ext::IRTTIType*> mDirect;
    std::unordered_set<RED4ext::IRTTIType*> mIndirect;
    std::map<uint64_t, RED4ext::CProperty*> mPropertyMap;

    void Accumulate(RED4ext::IRTTIType* type);

    void ToFileDescriptor(ClassFileDescriptor& aFd, NameTransformer aNameTransformer,
                          NameTransformer aQualifiedTransformer, DescriptorPath aTypeToPath);
};

std::string TypeToString(RED4ext::IRTTIType* aType, NameTransformer aNameTransformer);

void Dump(std::filesystem::path aFilePath, bool aVerbose = false);

} // namespace GameReflection
