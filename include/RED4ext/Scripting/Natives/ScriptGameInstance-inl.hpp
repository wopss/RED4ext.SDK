#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/ScriptGameInstance.hpp>
#endif

#include <RED4ext/GameEngine.hpp>

RED4EXT_INLINE RED4ext::ScriptGameInstance::ScriptGameInstance(GameInstance* aInstance)
    : instance(aInstance)
    , unk8(1)
    , unk10(0)
{
    if (!aInstance)
    {
        auto engine = RED4ext::CGameEngine::Get();
        if (engine)
        {
            auto framework = engine->framework;
            if (framework)
            {
                instance = framework->gameInstance;
            }
        }
    }
}
