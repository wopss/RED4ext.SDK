#pragma once

#include <RED4ext/Api/v0/PluginInfo.hpp>
#include <RED4ext/Api/v0/Sdk.hpp>

namespace RED4ext
{
/**
 * @brief The latest plugin info type.
 */
using PluginInfo = v0::PluginInfo;

/**
 * @brief The latest version info type.
 */
using SemVer = v0::SemVer;

/**
 * @brief The latest version info type.
 */
using FileVer = v0::FileVer;

/**
 * @brief The latest RED4ext.
 */
using Sdk = v0::Sdk;

/**
 * @brief The latest hooking.
 */
using Logger = v0::Logger;

/**
 * @brief The latest hooking.
 */
using Hooking = v0::Hooking;

/**
 * @brief The latest game state type.
 */
using GameStates = v0::GameStates;

/**
 * @brief The latest game state type.
 */
using GameState = v0::GameState;

/**
 * @brief The latest game state type.
 */
using Scripts = v0::Scripts;
} // namespace RED4ext

/*
 * @brief Compute the runtime address of an offset.
 *
 * @example
 *  const auto offset = 0x14022EAD0 - 0x140000000;
 *  const auto addr =  RED4EXT_OFFSET_TO_ADDR(offset);
 */
#ifndef RED4EXT_OFFSET_TO_ADDR
#define RED4EXT_OFFSET_TO_ADDR(offset)                                                                                 \
    reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(GetModuleHandle(nullptr)) + offset)
#endif
