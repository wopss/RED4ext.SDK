#pragma once

#include <cstdint>

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
    uint16_t interopstartingport; // 00
    bool renderPreset;            // 02
    uint8_t unk3;                 // 03
    uint32_t lowSettingsOptions;  // 04
    uint32_t texQualityLevel;     // 08
    uint32_t meshQualityLevel;    // 0C
    uint32_t watchdogTimeout;     // 10
    int8_t scriptVersion;         // 14
    int16_t scriptProfiling;      // 16
    CString scriptsBlobPath;      // 18
    CString tweakdbBlobPath;      // 38
    uint8_t unattended58;         // 58
    uint8_t unattended59;         // 59
    uint8_t unattended5A;         // 5A
    bool forceRawTweakDB;         // 5B
    bool pvdDumpToFile;           // 5C
    bool profiler;                // 5D
    uint8_t unk5E;                // 5E
    uint8_t unk5F;                // 5F
    uint8_t unattended60;         // 60
    int64_t unk68;                // 68
    CString automator;            // 70
    CString windowCaption;        // 90
    bool isBackendGameEngine;     // B0
    uint8_t unkB1;                // B1
    bool nochroma;                // B2
};
RED4EXT_ASSERT_SIZE(CGameOptions, 0xB8);
RED4EXT_ASSERT_OFFSET(CGameOptions, interopstartingport, 0x00);
RED4EXT_ASSERT_OFFSET(CGameOptions, renderPreset, 0x02);
RED4EXT_ASSERT_OFFSET(CGameOptions, lowSettingsOptions, 0x04);
RED4EXT_ASSERT_OFFSET(CGameOptions, texQualityLevel, 0x08);
RED4EXT_ASSERT_OFFSET(CGameOptions, meshQualityLevel, 0x0C);
RED4EXT_ASSERT_OFFSET(CGameOptions, watchdogTimeout, 0x10);
RED4EXT_ASSERT_OFFSET(CGameOptions, scriptVersion, 0x14);
RED4EXT_ASSERT_OFFSET(CGameOptions, scriptProfiling, 0x16);
RED4EXT_ASSERT_OFFSET(CGameOptions, scriptsBlobPath, 0x18);
RED4EXT_ASSERT_OFFSET(CGameOptions, tweakdbBlobPath, 0x38);
RED4EXT_ASSERT_OFFSET(CGameOptions, unattended58, 0x58);
RED4EXT_ASSERT_OFFSET(CGameOptions, unattended59, 0x59);
RED4EXT_ASSERT_OFFSET(CGameOptions, unattended5A, 0x5A);
RED4EXT_ASSERT_OFFSET(CGameOptions, forceRawTweakDB, 0x5B);
RED4EXT_ASSERT_OFFSET(CGameOptions, profiler, 0x5D);
RED4EXT_ASSERT_OFFSET(CGameOptions, pvdDumpToFile, 0x5C);
RED4EXT_ASSERT_OFFSET(CGameOptions, unattended60, 0x60);
RED4EXT_ASSERT_OFFSET(CGameOptions, automator, 0x70);
RED4EXT_ASSERT_OFFSET(CGameOptions, windowCaption, 0x90);
RED4EXT_ASSERT_OFFSET(CGameOptions, isBackendGameEngine, 0xB0);
RED4EXT_ASSERT_OFFSET(CGameOptions, nochroma, 0xB2);

struct CBaseGameApplication
{
    struct Unk8
    {
        int8_t unk00;
        int64_t unk08;
        int32_t unk10;
        int32_t unk14;
        int64_t unk18;
        int8_t unk20;
        int64_t unk28;
        int32_t unk30;
        int32_t unk34;
        int64_t unk38;
        int8_t unk40;
        int64_t unk48;
        int32_t unk50;
        int32_t unk54;
        int64_t unk58;
        int8_t unk60;
        int64_t unk68;
        int32_t unk70;
        int32_t unk74;
        int64_t unk78;
        int8_t unk80;
        int64_t unk88;
        int32_t unk90;
        int32_t unk94;
        int64_t unk98;
        int8_t unkA0;
        int64_t unkA8;
        int32_t unkB0;
        int32_t unkB4;
        int64_t unkB8;
        int8_t unkC0;
        int64_t unkC8;
        int32_t unkD0;
        int32_t unkD4;
        int64_t unkD8;
        int8_t unkE0;
        int64_t unkE8;
        int32_t unkF0;
        int32_t unkF4;
        int64_t unkF8;
        int8_t unk100;
        int64_t unk108;
        int32_t unk110;
        int32_t unk114;
        int64_t unk118;
        int8_t unk120;
        int64_t unk128;
        int32_t unk130;
        int32_t unk134;
        int64_t unk138;
        int8_t unk140;
        int64_t unk148;
        int32_t unk150;
        int32_t unk154;
        int64_t unk158;
        int8_t unk160;
        int64_t unk168;
        int32_t unk170;
        int32_t unk174;
        int64_t unk178;
        int16_t unk180;
        int8_t unk182;
    };
    RED4EXT_ASSERT_SIZE(Unk8, 0x188);

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

    Unk8 unk8;      // 08
    int64_t unk190; // 190
    int64_t unk198; // 198
    int64_t unk1A0; // 1A0
    int64_t unk1A8; // 1A8
};
RED4EXT_ASSERT_SIZE(CBaseGameApplication, 0x1B0);
RED4EXT_ASSERT_OFFSET(CBaseGameApplication, unk8, 0x08);

struct CGameApplication : CBaseGameApplication
{
    virtual void sub_78() = 0; // 78

    CGameOptions options;                 // 1B0
    DynArray<EGameStateType> statesTypes; // 268
    DynArray<IGameState*> states;         // 278
    int32_t unk288;                       // 288
    IGameState* currState;                // 290
    IGameState* nextState;                // 298
    EGameStateStatus status;              // 2A0
    int32_t unk2A4;                       // 2A4
    const char* name;                     // 2A8
    int32_t retCode;                      // 2B0
};
RED4EXT_ASSERT_SIZE(CGameApplication, 0x2B8);
RED4EXT_ASSERT_OFFSET(CGameApplication, options, 0x1B0);
RED4EXT_ASSERT_OFFSET(CGameApplication, statesTypes, 0x268);
RED4EXT_ASSERT_OFFSET(CGameApplication, states, 0x278);
RED4EXT_ASSERT_OFFSET(CGameApplication, currState, 0x290);
RED4EXT_ASSERT_OFFSET(CGameApplication, nextState, 0x298);
RED4EXT_ASSERT_OFFSET(CGameApplication, status, 0x2A0);
RED4EXT_ASSERT_OFFSET(CGameApplication, name, 0x2A8);
RED4EXT_ASSERT_OFFSET(CGameApplication, retCode, 0x2B0);
} // namespace RED4ext
