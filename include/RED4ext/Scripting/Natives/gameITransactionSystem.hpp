#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AttachmentSlotData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttachmentSlotsListener.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemObject.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>

namespace RED4ext
{
namespace game
{
using AttachmentSlotDataPredicate = std::function<bool(const AttachmentSlotData&)>;

struct ITransactionSystem : IGameSystem
{
    static constexpr const char* NAME = "gameITransactionSystem";
    static constexpr const char* ALIAS = "ITransactionSystem";

    virtual void sub_1B0() = 0;                                                                                  // 1B0
    virtual void sub_1B8() = 0;                                                                                  // 1B8
    virtual void sub_1C0() = 0;                                                                                  // 1C0
    virtual void sub_1C8() = 0;                                                                                  // 1C8
    virtual CName* GetItemAppearance(CName& aAppearance, IScriptable* aOwner, const ItemID& aItemID) = 0;        // 1D0
    virtual void ResetItemAppearance(IScriptable* aOwner, const ItemID& aItemID) = 0;                            // 1D8
    virtual void sub_1E0() = 0;                                                                                  // 1E0
    virtual void sub_1E8() = 0;                                                                                  // 1E8
    virtual void sub_1F0() = 0;                                                                                  // 1F0
    virtual void sub_1F8() = 0;                                                                                  // 1F8
    virtual void sub_200() = 0;                                                                                  // 200
    virtual void sub_208() = 0;                                                                                  // 208
    virtual void sub_210() = 0;                                                                                  // 210
    virtual void sub_218() = 0;                                                                                  // 218
    virtual void sub_220() = 0;                                                                                  // 220
    virtual void sub_228() = 0;                                                                                  // 228
    virtual void sub_230() = 0;                                                                                  // 230
    virtual void sub_238() = 0;                                                                                  // 238
    virtual void sub_240() = 0;                                                                                  // 240
    virtual void sub_248() = 0;                                                                                  // 248
    virtual void sub_250() = 0;                                                                                  // 250
    virtual void sub_258() = 0;                                                                                  // 258
    virtual void sub_260() = 0;                                                                                  // 260
    virtual void sub_268() = 0;                                                                                  // 268
    virtual void sub_270() = 0;                                                                                  // 270
    virtual void sub_278() = 0;                                                                                  // 278
    virtual void sub_280() = 0;                                                                                  // 280
    virtual void sub_288() = 0;                                                                                  // 288
    virtual void sub_290() = 0;                                                                                  // 290
    virtual void sub_298() = 0;                                                                                  // 298
    virtual void sub_2A0() = 0;                                                                                  // 2A0
    virtual void sub_2A8() = 0;                                                                                  // 2A8
    virtual void sub_2B0() = 0;                                                                                  // 2B0
    virtual void sub_2B8() = 0;                                                                                  // 2B8
    virtual void sub_2C0() = 0;                                                                                  // 2C0
    virtual void sub_2C8() = 0;                                                                                  // 2C8
    virtual void sub_2D0() = 0;                                                                                  // 2D0
    virtual void sub_2D8() = 0;                                                                                  // 2D8
    virtual void sub_2E0() = 0;                                                                                  // 2E0
    virtual void sub_2E8() = 0;                                                                                  // 2E8
    virtual void sub_2F0() = 0;                                                                                  // 2F0
    virtual void sub_2F8() = 0;                                                                                  // 2F8
    virtual void sub_300() = 0;                                                                                  // 300
    virtual void sub_308() = 0;                                                                                  // 308
    virtual void sub_310() = 0;                                                                                  // 310
    virtual void sub_318() = 0;                                                                                  // 318
    virtual void sub_320() = 0;                                                                                  // 320
    virtual void sub_328() = 0;                                                                                  // 328
    virtual void sub_330() = 0;                                                                                  // 330
    virtual void sub_338() = 0;                                                                                  // 338
    virtual void sub_340() = 0;                                                                                  // 340
    virtual void sub_348() = 0;                                                                                  // 348
    virtual void sub_350() = 0;                                                                                  // 350
    virtual void sub_358() = 0;                                                                                  // 358
    virtual void sub_360() = 0;                                                                                  // 360
    virtual void sub_368() = 0;                                                                                  // 368
    virtual void sub_370() = 0;                                                                                  // 370
    virtual void sub_378() = 0;                                                                                  // 378
    virtual void sub_380() = 0;                                                                                  // 380
    virtual void sub_388() = 0;                                                                                  // 388
    virtual void sub_390() = 0;                                                                                  // 390
    virtual void sub_398() = 0;                                                                                  // 398
    virtual void sub_3A0() = 0;                                                                                  // 3A0
    virtual void sub_3A8() = 0;                                                                                  // 3A8
    virtual void sub_3B0() = 0;                                                                                  // 3B0
    virtual void sub_3B8() = 0;                                                                                  // 3B8
    virtual bool IsSlotEmpty(IScriptable* aOwner, TweakDBID aSlotID) = 0;                                        // 3C0
    virtual bool IsSlotSpawning(IScriptable* aOwner, TweakDBID aSlotID) = 0;                                     // 3C8
    virtual void sub_3D0() = 0;                                                                                  // 3D0
    virtual void sub_3D8() = 0;                                                                                  // 3D8
    virtual void sub_3E0() = 0;                                                                                  // 3E0
    virtual void sub_3E8() = 0;                                                                                  // 3E8
    virtual void sub_3F0() = 0;                                                                                  // 3F0
    virtual void sub_3F8() = 0;                                                                                  // 3F8
    virtual void sub_400() = 0;                                                                                  // 400
    virtual void sub_408() = 0;                                                                                  // 408
    virtual void sub_410() = 0;                                                                                  // 410
    virtual void sub_418() = 0;                                                                                  // 418
    virtual void sub_420() = 0;                                                                                  // 420
    virtual bool GetItemInSlot(IScriptable* aOwner, TweakDBID aSlotID, Handle<IScriptable>& aItem) = 0;          // 428
    virtual void sub_430() = 0;                                                                                  // 430
    virtual void GetSlotDataList(IScriptable* aOwner, DynArray<AttachmentSlotData>& aList) = 0;                  // 438
    virtual void sub_440() = 0;                                                                                  // 440
    virtual AttachmentSlotData* FindSlotData(IScriptable* aOwner, AttachmentSlotDataPredicate&& aPredicate) = 0; // 448
    virtual void sub_450() = 0;                                                                                  // 450
    virtual void sub_458() = 0;                                                                                  // 458
    virtual void sub_460() = 0;                                                                                  // 460
    virtual void sub_468() = 0;                                                                                  // 468
    virtual void sub_470() = 0;                                                                                  // 470
    virtual void sub_478() = 0;                                                                                  // 478
    virtual void sub_480() = 0;                                                                                  // 480
    virtual void sub_488() = 0;                                                                                  // 488
    virtual void RegisterSlotListener(IScriptable* aOwner, Handle<IAttachmentSlotsListener> aListener) = 0;      // 490
    virtual void UnregisterSlotListener(IScriptable* aOwner, Handle<IAttachmentSlotsListener> aListener) = 0;    // 498
    virtual void sub_4A0() = 0;                                                                                  // 4A0
    virtual void sub_4A8() = 0;                                                                                  // 4A8
    virtual void sub_4B0() = 0;                                                                                  // 4B0
    virtual void sub_4B8() = 0;                                                                                  // 4B8
    virtual void sub_4C0() = 0;                                                                                  // 4C0
    virtual void sub_4C8() = 0;                                                                                  // 4C8
    virtual bool MatchVisualTagByItemID(const ItemID& aItemID, const Handle<IScriptable>& aOwner,
                                        CName aTag) = 0;                                                       // 4D0
    virtual bool MatchVisualTag(const Handle<IScriptable>& aItem, CName aTag, bool aUseDefaultAppearance) = 0; // 4D8
    virtual void sub_4E0() = 0;                                                                                // 4E0
    virtual void sub_4E8() = 0;                                                                                // 4E8
};
RED4EXT_ASSERT_SIZE(ITransactionSystem, 0x48);
} // namespace game
using gameITransactionSystem = game::ITransactionSystem;
using ITransactionSystem = game::ITransactionSystem;
} // namespace RED4ext
