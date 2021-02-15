#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/Types/generated/game/data/DataNode.hpp>

namespace RED4ext
{
namespace game::data { struct GroupNode; }
namespace game::data { struct PackageNode; }
namespace game::data { struct VariableNode; }

namespace game::data { 
struct FileNode : game::data::DataNode
{
    static constexpr const char* NAME = "gamedataFileNode";
    static constexpr const char* ALIAS = NAME;

    CString packageName; // 98
    uint8_t unkB8[0x2C0 - 0xB8]; // B8
    alignas(8) StaticArray<WeakHandle<game::data::PackageNode>, 16> packageDependencies; // 2C0
    WeakHandle<game::data::PackageNode> package; // 3C8
    DynArray<Handle<game::data::VariableNode>> variables; // 3D8
    DynArray<Handle<game::data::GroupNode>> groups; // 3E8
    uint8_t unk3F8[0x408 - 0x3F8]; // 3F8
};
RED4EXT_ASSERT_SIZE(FileNode, 0x408);
} // namespace game::data
} // namespace RED4ext
