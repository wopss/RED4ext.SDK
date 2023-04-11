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
namespace ent { struct EntityParameter; }

namespace ent
{
struct EntityParametersStorage : ISerializable
{
    static constexpr const char* NAME = "entEntityParametersStorage";
    static constexpr const char* ALIAS = NAME;

    DynArray<Handle<ent::EntityParameter>> parameters; // 30
};
RED4EXT_ASSERT_SIZE(EntityParametersStorage, 0x40);
} // namespace ent
using entEntityParametersStorage = ent::EntityParametersStorage;
} // namespace RED4ext

// clang-format on
