#pragma once

#include <cstdint>

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/SingleScreenShotData.hpp>
#include <RED4ext/Scripting/Natives/Generated/services/GameServices.hpp>

namespace RED4ext
{
struct CBaseRTTIType;
struct IScriptable;
struct CGameOptions;

namespace Memory
{
struct IAllocator;
}

enum class EEngineState : int32_t
{
    Idle = 0,
    BaseInitialization = 1,
    Initialization = 2,
    Running = 3
};

struct GameInstance
{
    virtual ~GameInstance() = 0;                                    // 00
    virtual IScriptable* GetSystem(const CBaseRTTIType* aType) = 0; // 08
    virtual void Unk_10() = 0;                                      // 10
    virtual void Unk_18() = 0;                                      // 18
    virtual void Unk_20() = 0;                                      // 20
    virtual void Unk_28() = 0;                                      // 28
    virtual void Unk_30() = 0;                                      // 30
    virtual void Unk_38() = 0;                                      // 38
    virtual void Unk_40() = 0;                                      // 40
    virtual void Unk_48() = 0;                                      // 48
    virtual void Unk_50() = 0;                                      // 50
    virtual void Unk_58() = 0;                                      // 58
    virtual void Unk_60() = 0;                                      // 60
    virtual void Unk_68() = 0;                                      // 68

    HashMap<CBaseRTTIType*, Handle<IScriptable>> systemMap;        // 08 - Maps implementation type to instance
    DynArray<Handle<IScriptable>> systemInstances;                 // 38
    HashMap<CBaseRTTIType*, CBaseRTTIType*> systemImplementations; // 48 - Maps interface type to implementation type
    uintptr_t unk78[(0x138 - 0x78) >> 3];                          // 78
};
RED4EXT_ASSERT_SIZE(GameInstance, 0x138);

struct CBaseEngine
{
    struct UnkD0
    {
        uint8_t pad0[0x140];
        uint32_t unk140;
        uint8_t pad144[0x164 - 0x144];
        uint32_t unk164;
        uint8_t pad158[0x164 - 0x158];
        uint32_t unk174;
        void* hWnd;
        uint8_t pad180[0x9];
        uint8_t isClipped;
    };
    RED4EXT_ASSERT_OFFSET(UnkD0, unk164, 0x164);
    RED4EXT_ASSERT_OFFSET(UnkD0, unk174, 0x174);
    RED4EXT_ASSERT_OFFSET(UnkD0, hWnd, 0x178);
    RED4EXT_ASSERT_OFFSET(UnkD0, isClipped, 0x189);

    struct Unk108
    {
        int64_t unk0;
        int64_t unk8;
        int64_t unk10;
        int32_t unk18;
        int32_t unk1C;
    };
    RED4EXT_ASSERT_SIZE(Unk108, 0x20);

    struct Unk110
    {
        int8_t unk0;
        int32_t unk4;
        int32_t unk8;
        int32_t unkC;
    };
    RED4EXT_ASSERT_SIZE(Unk110, 0x10);

    virtual CBaseRTTIType* GetNativeType() = 0;                                                 // 00
    virtual CBaseRTTIType* GetParentType() = 0;                                                 // 08
    virtual Memory::IAllocator* GetAllocator() = 0;                                             // 10
    virtual ~CBaseEngine() = 0;                                                                 // 18
    virtual void sub_18() = 0;                                                                  // 20
    virtual void sub_28() = 0;                                                                  // 28
    virtual void sub_30() = 0;                                                                  // 30
    virtual void Terminate(int32_t aExitStatus) = 0;                                            // 38
    virtual void sub_40() = 0;                                                                  // 40
    virtual void sub_48() = 0;                                                                  // 48
    virtual void sub_50() = 0;                                                                  // 50
    virtual void sub_58() = 0;                                                                  // 58
    virtual void sub_60() = 0;                                                                  // 60
    virtual void sub_68() = 0;                                                                  // 68
    virtual void sub_70() = 0;                                                                  // 70
    virtual void sub_78() = 0;                                                                  // 78
    virtual void sub_80() = 0;                                                                  // 80
    virtual void sub_88() = 0;                                                                  // 88
    virtual void sub_90() = 0;                                                                  // 90
    virtual void sub_98() = 0;                                                                  // 98
    virtual void sub_A0() = 0;                                                                  // A0
    virtual void sub_A8() = 0;                                                                  // A8
    virtual void sub_B0() = 0;                                                                  // B0
    virtual void TakeScreenshot(const rend::SingleScreenShotData& acData, bool a2 = false) = 0; // B8
    virtual void sub_C0() = 0;                                                                  // C0
    virtual void sub_C8(CGameOptions& aOptions) = 0;                                            // C8
    virtual void sub_D0() = 0;                                                                  // D0
    virtual void sub_D8() = 0;                                                                  // D8
    virtual void sub_E0() = 0;                                                                  // E0
    virtual void sub_E8() = 0;                                                                  // E8
    virtual void sub_F0() = 0;                                                                  // F0
    virtual void sub_F8() = 0;                                                                  // F8
    virtual void sub_100() = 0;                                                                 // 100

