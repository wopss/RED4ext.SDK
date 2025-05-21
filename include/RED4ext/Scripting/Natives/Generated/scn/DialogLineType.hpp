#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace scn {
enum class DialogLineType : int32_t
{
    None = 0,
    Regular = 1,
    Holocall = 2,
    SceneComment = 3,
    OverHead = 4,
    Radio = 5,
    GlobalTV = 6,
    Invisible = 7,
    OverHeadAlwaysVisible = 9,
    OwnerlessRegular = 10,
    AlwaysCinematicNoSpeaker = 11,
    GlobalTVAlwaysVisible = 12,
    Narrator = 13,
};
} // namespace scn
using scnDialogLineType = scn::DialogLineType;
} // namespace RED4ext

// clang-format on
