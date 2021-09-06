#pragma once

#include <cstdint>

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/GameStates.hpp>

namespace RED4ext
{
enum class EGameStateStatus
{
    Uninitialized = 0,
    Initialized,
    Ran,
    Done,
};

struct CGameOptions
{
    int16_t interopStartingPort;                  // 00
    int8_t renderPreset;                          // 02
    int8_t unk3;                                  // 03
    int32_t lowSettingsOptions;                   // 04
    int32_t texQualityLevel;                      // 08
    int32_t meshQualityLevel;                     // 0C
    int32_t watchdogTimeout;                      // 10
    int8_t scriptVersion;                         // 14
    int16_t scriptProfiling;                      // 16
    CString scriptsBlobPath;                      // 18
    CString tweakdbBlobPath;                      // 38
    int8_t unattended1;                           // 58
    int8_t unattended2;                           // 59
    int8_t unattended3;                           // 5A
    int8_t forceRawTweakDB;                       // 5B
    int8_t pvdDumpToFile;                         // 5C
    int8_t profiler;                              // 5D
    int8_t unk5E;                                 // 5E
    int8_t unk5F;                                 // 5F
    int8_t unk60;                                 // 60
    int64_t unk68;                                // 68
    CString automator;                            // 70
    CString windowCaption;                        // 90
    int8_t isBackendGameEngine;                   // B0
    int8_t disableRayTracing;                     // B1
    int8_t disableRayTracedReflection;            // B2
    int8_t disableRayTracedTransparentReflection; // B3
    int32_t rayTracingAmbientOcclusionRayNumber;  // B4
    int8_t dlss;                                  // B8
    int32_t dlssQuality;                          // BC
    int8_t unkC0;                                 // C0
};
RED4EXT_ASSERT_SIZE(CGameOptions, 0xC8);

struct CBaseGameApplication
{
    virtual void sub_0() = 0;  // 00
    virtual void sub_8() = 0;  // 08
    virtual void sub_10() = 0; // 10
    virtual void sub_18() = 0; // 18
    virtual void sub_20() = 0; // 20
    virtual void sub_28() = 0; // 28
    virtual void sub_30() = 0; // 30
    virtual void sub_38() = 0; // 38
    virtual void sub_40() = 0; // 40
    virtual void sub_48() = 0; // 48
    virtual void sub_50() = 0; // 50
    virtual void sub_58() = 0; // 58
    virtual void sub_60() = 0; // 60
    virtual void sub_68() = 0; // 68
    virtual void sub_70() = 0; // 70

    int64_t unk8;       // 08
    int64_t unk10;      // 10
    int64_t unk18;      // 18
    int64_t unk20;      // 20
    CString enginePath; // 28
    CString r6Path;     // 48
    CString editorPath; // 68
};
RED4EXT_ASSERT_SIZE(CBaseGameApplication, 0x88);

struct CGameApplication : CBaseGameApplication
{
    CGameOptions options;            // 88
    DynArray<uint32_t> stateIndexes; // 150
    DynArray<IGameState*> states;    // 160
    int64_t unk170;                  // 170
    IGameState* currState;           // 178
    IGameState* nextState;           // 180
    EGameStateStatus status;         // 188
    char* name;                      // 190
    uint32_t result;                 // 198
};
RED4EXT_ASSERT_SIZE(CGameApplication, 0x1A0);
RED4EXT_ASSERT_OFFSET(CGameApplication, currState, 0x178);
RED4EXT_ASSERT_OFFSET(CGameApplication, nextState, 0x180);
RED4EXT_ASSERT_OFFSET(CGameApplication, status, 0x188);
RED4EXT_ASSERT_OFFSET(CGameApplication, name, 0x190);
RED4EXT_ASSERT_OFFSET(CGameApplication, result, 0x198);
} // namespace RED4ext