    double unk8;                               // 08
    float unk10;                               // 10
    float unk14;                               // 14
    float unk18;                               // 18
    float unk1C;                               // 1C
    float unk20;                               // 20
    int64_t unk28;                             // 28
    int32_t unk30;                             // 30
    int8_t unk34;                              // 34
    uint64_t scriptsTimestamp;                 // 38
    int8_t unk40;                              // 40
    SharedSpinLock terminationLock;            // 41
    int32_t unk44;                             // 44
    int8_t terminating;                        // 48
    int8_t unk49;                              // 49
    int8_t unk4A;                              // 4A
    int8_t unk4B;                              // 4B
    int32_t exitStatus;                        // 4C
    int32_t unk50;                             // 50
    bool scriptsLoaded;                        // 54
    bool scriptsSilentCompilation;             // 55
    bool scriptsSilentValidation;              // 56
    int8_t unk57;                              // 57
    int8_t unk58;                              // 58
    int16_t unk5A;                             // 5A
    int32_t interopStartingPort;               // 5C
    int64_t unk60;                             // 60
    int64_t unk68;                             // 68
    CString scriptsCompilationErrors;          // 70
    DynArray<CString> scriptsValidationErrors; // 90
    int64_t unkA0;                             // A0
    int64_t unkA8;                             // A8
    int64_t unkB0;                             // B0
    int64_t unkB8;                             // B8
    uint8_t padC0[0x10];                       // C0
    UnkD0* unkD0;                              // D0
    double unkD8;                              // D8
    double unkE0;                              // E0
    int32_t unkE8;                             // E8
    int64_t unkF0;                             // F0
    int64_t unkF8;                             // F8
    int64_t unk100;                            // 100
    volatile EEngineState engineState;         // 108
    int32_t unk10C;                            // 10C
    int32_t unk110;                            // 110
    Unk108* unk118;                            // 118
    Unk110 unk120;                             // 120
    CString buildString;                       // 130
    CString scriptsBlobPath;                   // 150
    int32_t unk170;                            // 170
    int8_t unk174;                             // 174
    int64_t unk178;                            // 178
    int64_t unk180;                            // 180
    int64_t unk188;                            // 188
    int64_t unk190;                            // 190
    int8_t unk198[178];                        // 198
    int32_t unk24C;                            // 24C
    int8_t unk250[64];                         // 250
    DynArray<void*> unk290;                    // 290
    DynArray<void*> unk2A0;                    // 2A0
    int64_t unk2B0;                            // 2B0
    int64_t unk2B8;                            // 2B8
    int64_t unk2C0;                            // 2C0
    int64_t unk2C8;                            // 2C8
    int32_t unk2D0;                            // 2D0
    bool isEP1;                                // 2D4 - IsEP1()
    int64_t unk2D8;                            // 2D8
    int64_t unk2E0;                            // 2E0
};
RED4EXT_ASSERT_SIZE(CBaseEngine, 0x2E8);
RED4EXT_ASSERT_OFFSET(CBaseEngine, scriptsLoaded, 0x54);
RED4EXT_ASSERT_OFFSET(CBaseEngine, unkD0, 0xD0);
RED4EXT_ASSERT_OFFSET(CBaseEngine, scriptsValidationErrors, 0x90);
RED4EXT_ASSERT_OFFSET(CBaseEngine, scriptsBlobPath, 0x150);
RED4EXT_ASSERT_OFFSET(CBaseEngine, isEP1, 0x2D4);

struct BaseGameEngine : CBaseEngine
{
    int64_t unk2E8; // 2E8
};
RED4EXT_ASSERT_SIZE(BaseGameEngine, 0x2F0);

struct CGameEngine : BaseGameEngine
{
    struct CGameFramework
    {
        uintptr_t unk00;            // 00
        uintptr_t unk08;            // 08
        GameInstance* gameInstance; // 10
        uintptr_t unk18;            // 18 - worldRuntimeScene
        uintptr_t unk20;            // 20
    };
    RED4EXT_ASSERT_SIZE(CGameFramework, 0x28);
    RED4EXT_ASSERT_OFFSET(CGameFramework, gameInstance, 0x10);

    static CGameEngine* Get();

    int64_t unk2F0;                       // 2F0
    int64_t unk2F8;                       // 2F8
    int32_t unk300;                       // 300
    int32_t unk304;                       // 304
    CGameFramework* framework;            // 308
    services::GameServices* gameServices; // 310
    int64_t unk318;                       // 318
    int64_t unk320;                       // 320
    int64_t unk328;                       // 328
    int64_t unk330;                       // 330
    int64_t unk338;                       // 338
    int32_t unk340;                       // 340
    int64_t unk348;                       // 348
};
RED4EXT_ASSERT_SIZE(CGameEngine, 0x350);
RED4EXT_ASSERT_OFFSET(CGameEngine, framework, 0x308);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/GameEngine-inl.hpp>
#endif
