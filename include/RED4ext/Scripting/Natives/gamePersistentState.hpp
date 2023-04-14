#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext::game
{
struct PersistentState : IScriptable
{
    static constexpr const char* NAME = "gamePersistentState";
    static constexpr const char* ALIAS = "PersistentState";

    virtual void OnInitialize();    // 110
    virtual void sub_118();         // 118
    virtual void sub_120(void* a1); // 120 - Called during PersistencySystem::OnInitialize on default object
    virtual void sub_128(void* a1); // 128

    uint8_t unk40[0x68 - 0x40]; // 40
};
RED4EXT_ASSERT_SIZE(PersistentState, 0x68);
} // namespace RED4ext::game

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/gamePersistentState-inl.hpp>
#endif
