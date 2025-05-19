#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace game::device {
enum class RequestType : int32_t
{
    None = 0,
    External = 1,
    Remote = 2,
    Direct = 3,
    Internal = 4,
};
} // namespace game::device
using gamedeviceRequestType = game::device::RequestType;
} // namespace RED4ext

// clang-format on
