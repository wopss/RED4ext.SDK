#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
enum class FunctionalTestsResultCode : int32_t
{
    Valid = 0,
    MalformedEntityDescr = 1,
    EntityNotFound = 2,
    ComponentNotFound = 3,
    InvalidEntityType = 4,
    InvalidComponentType = 5,
    InvalidNodeRef = 6,
    SlotNotFound = 7,
    InventoryError = 8,
    InvalidInputAction = 9,
    InvalidInputActionCallback = 10,
    EmptyContainer = 12,
};
} // namespace RED4ext

// clang-format on
