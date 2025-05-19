#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace services {
enum class CloudSavesQueryStatus : int8_t
{
    NotFetched = 0,
    FetchedSuccessfully = 1,
    CloudSavesDisabled = 2,
    NotLoggedIn = 3,
    FetchFailed = 4,
};
} // namespace services
using servicesCloudSavesQueryStatus = services::CloudSavesQueryStatus;
using CloudSavesQueryStatus = services::CloudSavesQueryStatus;
} // namespace RED4ext

// clang-format on
