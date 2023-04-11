#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ent { struct IComponent; }

namespace ent
{
struct ComponentsStorage : ISerializable
{
    static constexpr const char* NAME = "entComponentsStorage";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<ent::IComponent>> components; // 30
};
RED4EXT_ASSERT_SIZE(ComponentsStorage, 0x40);
} // namespace ent
using entComponentsStorage = ent::ComponentsStorage;
} // namespace RED4ext

// clang-format on
