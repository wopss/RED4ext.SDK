#pragma once

#include <RED4ext/Api/v0/FileVer.hpp>
#include <RED4ext/Api/v0/GameStates.hpp>
#include <RED4ext/Api/v0/Hooking.hpp>
#include <RED4ext/Api/v0/Logger.hpp>
#include <RED4ext/Api/v0/Scripts.hpp>

namespace RED4ext::v0
{
struct Sdk
{
    /**
     * @brief The game's version.
     *
     * @note This is the product version of the executable NOT the file version! CDPR might release multiple versions
     * with the same product version, e.g. Patch 1.5, Patch 1.5 Hotfix 1, Patch 1.5 Hotfix 2, etc.. All of these have
     * the same product version, i.e. 1.5.0.
     */
    SemVer* runtime;

    Logger* logger;
    Hooking* hooking;
    GameStates* gameStates;
    Scripts* scripts;
};
} // namespace RED4ext::v0
