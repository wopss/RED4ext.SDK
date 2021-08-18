#pragma once

#include <cstdint>
#include <string>

#include <RED4ext/Common.hpp>

namespace RED4ext
{
struct GameTime
{
    static constexpr uint32_t OneSecond = 1;
    static constexpr uint32_t OneMinute = 60 * OneSecond;
    static constexpr uint32_t OneHour = 60 * OneMinute;
    static constexpr uint32_t OneDay = 24 * OneHour;

    GameTime(uint32_t aSeconds = 0);

    GameTime(uint32_t aHour, uint32_t aMinute, uint32_t aSecond);
    GameTime(uint32_t aDay, uint32_t aHour, uint32_t aMinute, uint32_t aSecond);

    const std::string ToString() const;
    const uint32_t ToSeconds() const;

    const uint32_t GetDay() const;
    const uint32_t GetHour() const;
    const uint32_t GetMinute() const;
    const uint32_t GetSecond() const;

    void SetDay(uint32_t aDay);
    void SetHour(uint32_t aHour);
    void SetMinute(uint32_t aMinute);
    void SetSecond(uint32_t aSecond);

    void SetTime(uint32_t aDay, uint32_t aHour, uint32_t aMinute, uint32_t aSecond);

    void AddDays(uint32_t aDays);
    void AddHours(uint32_t aHours);
    void AddMinutes(uint32_t aMinutes);
    void AddSeconds(uint32_t aSeconds);

private:
    uint32_t seconds;
};
RED4EXT_ASSERT_SIZE(GameTime, 0x4);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/GameTime-inl.hpp>
#endif
