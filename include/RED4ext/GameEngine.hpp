#pragma once

#include <cstdint>

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Scripting/Natives/Generated/rend/SingleScreenShotData.hpp>
#include <RED4ext/Scripting/Natives/Generated/services/GameServices.hpp>

namespace RED4ext
{
namespace rtti
{
struct IType;
}
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
    virtual ~GameInstance() = 0;                                  // 00
    virtual IScriptable* GetSystem(const rtti::IType* aType) = 0; // 08
    virtual void Unk_10() = 0;                                    // 10
    virtual void Unk_18() = 0;                                    // 18
    virtual void Unk_20() = 0;                                    // 20
    virtual void Unk_28() = 0;                                    // 28
    virtual void Unk_30() = 0;                                    // 30
    virtual void Unk_38() = 0;                                    // 38
    virtual void Unk_40() = 0;                                    // 40
    virtual void Unk_48() = 0;                                    // 48
    virtual void Unk_50() = 0;                                    // 50
    virtual void Unk_58() = 0;                                    // 58
    virtual void Unk_60() = 0;                                    // 60
    virtual void Unk_68() = 0;                                    // 68

    HashMap<rtti::IType*, Handle<IScriptable>> systemMap;      // 08 - Maps implementation type to instance
    DynArray<Handle<IScriptable>> systemInstances;             // 38
    HashMap<rtti::IType*, rtti::IType*> systemImplementations; // 48 - Maps interface type to implementation type
    uintptr_t unk78[(0x138 - 0x78) >> 3];                      // 78
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

    virtual rtti::IType* GetNativeType() = 0;                                                   // 00
    virtual rtti::IType* GetParentType() = 0;                                                   // 08
    virtual Memory::IAllocator* GetAllocator() = 0;                                             // 10
    virtual ~CBaseEngine() = 0;                                                                 // 18
    virtual void sub_20() = 0;                                                                  // 20
    virtual void sub_28() = 0;                                                                  // 28
    virtual void sub_30() = 0;                                                                  // 30
    virtual void sub_38() = 0;                                                                  // 38
    virtual void sub_40() = 0;                                                                  // 40
    virtual void sub_48() = 0;                                                                  // 48
    virtual void sub_50() = 0;                                                                  // 50
    virtual void Terminate(int32_t aExitStatus) = 0;                                            // 58
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
    virtual void sub_B8() = 0;                                                                  // B8
    virtual void sub_C0() = 0;                                                                  // C0
    virtual void sub_C8() = 0;                                                                  // C8
    virtual void sub_D0() = 0;                                                                  // D0
    virtual void sub_D8() = 0;                                                                  // D8
    virtual void TakeScreenshot(const rend::SingleScreenShotData& acData, bool a2 = false) = 0; // E0
    virtual void sub_E8() = 0;                                                                  // E8
    virtual void sub_F0(CGameOptions& aOptions) = 0;                                            // F0
    virtual void sub_F8() = 0;                                                                  // F8
    virtual void sub_100() = 0;                                                                 // 100
    virtual void sub_108() = 0;                                                                 // 108
    virtual void sub_110() = 0;                                                                 // 110
    virtual void sub_118() = 0;                                                                 // 118
    virtual void sub_120() = 0;                                                                 // 120
    virtual void sub_128() = 0;                                                                 // 128

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
    DynArray<void*> unk68;                     // 68 - DynArray<red::AbsolutePath>, script mod blobs (-LoadScriptMods)
    int64_t unk78;                             // 78
    int64_t unk80;                             // 80
    int64_t unk88;                             // 88
    CString scriptsCompilationErrors;          // 90
    DynArray<CString> scriptsValidationErrors; // B0
    int64_t unkA0;                             // C0
    int64_t unkA8;                             // C8
    int64_t unkB0;                             // D0
    int64_t unkB8;                             // D8
    uint8_t padC0[0x10];                       // E0
    UnkD0* unkD0;                              // F0
    double unkD8;                              // F8
    double unkE0;                              // 100
    int32_t unkE8;                             // 108
    int64_t unkF0;                             // 110
    int64_t unkF8;                             // 118
    int64_t unk100;                            // 120
    volatile EEngineState engineState;         // 128
    int32_t unk10C;                            // 12C
    int32_t unk110;                            // 130
    Unk108* unk118;                            // 138
    Unk110 unk120;                             // 140
    CString buildString;                       // 150
    CString scriptsBlobPath;                   // 170
    int32_t unk170;                            // 190
    int8_t unk174;                             // 194
    int64_t unk178;                            // 198
    int64_t unk180;                            // 1A0
    int64_t unk188;                            // 1A8
    int64_t unk190;                            // 1B0
    int8_t unk198[178];                        // 1B8
    int32_t unk24C;                            // 26C
    int8_t unk250[64];                         // 270
    DynArray<void*> unk290;                    // 2B0
    DynArray<void*> unk2A0;                    // 2C0
    int64_t unk2B0;                            // 2D0
    int64_t unk2B8;                            // 2D8
    int64_t unk2C0;                            // 2E0
    int64_t unk2C8;                            // 2E8
    int32_t unk2D0;                            // 2F0
    bool isEP1;                                // 2F4 - IsEP1()
    CString unk2F8Path;                        // 2F8 - red::AbsolutePath
    int64_t unk2D8;                            // 318
    int64_t unk2E0;                            // 320
};
RED4EXT_ASSERT_SIZE(CBaseEngine, 0x328);
RED4EXT_ASSERT_OFFSET(CBaseEngine, scriptsLoaded, 0x54);
RED4EXT_ASSERT_OFFSET(CBaseEngine, scriptsCompilationErrors, 0x90);
RED4EXT_ASSERT_OFFSET(CBaseEngine, scriptsValidationErrors, 0xB0);
RED4EXT_ASSERT_OFFSET(CBaseEngine, unkD0, 0xF0);
RED4EXT_ASSERT_OFFSET(CBaseEngine, engineState, 0x128);
RED4EXT_ASSERT_OFFSET(CBaseEngine, scriptsBlobPath, 0x170);
RED4EXT_ASSERT_OFFSET(CBaseEngine, isEP1, 0x2F4);

struct BaseGameEngine : CBaseEngine
{
    int64_t unk2E8; // 328
};
RED4EXT_ASSERT_SIZE(BaseGameEngine, 0x330);

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

    int64_t unk2F0;                       // 330
    int64_t unk2F8;                       // 338
    int32_t unk300;                       // 340
    int32_t unk304;                       // 344
    CGameFramework* framework;            // 348
    services::GameServices* gameServices; // 350
    int64_t unk318;                       // 358
    int64_t unk320;                       // 360
    int64_t unk328;                       // 368
    int64_t unk330;                       // 370
    int64_t unk338;                       // 378
    int32_t unk340;                       // 380
    int64_t unk348;                       // 388
};
RED4EXT_ASSERT_SIZE(CGameEngine, 0x390);
RED4EXT_ASSERT_OFFSET(CGameEngine, framework, 0x348);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/GameEngine-inl.hpp>
#endif
