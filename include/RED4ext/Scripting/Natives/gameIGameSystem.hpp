#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/JobQueue.hpp>
#include <RED4ext/Scripting/Natives/IUpdatableSystem.hpp>

namespace RED4ext
{
struct GameInstance;

namespace world
{
struct RuntimeScene;
}

namespace game
{
struct SaveLock;

struct IGameSystem : IUpdatableSystem
{
    static constexpr const char* NAME = "gameIGameSystem";
    static constexpr const char* ALIAS = "IGameSystem";

    virtual void OnWorldAttached(world::RuntimeScene* aScene);                                                // 110
    virtual void OnBeforeWorldDetach(world::RuntimeScene* aScene);                                            // 118
    virtual void OnWorldDetached(world::RuntimeScene* aScene);                                                // 120
    virtual void OnAfterWorldDetach();                                                                        // 128
    virtual uint32_t OnBeforeGameSave(const JobGroup& aJobGroup, void* a2);                                   // 130
    virtual void OnGameSave(void* aStream);                                                                   // 138
    virtual void OnAfterGameSave();                                                                           // 140
    virtual void OnGameLoad(const JobGroup& aJobGroup, bool& aSuccess, void* aStream);                        // 148
    virtual bool OnGameRestored();                                                                            // 150
    virtual void OnGamePrepared();                                                                            // 158
    virtual void OnGamePaused();                                                                              // 160
    virtual void OnGameResumed();                                                                             // 168
    virtual void* IsSavingLocked(SaveLock* aLock, bool a2);                                                   // 170
    virtual void OnStreamingWorldLoaded(world::RuntimeScene* aScene, uint64_t a2, const JobGroup& aJobGroup); // 178
    virtual void sub_180();                                                                                   // 180
    virtual void sub_188();                                                                                   // 188
    virtual void sub_190(void* a1);                                                                           // 190
    virtual void sub_198();                                                                                   // 198
    virtual void OnInitialize(const JobHandle& aJob);                                                         // 1A0
    virtual void OnUninitialize();                                                                            // 1A8

    GameInstance* gameInstance; // 40
};
RED4EXT_ASSERT_SIZE(IGameSystem, 0x48);
} // namespace game
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/gameIGameSystem-inl.hpp>
#endif
