#pragma once

#include <cstdint>

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>

namespace RED4ext
{
struct IGameState;
enum class EGameStateType : uint32_t;

enum class EGameStateStatus
{
    Uninitialized = 0,
    Initialized,
    Ran,
    Done,
};

struct CGameOptions
{
    int16_t interopstartingport; // 00
    int8_t renderPreset;         // 02
    int8_t unk3;                 // 03
    int32_t lowSettingsOptions;  // 04
    int32_t texQualityLevel;     // 08
    int32_t meshQualityLevel;    // 0C
    int32_t watchdogTimeout;     // 10
    int8_t scriptVersion;        // 14
    int16_t scriptProfiling;     // 16
    CString scriptsBlobPath;     // 18
    CString tweakdbBlobPath;     // 38
    int8_t unattended58;         // 58
    int8_t unattended59;         // 59
    int8_t unattended5A;         // 5A
    int8_t forceRawTweakDB;      // 5B
    int8_t pvdDumpToFile;        // 5C
    int8_t profiler;             // 5D
    int8_t unk5E;                // 5E
    int8_t unk5F;                // 5F
    int8_t unattended60;         // 60
    int64_t unk68;               // 68
    CString automator;           // 70
    CString windowCaption;       // 90
    int8_t isBackendGameEngine;  // B0
};
RED4EXT_ASSERT_SIZE(CGameOptions, 0xB8);

struct CBaseGameApplication
{
    virtual ~CBaseGameApplication(); // 00
    virtual void sub_8() = 0;        // 08
    virtual void sub_10() = 0;       // 10
    virtual void sub_18() = 0;       // 18
    virtual void sub_20() = 0;       // 20
    virtual void sub_28() = 0;       // 28
    virtual void sub_30() = 0;       // 30
    virtual void sub_38() = 0;       // 38
    virtual void sub_40() = 0;       // 40
    virtual void sub_48() = 0;       // 48
    virtual void sub_50() = 0;       // 50
    virtual void sub_58() = 0;       // 58
    virtual void sub_60() = 0;       // 60
    virtual void sub_68() = 0;       // 68
    virtual void sub_70() = 0;       // 70

    CString unk8;    // 08
    CString unk28;   // 28
    CString unk48;   // 48
    CString unk68;   // 68
    CString unk88;   // 88
    CString unkA8;   // A8
    CString unkC8;   // C8
    CString unkE8;   // E8
    uint8_t unk108;  // 108
    uint64_t unk110; // 110
    uint64_t unk118; // 118
    uint64_t unk120; // 120
    uint64_t unk128; // 128
};
RED4EXT_ASSERT_SIZE(CBaseGameApplication, 0x130);

struct CGameApplication : CBaseGameApplication
{
    CGameOptions options;
    DynArray<EGameStateType> stateTypes;
    DynArray<IGameState*> states;
    int64_t unk208;
    IGameState* currState;
    IGameState* nextState;
    EGameStateStatus status;
    const char* name;
    int8_t unk230;
    int32_t result;
};
RED4EXT_ASSERT_SIZE(CGameApplication, 0x238);
RED4EXT_ASSERT_OFFSET(CGameApplication, stateTypes, 0x1E8);
RED4EXT_ASSERT_OFFSET(CGameApplication, states, 0x1F8);
RED4EXT_ASSERT_OFFSET(CGameApplication, currState, 0x210);
RED4EXT_ASSERT_OFFSET(CGameApplication, nextState, 0x218);
RED4EXT_ASSERT_OFFSET(CGameApplication, status, 0x220);
RED4EXT_ASSERT_OFFSET(CGameApplication, name, 0x228);
RED4EXT_ASSERT_OFFSET(CGameApplication, result, 0x234);
} // namespace RED4ext
