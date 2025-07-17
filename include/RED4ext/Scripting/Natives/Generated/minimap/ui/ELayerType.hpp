#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace minimap::ui {
enum class ELayerType : int32_t
{
    Floor = 0,
    Cover = 1,
    WallInterior = 2,
    WallExterior = 3,
    Door = 4,
    Stairs = 5,
    Road = 6,
    RoadNoAutodrive = 7,
    Count = 8,
};
} // namespace minimap::ui
using minimapuiELayerType = minimap::ui::ELayerType;
} // namespace RED4ext

// clang-format on
