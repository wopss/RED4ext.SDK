#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/Natives/Generated/Vector4.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimPropagation.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/StimType.hpp>
#include <RED4ext/Scripting/Natives/Generated/sense/BaseStimuliEvent.hpp>

namespace RED4ext
{
namespace game { struct Object; }
namespace game::data { struct Stim_Record; }
namespace sense { struct StimuliData; }

namespace sense { 
struct StimuliEvent : sense::BaseStimuliEvent
{
    static constexpr const char* NAME = "senseStimuliEvent";
    static constexpr const char* ALIAS = "StimuliEvent";

    WeakHandle<game::Object> sourceObject; // 50
    WeakHandle<game::data::Stim_Record> stimRecord; // 60
    Vector4 sourcePosition; // 70
    float radius; // 80
    float detection; // 84
    game::data::StimType stimType; // 88
    game::data::StimPropagation stimPropagation; // 8C
    Handle<sense::StimuliData> data; // 90
};
RED4EXT_ASSERT_SIZE(StimuliEvent, 0xA0);
} // namespace sense
using StimuliEvent = sense::StimuliEvent;
} // namespace RED4ext
