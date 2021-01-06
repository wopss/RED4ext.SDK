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
     * Print the game time.
     */
    {
        RED4ext::GameTime gameTime;
        RED4ext::ExecuteFunction("gameTimeSystem", "GetGameTime", &gameTime);

        std::cout << gameTime.ToString() << std::endl;
    }

    /*
     * Shift the game time by 10 hours, 30 minutes and 15 seconds.
     */
    {
        RED4ext::GameTime gameTime;
        RED4ext::ExecuteFunction("gameTimeSystem", "GetGameTime", &gameTime);

        gameTime.AddHours(10);
        gameTime.AddMinutes(30);
        gameTime.AddSeconds(15);

        RED4ext::ExecuteFunction("gameTimeSystem", "SetGameTimeBySeconds", nullptr, gameTime.ToSeconds());
    }
}
