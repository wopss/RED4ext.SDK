#pragma once

#include <RED4ext/Api/v1/PluginInfo.hpp>
#include <RED4ext/Api/v1/Sdk.hpp>

namespace RED4ext
{
/**
 * @brief The latest plugin info type.
 */
using PluginInfo = v1::PluginInfo;

/**
 * @brief The latest version info type.
 */
using SemVer = v1::SemVer;

/**
 * @brief The latest version info type.
 */
using FileVer = v1::FileVer;

/**
 * @brief The latest RED4ext.
 */
using Sdk = v1::Sdk;

/**
 * @brief The latest logger.
 */
using Logger = v1::Logger;

/**
 * @brief The latest hooking.
 */
using Hooking = v1::Hooking;

/**
 * @brief The latest game state handler.
 */
using GameStates = v1::GameStates;

/**
 * @brief The latest game state for hooking.
 */
using GameState = v1::GameState;

/**
 * @brief The latest scripts compiler interface.
 */
using Scripts = v1::Scripts;

/**
 * @brief The latest game state hook result.
 */
using EGameStateResult = v1::EGameStateResult;
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
    reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr)) + offset)
#endif
