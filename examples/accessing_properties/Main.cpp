#include <chrono>
#include <iostream>

#include <RED4ext/RED4ext.hpp>

using namespace std::chrono_literals;

/*
 * To run this plugin you need to load it with RED4ext (https://github.com/WopsS/RED4ext).
 */
RED4EXT_C_EXPORT void OnUpdate()
{
    static auto last = std::chrono::steady_clock::now();
    auto now = std::chrono::steady_clock::now();

    auto diff = now - last;
    if (diff < 1min)
    {
        return;
    }

    last = now;

    /*
     * Access the property of 'GameTime' instance.
     */
    {
        auto rtti = RED4ext::CRTTISystem::Get();
        auto gameTimeCls = rtti->GetClass("GameTime");

        RED4ext::GameTime gameTime;
        RED4ext::ExecuteFunction("gameTimeSystem", "GetGameTime", &gameTime);

        auto secondsProp = gameTimeCls->GetProperty("seconds");
        auto seconds = secondsProp->GetValue<uint32_t>(&gameTime);
        std::cout << "Seconds=" << seconds;

        seconds += RED4ext::GameTime::OneDay;

        secondsProp->SetValue<uint32_t>(&gameTime, seconds);
        std::cout << "Seconds=" << seconds;

        seconds = secondsProp->GetValue<uint32_t>(&gameTime);
        std::cout << "Seconds=" << seconds;
    }

    /*
     * Check if the player is crouched.
     */
    {
        auto rtti = RED4ext::CRTTISystem::Get();
        auto engine = RED4ext::CGameEngine::Get();
        auto gameInstance = engine->framework->gameInstance;

        RED4ext::Handle<RED4ext::IScriptable> handle;
        RED4ext::ExecuteGlobalFunction("GetPlayer;GameInstance", &handle, gameInstance);

        if (handle)
        {
            auto playerPuppetCls = rtti->GetClass("PlayerPuppet");
            auto inCrouch = playerPuppetCls->GetProperty("inCrouch");
            auto value = inCrouch->GetValue<bool>(handle.instance);

            std::cout << "inCourch=" << std::boolalpha << value;
        }
    }
}
