#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace game::data { struct FileNode; }
namespace game::data { struct GroupNode; }
namespace game::data { struct VariableNode; }

namespace game::data
{
struct PackageNode : ISerializable
{
    static constexpr const char* NAME = "gamedataPackageNode";
    static constexpr const char* ALIAS = NAME;

    CString name; // 30
    uint8_t unk50[0xA0 - 0x50]; // 50
    DynArray<Handle<game::data::FileNode>> files; // A0
    DynArray<Handle<game::data::VariableNode>> serializedVariables; // B0
    DynArray<Handle<game::data::GroupNode>> serializedGroups; // C0
};
RED4EXT_ASSERT_SIZE(PackageNode, 0xD0);
} // namespace game::data
using gamedataPackageNode = game::data::PackageNode;
} // namespace RED4ext

// clang-format on
