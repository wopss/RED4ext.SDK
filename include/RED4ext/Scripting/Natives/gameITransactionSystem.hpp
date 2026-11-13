#pragma once

#include <functional>

#include <RED4ext/Common.hpp>
#include <RED4ext/Containers/DynArray.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/Natives/Generated/Transform.hpp>
#include <RED4ext/Scripting/Natives/Generated/ent/EntityID.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/AttachmentSlotData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IAttachmentSlotsListener.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IGameSystem.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/IInventoryListener.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemData.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemDropObject.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemModParams.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/ItemObject.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/Object.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/StatsBundle.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Character_Record.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/data/Item_Record.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/interactions/SetChoicesEvent.hpp>
#include <RED4ext/Scripting/Natives/Generated/game/projectile/SetUpAndLaunchEvent.hpp>

namespace RED4ext
{
namespace game
{
using AttachmentSlotDataPredicate = std::function<bool(const AttachmentSlotData&)>;
using AttachmentSlotDataAction = std::function<void(const AttachmentSlotData&)>;

struct ITransactionSystem : IGameSystem
{
    static constexpr const char* NAME = "gameITransactionSystem";
    static constexpr const char* ALIAS = "ITransactionSystem";

    virtual ItemID GetFirstItemID(IScriptable* aOwner, TweakDBID aSlotID) = 0; // 1B0
    virtual bool InitializeFromCharacterRec(IScriptable* aOwner,
                                            const WeakHandle<data::Character_Record>& aRecord) = 0;      // 1B8
    virtual void PrefetchItemAppearance(IScriptable* aOwner, ItemID aItemID, CName aAppearanceName) = 0; // 1C0
    virtual bool ChangeItemAppearance(IScriptable* aOwner, const ItemID& aAppearanceItemID, int32_t aContext,
                                      void* aTemporary1, void* aTemporary2, bool aUseDefaultAppearance,
                                      const ItemID& aItemID) = 0;                                                 // 1C8
    virtual CName GetItemAppearance(CName& aAppearance, IScriptable* aOwner, ItemID aItemID) = 0;                 // 1D0
    virtual bool ResetItemAppearance(IScriptable* aOwner, ItemID aItemID) = 0;                                    // 1D8
    virtual void sub_1E0() = 0;                                                                                   // 1E0
    virtual void sub_1E8() = 0;                                                                                   // 1E8
    virtual bool ClearAttachmentAppearance(IScriptable* aOwner, TweakDBID aSlotID) = 0;                           // 1F0
    virtual bool RemoveMoney(IScriptable* aOwner, int32_t aAmount, CName aCurrency) = 0;                          // 1F8
    virtual bool TransferMoney(IScriptable* aSource, IScriptable* aTarget, int32_t aAmount, CName aCurrency) = 0; // 200
    virtual bool GiveMoney(IScriptable* aTarget, int32_t aAmount, CName aCurrency) = 0;                           // 208
    virtual bool RemoveItemByTDBID(IScriptable* aOwner, TweakDBID aItemID, int32_t aAmount,
                                   int32_t aOverrides) = 0;                                                 // 210
    virtual bool RemoveItem(IScriptable* aOwner, ItemID aItemID, int32_t aAmount) = 0;                      // 218
    virtual Handle<ItemData> ExtractItem(IScriptable* aOwner, ItemID aItemID, bool aAllowItemDataCopy) = 0; // 220
    virtual void ReparentItem(IScriptable* aOwner, ItemID aItemID) = 0;                                     // 228
    virtual bool RemoveAllItemsByIds(IScriptable* aOwner, const DynArray<ItemID>& aItemIDs,
                                     const DynArray<CName>& aTags) = 0;     // 230
    virtual bool RemoveAllItems(IScriptable* aOwner, bool aClearSlots) = 0; // 238
    virtual bool RemoveItemsByTag(IScriptable* aOwner, CName aTag, const DynArray<ItemID>& aItemIDs,
                                  const DynArray<CName>& aTags) = 0; // 240
    virtual bool RemoveItemsOfTweakDBID(IScriptable* aOwner, TweakDBID aItemID,
                                        int32_t aOverrides) = 0; // 248
    virtual bool GiveItemByModParams(IScriptable* aOwner, const ItemModParams& aParams,
                                     int32_t aOverrides) = 0; // 250
    virtual bool GiveItem(IScriptable* aOwner, const ItemID& aItemID, uint32_t aAmount,
                          int32_t aOverrides) = 0; // 258
    virtual bool GiveItemByItemQuery(IScriptable* aOwner, const TweakDBID& aItemQueryTDBID, uint32_t aAmount,
                                     uint64_t aSeed) = 0; // 260
    virtual bool GiveItems(IScriptable* aOwner, const DynArray<ItemModParams>& aItemList,
                           int32_t aOverrides) = 0;                                              // 268
    virtual bool GiveItemByItemData(IScriptable* aOwner, const Handle<ItemData>& aItemData) = 0; // 270
    virtual bool GiveItemByItemDataToTarget(IScriptable* aOwner, IScriptable* aTarget,
                                            const Handle<ItemData>& aItemData) = 0;                       // 278
    virtual bool GiveItemByItemIDToTarget(IScriptable* aOwner, IScriptable* aTarget, ItemID aItemID) = 0; // 280
    virtual bool GiveItemsByItemData(IScriptable* aOwner,
                                     const DynArray<WeakHandle<ItemData>>& aItemData) = 0; // 288
    virtual bool TransferItem(IScriptable* aSource, IScriptable* aTarget, ItemModParams& aParams,
                              int32_t aOverrides) = 0; // 290
    virtual bool TransferItems(IScriptable* aSource, IScriptable* aTarget, const DynArray<ItemModParams>& aItemList,
                               int32_t aOverrides) = 0;                            // 298
    virtual bool TransferAllItems(IScriptable* aSource, IScriptable* aTarget) = 0; // 2A0
    virtual bool TakeItem(IScriptable* aNewOwner, ItemObject& aItemToLoot) = 0;    // 2A8
    virtual bool DropItem(ItemDropObject* aDropObject, ItemID aItemID, int32_t aContext, const Transform& aTransform,
                          WeakHandle<Object> aOwner) = 0; // 2B0
    virtual bool ThrowItem(IScriptable* aOwner, WeakHandle<Object> aItem,
                           Handle<projectile::SetUpAndLaunchEvent> aSetUpAndLaunchEvent) = 0; // 2B8
    virtual bool ReleaseItem(IScriptable* aOwner, ItemObject& aItem) = 0;                     // 2C0
    virtual bool SellItem(IScriptable* aSeller, IScriptable* aBuyer, ItemID aItemID, uint32_t aAmount, CName aCurrency,
                          uint32_t aPrice) = 0; // 2C8
    virtual bool SellItemStrict(IScriptable* aSeller, IScriptable* aBuyer, ItemID aItemID, uint32_t aAmount,
                                CName aCurrency, uint32_t aPrice) = 0;                                        // 2D0
    virtual bool HasItem(const IScriptable* aOwner, TweakDBID aItemID) = 0;                                   // 2D8
    virtual bool HasItemByItemID(const IScriptable* aOwner, ItemID aItemID) = 0;                              // 2E0
    virtual bool HasTag(const IScriptable* aOwner, CName aTag, ItemID aItemID) = 0;                           // 2E8
    virtual uint32_t GetItemQuantity(const IScriptable* aOwner, ItemID aItemID) = 0;                          // 2F0
    virtual uint32_t GetItemQuantityWithDuplicates(const IScriptable* aOwner, ItemID aItemID) = 0;            // 2F8
    virtual uint32_t GetItemQuantityByTag(const IScriptable* aOwner, CName aTag) = 0;                         // 300
    virtual uint32_t GetTotalItemQuantity(const IScriptable* aOwner) = 0;                                     // 308
    virtual WeakHandle<ItemData> GetItemDataByOwnerEntityID(ent::EntityID aOwnerID, ItemID aItemID) = 0;      // 310
    virtual WeakHandle<ItemData> GetItemData(const IScriptable* aOwner, ItemID aItemID) = 0;                  // 318
    virtual WeakHandle<ItemData> GetItemDataByTweakDBID(const IScriptable* aOwner, TweakDBID aItemTDBID) = 0; // 320
    virtual void GetItemsByTweakDBID(IScriptable* aOwner, TweakDBID aItemID,
                                     DynArray<WeakHandle<ItemData>>& aItemList) = 0;                    // 328
    virtual Handle<data::Item_Record> FetchItemRecord(ItemID aItemID) = 0;                              // 330
    virtual bool GetItemList(const IScriptable* aOwner, DynArray<WeakHandle<ItemData>>& aItemList) = 0; // 338
    virtual bool GetItemListByTag(const IScriptable* aOwner, CName aTag,
                                  DynArray<WeakHandle<ItemData>>& aItemList) = 0; // 340
    virtual bool GetItemListByTags(const IScriptable* aOwner, const DynArray<CName>& aTagList,
                                   DynArray<WeakHandle<ItemData>>& aItemList) = 0; // 348
    virtual bool GetItemListExcludingTags(const IScriptable* aOwner, const DynArray<CName>& aTagList,
                                          DynArray<WeakHandle<ItemData>>& aItemList) = 0; // 350
    virtual bool GetItemListFilteredByTags(const IScriptable* aOwner, const DynArray<CName>& aTags,
                                           const DynArray<CName>& aExcludedTags,
                                           DynArray<WeakHandle<ItemData>>& aItemList) = 0;           // 358
    virtual uint32_t GetNumItems(const IScriptable* aOwner, const DynArray<CName>* aTagFilters) = 0; // 360
    virtual Handle<interactions::SetChoicesEvent> GenerateLootItemChoices(const IScriptable* aOwner,
                                                                          Handle<Object>& aTarget) = 0;   // 368
    virtual void SetIllegalToLoot(const IScriptable* aOwner, bool aIllegal) = 0;                          // 370
    virtual bool GetIllegalToLoot(const IScriptable* aOwner) = 0;                                         // 378
    virtual bool InitializeSlots(IScriptable* aOwner, const DynArray<TweakDBID>& aSlotIDList) = 0;        // 380
    virtual void RefreshAttachment(IScriptable* aOwner, TweakDBID aSlotID, bool aKeepWorldTransform) = 0; // 388
    virtual bool AddAndEquipItem(IScriptable* aOwner, TweakDBID aSlotID, ItemID aItemID) = 0;             // 390
    virtual bool AddItemToSlot(const void* aContext) = 0;                                                 // 398
    virtual bool DropItemFromSlot(const IScriptable* aOwner, TweakDBID aSlotID, bool aShouldDestroyEntity,
                                  bool aKeepWorldTransform, bool aSkipSendAnimEquipEvents) = 0; // 3A0
    virtual bool RemoveItemFromSlot(const IScriptable* aOwner, TweakDBID aSlotID, bool aShouldDestroyEntity,
                                    bool aKeepWorldTransform, bool aSkipSendAnimEquipEvents) = 0; // 3A8
    virtual bool RemoveItemFromAnySlot(IScriptable* aOwner, ItemID aItemID, bool aShouldDestroyEntity,
                                       bool aKeepWorldTransform) = 0;                                         // 3B0
    virtual bool ChangeItemToSlot(IScriptable* aOwner, TweakDBID aNewSlotID, ItemID aItemID) = 0;             // 3B8
    virtual bool ClearAllSlots(IScriptable* aOwner, bool aDestroyEntities) = 0;                               // 3C0
    virtual bool IsSlotEmpty(const IScriptable* aOwner, TweakDBID aSlotID) = 0;                               // 3C8
    virtual bool IsSlotEmptySpawningItem(const IScriptable* aOwner, TweakDBID aSlotID) = 0;                   // 3D0
    virtual bool IsSlotSpawningItem(const IScriptable* aOwner, TweakDBID aSlotID, ItemID aItemID) = 0;        // 3D8
    virtual bool IsSlotSpawningAnyItem(const IScriptable* aOwner, TweakDBID aSlotID) = 0;                     // 3E0
    virtual bool IsSlotLogicallyEmpty(const IScriptable* aOwner, TweakDBID aSlotID) = 0;                      // 3E8
    virtual bool HasItemDataInSlot(const IScriptable* aOwner, TweakDBID aSlotID, TweakDBID aItemID) = 0;      // 3F0
    virtual bool HasItemDataInSlotByItemID(const IScriptable* aOwner, TweakDBID aSlotID, ItemID aItemID) = 0; // 3F8
    virtual bool HasItemInSlot(const IScriptable* aOwner, TweakDBID aSlotID, TweakDBID aItemID) = 0;          // 400
    virtual bool HasItemInSlotByItemID(const IScriptable* aOwner, TweakDBID aSlotID, ItemID aItemID) = 0;     // 408
    virtual bool HasItemInAnySlotAndGetSlotID(const IScriptable* aOwner, ItemID aItemID,
                                              TweakDBID& aSlotID) = 0;                                 // 410
    virtual bool HasItemInAnySlot(const IScriptable* aOwner, ItemID aItemID) = 0;                      // 418
    virtual bool CanPlaceItemInSlot(const IScriptable* aOwner, TweakDBID aSlotID, ItemID aItemID) = 0; // 420
    virtual bool GetItemInSlot(const IScriptable* aOwner, TweakDBID aSlotID,
                               Handle<ItemObject>& aItemObject) = 0; // 428
    virtual bool GetItemInSlotByItemID(const IScriptable* aOwner, ItemID aItemID,
                                       Handle<ItemObject>& aItemObject) = 0;                            // 430
    virtual bool GetAttachedItems(const IScriptable* aOwner, DynArray<AttachmentSlotData>& aSlots) = 0; // 438
    virtual void IterateOnAttachedItems(const IScriptable* aOwner,
                                        AttachmentSlotDataAction&& aAction) = 0; // 440
    virtual AttachmentSlotData* FindAttachedItemsIf(const IScriptable* aOwner,
                                                    AttachmentSlotDataPredicate&& aPredicate) = 0; // 448
    virtual AttachmentSlotData* FindSlotData(const IScriptable* aOwner,
                                             AttachmentSlotDataPredicate&& aPredicate) = 0;             // 450
    virtual ItemID CycleActiveItemInSlot(IScriptable* aOwner, TweakDBID aSlotID) = 0;                   // 458
    virtual bool SetActiveItemInSlot(IScriptable* aOwner, TweakDBID aSlotID, ItemID aItemID) = 0;       // 460
    virtual bool EquipActiveItemInSlot(IScriptable* aOwner, TweakDBID aSlotID, bool aHighPriority) = 0; // 468
    virtual ItemID GetActiveItemInSlot(const IScriptable* aOwner, TweakDBID aSlotID) = 0;               // 470
    virtual bool CanItemBeActiveInSlot(IScriptable* aOwner, TweakDBID aSlotID, ItemID aItemID) = 0;     // 478
    virtual ItemID GetNextActiveItemInSlot(IScriptable* aOwner, TweakDBID aSlotID) = 0;                 // 480
    virtual void RegisterInventoryCallback(const IScriptable* aOwner,
                                           Handle<IInventoryListener> aCallback) = 0; // 488
    virtual void UnregisterInventoryCallback(const IScriptable* aOwner,
                                             Handle<IInventoryListener> aListener) = 0; // 490
    virtual void RegisterAttachmentSlotsCallback(const IScriptable* aOwner,
                                                 Handle<IAttachmentSlotsListener> aCallback) = 0; // 498
    virtual void UnregisterAttachmentSlotsCallback(const IScriptable* aOwner,
                                                   Handle<IAttachmentSlotsListener> aListener) = 0; // 4A0
    virtual bool RemovePart(const IScriptable* aOwner, ItemID aItemID, TweakDBID aSlotID, TweakDBID& aPartItemID,
                            bool aShouldUpdateEntity) = 0; // 4A8
    virtual bool AddPart(const IScriptable* aOwner, ItemID aItemID, ItemID aPartItemID,
                         TweakDBID aSlotID) = 0; // 4B0
    virtual bool ForcePartInSlot(const IScriptable* aOwner, ItemID aItemID, ItemID aPartItemID,
                                 TweakDBID aSlotID) = 0; // 4B8
    virtual Handle<StatsBundle> CalculateTemporaryStatsBundle(const IScriptable* aOwner, ItemID aRootPartID,
                                                              ItemID aReplacementPartID,
                                                              TweakDBID aSlotIDForReplacement) = 0; // 4C0
    virtual bool HandlePointOfNoReturnLoot() = 0;                                                   // 4C8
    virtual void AddInventoryListenerData() = 0;                                                    // 4D0
    virtual bool MatchVisualTagByItemID(const ItemID& aItemID, const Handle<IScriptable>& aOwner,
                                        CName aTag) = 0; // 4D8
    virtual bool MatchVisualTag(const Handle<IScriptable>& aEntity, CName aTag,
                                bool aMatchUsingDefaultAppearance) = 0;                                          // 4E0
    virtual DynArray<CName> GetVisualTagsByItemID(const ItemID& aItemID, const Handle<IScriptable>& aOwner) = 0; // 4E8
    virtual DynArray<CName> GetVisualTags(const Handle<IScriptable>& aEntity,
                                          bool aMatchUsingDefaultAppearance) = 0; // 4F0
};
RED4EXT_ASSERT_SIZE(ITransactionSystem, 0x48);
} // namespace game
using gameITransactionSystem = game::ITransactionSystem;
using ITransactionSystem = game::ITransactionSystem;
} // namespace RED4ext
