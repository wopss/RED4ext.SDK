#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct IAttachmentSlotsListener : IScriptable
{
    static constexpr const char* NAME = "gameIAttachmentSlotsListener";
    static constexpr const char* ALIAS = "AttachmentSlotsListener";

    virtual void OnItemEquippingStarted(ItemID& aItemID, TweakDBID aSlotID){};     // 110
    virtual void OnItemEquippingCanceled(ItemID& aItemID, TweakDBID aSlotID){};    // 118
    virtual void OnItemEquipped(ItemID& aItemID, TweakDBID aSlotID){};             // 120
    virtual void OnItemEquippedComplete(ItemID& aItemID, TweakDBID aSlotID){};     // 128
    virtual void OnItemEquippedVisual(ItemID& aItemID, TweakDBID aSlotID){};       // 130
    virtual void OnItemUnequippingStarted(ItemID& aItemID, TweakDBID aSlotID){};   // 138
    virtual void OnItemUnequippingCanceled(ItemID& aItemID, TweakDBID aSlotID){};  // 140
    virtual void OnItemUnequipped(ItemID& aItemID, TweakDBID aSlotID){};           // 148
    virtual void OnItemUnequippedComplete(ItemID& aItemID, TweakDBID aSlotID){};   // 150
    virtual void OnAttachmentPreRefreshed(ItemID& aItemID, TweakDBID aSlotID){};   // 158
    virtual void OnAttachmentRefreshed(ItemID& aItemID, TweakDBID aSlotID){};      // 160
    virtual void OnChangeAppearanceComplete(ItemID& aItemID, TweakDBID aSlotID){}; // 168
    virtual void OnChangeAppearanceCanceled(ItemID& aItemID, TweakDBID aSlotID){}; // 170
};
RED4EXT_ASSERT_SIZE(IAttachmentSlotsListener, 0x40);
} // namespace game
using gameIAttachmentSlotsListener = game::IAttachmentSlotsListener;
using AttachmentSlotsListener = game::IAttachmentSlotsListener;
} // namespace RED4ext
