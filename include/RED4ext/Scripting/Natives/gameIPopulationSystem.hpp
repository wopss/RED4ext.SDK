#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/Entity.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>

namespace RED4ext
{
enum class PopulationEntityPriority : uint8_t
{
    Quest,
    Community,
    Crowd,
};

struct PopulationEntityRegisterRequest
{
    EntityID entityID;                 // 00
    CName appearanceName;              // 08
    PopulationEntityPriority priority; // 10
    uint8_t unk11;                     // 11
    bool alwaysSpawned;                // 12
    bool spawnInView;                  // 13
    bool prefetchAppearance;           // 14
    bool unk15;                        // 15
    void* unk18;                       // 18
    void* unk20;                       // 20
};
RED4EXT_ASSERT_SIZE(PopulationEntityRegisterRequest, 0x28);
RED4EXT_ASSERT_OFFSET(PopulationEntityRegisterRequest, entityID, 0x00);
RED4EXT_ASSERT_OFFSET(PopulationEntityRegisterRequest, appearanceName, 0x08);
RED4EXT_ASSERT_OFFSET(PopulationEntityRegisterRequest, alwaysSpawned, 0x12);
RED4EXT_ASSERT_OFFSET(PopulationEntityRegisterRequest, unk18, 0x18);

namespace game
{
struct IPopulationSystem : IGameSystem
{
    static constexpr const char* NAME = "gameIPopulationSystem";
    static constexpr const char* ALIAS = NAME;

    virtual void* FindEntity(Handle<Entity>& aOut, uint32_t aDynamicEntityID) = 0; // 1A8
    virtual void sub_1B0() = 0;                                                    // 1B0
    virtual void sub_1B8() = 0;                                                    // 1B8
    virtual void sub_1C0() = 0;                                                    // 1C0
    virtual bool IsSpawning(EntityID aEntityID) = 0;                               // 1C8
    virtual void sub_1D0() = 0;                                                    // 1D0
    virtual void sub_1D8() = 0;                                                    // 1D8
    virtual void sub_1E0() = 0;                                                    // 1E0
    virtual bool RegisterEntity(PopulationEntityRegisterRequest& aRequest) = 0;    // 1E8
    virtual void RemoveEntity(uint32_t aEntityID, uint64_t a2) = 0;                // 1F0
    virtual void sub_1F8() = 0;                                                    // 1F8
    virtual void sub_200() = 0;                                                    // 200
    virtual void sub_208() = 0;                                                    // 208
    virtual void sub_210() = 0;                                                    // 210
    virtual void sub_218() = 0;                                                    // 218
    virtual void sub_220() = 0;                                                    // 220
    virtual void sub_228() = 0;                                                    // 228
    virtual void sub_230() = 0;                                                    // 230
    virtual void sub_238() = 0;                                                    // 238
    virtual void sub_240() = 0;                                                    // 240
    virtual void sub_248() = 0;                                                    // 248
    virtual void sub_250() = 0;                                                    // 250
    virtual void sub_258() = 0;                                                    // 258
    virtual void sub_260() = 0;                                                    // 260
    virtual void sub_268() = 0;                                                    // 268
    virtual void sub_270() = 0;                                                    // 270
    virtual void sub_278() = 0;                                                    // 278
    virtual void sub_280() = 0;                                                    // 280
    virtual void sub_288() = 0;                                                    // 288
    virtual void sub_290() = 0;                                                    // 290
    virtual void sub_298() = 0;                                                    // 298
    virtual void sub_2A0() = 0;                                                    // 2A0
    virtual void sub_2A8() = 0;                                                    // 2A8
    virtual void sub_2B0() = 0;                                                    // 2B0
    virtual void sub_2B8() = 0;                                                    // 2B8
    virtual void sub_2C0() = 0;                                                    // 2C0
    virtual void sub_2C8() = 0;                                                    // 2C8
    virtual void sub_2D0() = 0;                                                    // 2D0
    virtual void sub_2D8() = 0;                                                    // 2D8
    virtual void sub_2E0() = 0;                                                    // 2E0
    virtual void sub_2E8() = 0;                                                    // 2E8
    virtual void sub_2F0() = 0;                                                    // 2F0
    virtual void sub_2F8() = 0;                                                    // 2F8
    virtual void sub_300() = 0;                                                    // 300
    virtual void sub_308() = 0;                                                    // 308
    virtual void sub_310() = 0;                                                    // 310
};
RED4EXT_ASSERT_SIZE(IPopulationSystem, 0x48);
} // namespace game
using IPopulationSystem = game::IPopulationSystem;
} // namespace RED4ext
