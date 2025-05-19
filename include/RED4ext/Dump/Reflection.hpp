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
struct CBaseRTTIType;
struct CProperty;
struct CEnum;
struct CBitfield;
} // namespace RED4ext

namespace RED4ext::GameReflection
{
using GetPrefix = std::function<std::string(const std::string&)>;
using NameSantizer = std::function<std::string(const std::string&, bool&)>;
using NameTransformer = std::function<std::string(const RED4ext::CBaseRTTIType*)>;
using DescriptorPath = std::function<std::string(const RED4ext::CBaseRTTIType*)>;
using NamespaceTransformer = std::function<std::vector<std::string>(const RED4ext::CBaseRTTIType*)>;
using TypeChecker = std::function<bool(const RED4ext::CBaseRTTIType*)>;
using FixedTypeMapping = std::unordered_map<RED4ext::CName, std::string, RED4ext::CName>;

static constexpr const char* INVALID_CHARACTERS = R"(-|'|\(|\)|\]|\[|/|\.|\s|:)";
// small conflicts with windows macro
// Plane conflicts with itself as a type name
static constexpr const char* INVALID_KEYWORDS =
    R"(\bregister\b|\bbool\b|\bint\b|\btemplate\b|\bdefault\b|\btrue\b|\bfalse\b|\bsmall\b|\bswitch\b|\bPlane\b)";

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
    std::string override;
    bool usedAsHandle;
    size_t size = 0;
    size_t alignment = 0;
    size_t parentSize = 0;

    struct PropertyDescriptor
    {
        std::string type;
        std::string typeQualified;
        std::string name;
        size_t offset = 0;
        size_t size = 0;
        size_t alignment = 0;
    };

    std::vector<PropertyDescriptor> properties;
    std::vector<PropertyDescriptor> holderProperties;

    void EmitFile(std::filesystem::path aOutPath, NameSantizer aSanitizer);
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
    std::map<int64_t, std::string> enumMap;
    std::map<std::string, uint64_t> enumAlias;

    void EmitFile(std::filesystem::path aOutPath, NameSantizer aSanitizer);
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

    void EmitFile(std::filesystem::path aOutPath, NameSantizer aSanitizer);
};

struct ClassDependencyBuilder
{
    const RED4ext::CClass* pType;
    std::unordered_set<const RED4ext::CBaseRTTIType*> mDirect;
    std::unordered_set<const RED4ext::CBaseRTTIType*> mIndirect;
    std::map<uint64_t, const RED4ext::CProperty*> mPropertyMap;
    std::map<uint64_t, const RED4ext::CProperty*> mHolderPropertyMap;

    void Accumulate(const RED4ext::CBaseRTTIType* type);

    void ToFileDescriptor(ClassFileDescriptor& aFd, NameTransformer aNameTransformer,
                          NameTransformer aQualifiedTransformer, DescriptorPath aTypeToPath,
                          DescriptorPath aTypeToOverride, TypeChecker aHandleCompatChecker,
                          const FixedTypeMapping& aFixedMapping, bool aVerbose);
};

std::string TypeToString(const RED4ext::CBaseRTTIType* aType, NameTransformer aNameTransformer, bool aVerbose = false);

void EmitBulkGenerated(std::filesystem::path aOutPath, const std::set<std::string>& aIncludes);

void Dump(std::filesystem::path aOutPath, std::filesystem::path aIncludePath = "", bool aVerbose = false,
          bool aExtendedPath = false, bool aPropertyHolders = false);

} // namespace RED4ext::GameReflection

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Dump/Reflection-inl.hpp>
#endif
