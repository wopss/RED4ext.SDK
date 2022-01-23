#pragma once

#include <RED4ext/Api/v0/GameStates.hpp>
#include <RED4ext/Api/v0/Hooking.hpp>
#include <RED4ext/Api/v0/Logger.hpp>

namespace RED4ext::v0
{
struct Sdk
{
    /**
     * @brief The game's version.
     */
    VersionInfo* runtime;

    Logger* logger;
    Hooking* hooking;
    GameStates* gameStates;
};
} // namespace RED4ext::v0
