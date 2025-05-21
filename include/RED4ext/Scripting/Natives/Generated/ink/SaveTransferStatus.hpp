#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace ink {
enum class SaveTransferStatus : int8_t
{
    ExportStarted = 0,
    ExportSuccess = 1,
    ExportFailed = 2,
    ImportChecking = 3,
    ImportStarted = 4,
    ImportSuccess = 5,
    ImportNoSave = 6,
    ImportFailed = 7,
    ImportNotEnoughSpace = 8,
};
} // namespace ink
using inkSaveTransferStatus = ink::SaveTransferStatus;
} // namespace RED4ext

// clang-format on
