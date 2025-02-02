#pragma once

#include <RED4ext/Api/v1/FileVer.hpp>
#include <RED4ext/Api/v1/GameStates.hpp>
#include <RED4ext/Api/v1/Hooking.hpp>
#include <RED4ext/Api/v1/Logger.hpp>
#include <RED4ext/Api/v1/Rendering.hpp>
#include <RED4ext/Api/v1/Scripts.hpp>

#include <functional>

namespace RED4ext::v1
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
    std::reference_wrapper<SemVer> runtime;

    std::reference_wrapper<Logger> logger;
    std::reference_wrapper<Hooking> hooking;
    std::reference_wrapper<GameStates> gameStates;
    std::reference_wrapper<Scripts> scripts;
    std::reference_wrapper<Rendering> rendering;
};
} // namespace RED4ext::v1
