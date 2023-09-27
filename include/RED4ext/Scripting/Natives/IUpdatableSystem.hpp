#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
struct UpdateRegistrar;

struct IUpdatableSystem : IScriptable
{
    static constexpr const char* NAME = "IUpdatableSystem";
    static constexpr const char* ALIAS = NAME;

    virtual void OnRegisterUpdates(UpdateRegistrar* aRegistrar); // 108
};
RED4EXT_ASSERT_SIZE(IUpdatableSystem, 0x40);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/IUpdatableSystem-inl.hpp>
#endif
