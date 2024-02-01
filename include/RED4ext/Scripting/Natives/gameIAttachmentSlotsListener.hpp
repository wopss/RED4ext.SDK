#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game
{
struct IAttachmentSlotsListener : IScriptable
{
    static constexpr const char* NAME = "gameIAttachmentSlotsListener";
    static constexpr const char* ALIAS = "AttachmentSlotsListener";

    virtual void OnItemEquippingStarted(const ItemID& aItemID, TweakDBID aSlotID);     // 108
    virtual void OnItemEquippingCanceled(const ItemID& aItemID, TweakDBID aSlotID);    // 110
    virtual void OnItemEquipped(const ItemID& aItemID, TweakDBID aSlotID);             // 118
    virtual void OnItemEquippedComplete(const ItemID& aItemID, TweakDBID aSlotID);     // 120
    virtual void OnItemEquippedVisual(const ItemID& aItemID, TweakDBID aSlotID);       // 128
    virtual void OnItemUnequippingStarted(const ItemID& aItemID, TweakDBID aSlotID);   // 130
    virtual void OnItemUnequippingCanceled(const ItemID& aItemID, TweakDBID aSlotID);  // 138
    virtual void OnItemUnequipped(const ItemID& aItemID, TweakDBID aSlotID);           // 140
    virtual void OnItemUnequippedComplete(const ItemID& aItemID, TweakDBID aSlotID);   // 148
    virtual void OnAttachmentPreRefreshed(const ItemID& aItemID, TweakDBID aSlotID);   // 150
    virtual void OnAttachmentRefreshed(const ItemID& aItemID, TweakDBID aSlotID);      // 158
    virtual void OnChangeAppearanceComplete(const ItemID& aItemID, TweakDBID aSlotID); // 160
    virtual void OnChangeAppearanceCanceled(const ItemID& aItemID, TweakDBID aSlotID); // 168
};
RED4EXT_ASSERT_SIZE(IAttachmentSlotsListener, 0x40);
} // namespace game
using gameIAttachmentSlotsListener = game::IAttachmentSlotsListener;
using AttachmentSlotsListener = game::IAttachmentSlotsListener;
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Scripting/Natives/gameIAttachmentSlotsListener-inl.hpp>
#endif
