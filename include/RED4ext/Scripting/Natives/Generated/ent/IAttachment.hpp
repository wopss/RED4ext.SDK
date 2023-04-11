#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext
{
namespace ent { struct IComponent; }

namespace ent
{
struct IAttachment : ISerializable
{
    static constexpr const char* NAME = "entIAttachment";
    static constexpr const char* ALIAS = NAME;

    WeakHandle<ent::IComponent> source; // 30
    WeakHandle<ent::IComponent> destination; // 40
};
RED4EXT_ASSERT_SIZE(IAttachment, 0x50);
} // namespace ent
using entIAttachment = ent::IAttachment;
} // namespace RED4ext

// clang-format on
