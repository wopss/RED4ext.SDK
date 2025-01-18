#pragma once

#include <RED4ext/Common.hpp>
#include <cstdint>

namespace RED4ext
{
struct GameInstance;

struct ScriptGameInstance
{
    /**
     * @brief Construct an instance of "ScriptGameInstance" native type.
     * @param aInstance The instance pointer, if NULL it will be retrived automatically from CGameFramework.
     */
    ScriptGameInstance(GameInstance* aInstance = nullptr);

    GameInstance* instance;
    int8_t unk8;
    int64_t unk10;
};
RED4EXT_ASSERT_SIZE(ScriptGameInstance, 0x18);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/ScriptGameInstance-inl.hpp>
#endif
