#pragma once

#include <filesystem>
#include <functional>
#include <map>
#include <set>
#include <unordered_set>

#include <RED4ext/CName.hpp>

namespace RED4ext
{
struct CClass;
struct IRTTIType;
struct CProperty;
struct CEnum;
struct CBitfield;
} // namespace RED4ext

namespace RED4ext::GameReflection
{
using GetPrefix = std::function<std::string(const std::string&)>;
using NameSantizer = std::function<std::string(const std::string&, bool&)>;
using NameTransformer = std::function<std::string(const RED4ext::IRTTIType*)>;
using DescriptorPath = std::function<std::string(const RED4ext::IRTTIType*)>;
using NamespaceTransformer = std::function<std::vector<std::string>(const RED4ext::IRTTIType*)>;
using FixedTypeMapping = std::unordered_map<RED4ext::CName, std::string, RED4ext::CName>;

static constexpr const char* INVALID_CHARACTERS = R"(-|'|\(|\)|\]|\[|/|\.|\s|:)";
static constexpr const char* INVALID_KEYWORDS =
    R"(\bregister\b|\bbool\b|\bint\b|\btemplate\b|\btrue\b|\bfalse\b|\bsmall\b|\bPlane\b)"; // small conflicts with
                                                                                            // windows macro, Plane
                                                                                            // conflicts with itself as
                                                                                            // a type name

struct ClassFileDescriptor
{
    std::set<std::string> includes;
    std::set<std::string> fwdDeclarations;

    std::string name;
    std::string nameQualified;
    std::string trueName;
    std::string alias;
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
        size_t offset = 0;
        size_t size = 0;
    };

    std::vector<PropertyDescriptor> properties;
    std::vector<PropertyDescriptor> holderProperties;

    void EmitFile(std::filesystem::path aFilePath, NameSantizer aSanitizer);
};

struct EnumFileDescriptor
{
    EnumFileDescriptor(const RED4ext::CEnum* pEnum, NameTransformer aNameTransformer,
                       NameTransformer aQualifiedTransformer, DescriptorPath aTypeToPath);

    std::string name;
    std::string nameQualified;
    std::string trueName;
    std::string alias;
    std::string directory;
    size_t size = 0;
    std::map<uint64_t, std::string> enumMap;
    std::map<std::string, uint64_t> enumAlias;

    void EmitFile(std::filesystem::path aFilePath, NameSantizer aSanitizer);
};

struct BitfieldFileDescriptor
{
    BitfieldFileDescriptor(const RED4ext::CBitfield* pEnum, NameTransformer aNameTransformer,
                           NameTransformer aQualifiedTransformer, DescriptorPath aTypeToPath);

    std::string name;
    std::string nameQualified;
    std::string trueName;
    std::string alias;
    std::string directory;
    size_t size = 0;
    std::vector<std::string> bitNames;

    void EmitFile(std::filesystem::path aFilePath, NameSantizer aSanitizer);
};

struct ClassDependencyBuilder
{
    const RED4ext::CClass* pType;
    std::unordered_set<const RED4ext::IRTTIType*> mDirect;
    std::unordered_set<const RED4ext::IRTTIType*> mIndirect;
    std::map<uint64_t, const RED4ext::CProperty*> mPropertyMap;
    std::map<uint64_t, const RED4ext::CProperty*> mHolderPropertyMap;

    void Accumulate(const RED4ext::IRTTIType* type);

    void ToFileDescriptor(ClassFileDescriptor& aFd, NameTransformer aNameTransformer,
                          NameTransformer aQualifiedTransformer, DescriptorPath aTypeToPath,
                          const FixedTypeMapping& aFixedMapping, bool aVerbose);
};

std::string TypeToString(const RED4ext::IRTTIType* aType, NameTransformer aNameTransformer, bool aVerbose = false);

void EmitBulkGenerated(std::filesystem::path aFilePath, const std::set<std::string>& aIncludes);

void Dump(std::filesystem::path aFilePath, bool aVerbose = false, bool aExtendedPath = false,
          bool aPropertyHolders = false);

} // namespace RED4ext::GameReflection
