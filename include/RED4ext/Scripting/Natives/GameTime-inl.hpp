#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/GameTime.hpp>
#endif

#include <iomanip>
#include <sstream>

RED4EXT_INLINE RED4ext::GameTime::GameTime(uint32_t aSeconds)
    : seconds(aSeconds)
{
}

RED4EXT_INLINE RED4ext::GameTime::GameTime(uint32_t aHour, uint32_t aMinute, uint32_t aSecond)
    : GameTime(0, aHour, aMinute, aSecond)
{
}

RED4EXT_INLINE RED4ext::GameTime::GameTime(uint32_t aDay, uint32_t aHour, uint32_t aMinute, uint32_t aSecond)
{
    SetTime(aDay, aHour, aMinute, aSecond);
}

RED4EXT_INLINE const std::string RED4ext::GameTime::ToString() const
{
    std::stringstream result;
    result << GetDay() << " " << std::setfill('0') << std::setw(2) << GetHour() << ":" << std::setw(2) << GetMinute()
           << ":" << std::setw(2) << GetSecond();
    return result.str();
}

RED4EXT_INLINE const uint32_t RED4ext::GameTime::ToSeconds() const
{
    return seconds;
}

RED4EXT_INLINE const uint32_t RED4ext::GameTime::GetDay() const
{
    return seconds / OneDay;
}

RED4EXT_INLINE const uint32_t RED4ext::GameTime::GetHour() const
{
    return (seconds % OneDay) / OneHour;
}

RED4EXT_INLINE const uint32_t RED4ext::GameTime::GetMinute() const
{
    return (seconds % OneHour) / OneMinute;
}

RED4EXT_INLINE const uint32_t RED4ext::GameTime::GetSecond() const
{
    return seconds % OneMinute;
}

RED4EXT_INLINE void RED4ext::GameTime::SetDay(uint32_t aDay)
{
    SetTime(aDay, GetHour(), GetMinute(), GetSecond());
}

RED4EXT_INLINE void RED4ext::GameTime::SetHour(uint32_t aHour)
{
    SetTime(GetDay(), aHour, GetMinute(), GetSecond());
}

RED4EXT_INLINE void RED4ext::GameTime::SetMinute(uint32_t aMinute)
{
    SetTime(GetDay(), GetHour(), aMinute, GetSecond());
}

RED4EXT_INLINE void RED4ext::GameTime::SetSecond(uint32_t aSecond)
{
    SetTime(GetDay(), GetHour(), GetMinute(), aSecond);
}

RED4EXT_INLINE void RED4ext::GameTime::SetTime(uint32_t aDay, uint32_t aHour, uint32_t aMinute, uint32_t aSecond)
{
    seconds = 0;

    AddDays(aDay);
    AddHours(aHour);
    AddMinutes(aMinute);
    AddSeconds(aSecond);
}

RED4EXT_INLINE void RED4ext::GameTime::AddDays(uint32_t aDays)
{
    seconds += aDays * OneDay;
}

RED4EXT_INLINE void RED4ext::GameTime::AddHours(uint32_t aHours)
{
    seconds += aHours * OneHour;
}

RED4EXT_INLINE void RED4ext::GameTime::AddMinutes(uint32_t aMinutes)
{
    seconds += aMinutes * OneMinute;
}

RED4EXT_INLINE void RED4ext::GameTime::AddSeconds(uint32_t aSeconds)
{
    seconds += aSeconds;
}
