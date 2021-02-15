#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/REDhash.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/generated/Vector4.hpp>
#include <RED4ext/Types/generated/sense/BaseStimuliEvent.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace sense { struct StimuliData; }

namespace sense { 
struct StimuliEvent : sense::BaseStimuliEvent
{
    static constexpr const char* NAME = "senseStimuliEvent";
    static constexpr const char* ALIAS = "StimuliEvent";

    WeakHandle<game::Object> sourceObject; // 50
    Vector4 sourcePosition; // 60
    float radius; // 70
    float detection; // 74
    Handle<sense::StimuliData> data; // 78
    uint8_t unk88[0x90 - 0x88]; // 88
};
RED4EXT_ASSERT_SIZE(StimuliEvent, 0x90);
} // namespace sense
using StimuliEvent = sense::StimuliEvent;
} // namespace RED4ext
