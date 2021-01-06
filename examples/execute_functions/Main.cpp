#include <chrono>
#include <iostream>

#include <RED4ext/RED4ext.hpp>

using namespace std::chrono_literals;

/*
 * To run this plugin you need to load it with RED4ext (https://github.com/WopsS/RED4ext).
 */
RED4EXT_C_EXPORT void OnUpdate()
{
    static auto lastGet = std::chrono::steady_clock::now();
    static auto lastSet = std::chrono::steady_clock::now();
    auto now = std::chrono::steady_clock::now();

    /*
     * Print the game time every minute.
     */
    if ((now - lastGet) >= 1min)
    {
        RED4ext::GameTime gameTime;
        RED4ext::ExecuteFunction("gameTimeSystem", "GetGameTime", &gameTime);

        std::cout << gameTime.ToString() << std::endl;
        lastGet = now;
    }

    /*
     * Shift the game time by 10 hours, 30 minutes and 15 seconds every 5 minutes.
     */
    if ((now - lastSet) >= 5min)
    {
        RED4ext::GameTime gameTime;
        RED4ext::ExecuteFunction("gameTimeSystem", "GetGameTime", &gameTime);

        gameTime.AddHours(10);
        gameTime.AddMinutes(30);
        gameTime.AddSeconds(15);

        RED4ext::ExecuteFunction("gameTimeSystem", "SetGameTimeBySeconds", nullptr, gameTime.ToSeconds());
        lastSet = now;
    }
}
