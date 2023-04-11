#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/CName.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/IComponent.hpp>

namespace RED4ext
{
namespace ent
{
struct ExternalComponent : ent::IComponent
{
    static constexpr const char* NAME = "entExternalComponent";
    static constexpr const char* ALIAS = NAME;

    CName externalComponentName; // 90
};
RED4EXT_ASSERT_SIZE(ExternalComponent, 0x98);
} // namespace ent
using entExternalComponent = ent::ExternalComponent;
} // namespace RED4ext

// clang-format on
