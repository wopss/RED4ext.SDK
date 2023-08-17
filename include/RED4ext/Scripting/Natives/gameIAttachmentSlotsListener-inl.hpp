#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/gameIAttachmentSlotsListener.hpp>
#endif

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnItemEquippingStarted(const ItemID& aItemID,
                                                                                    TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnItemEquippingCanceled(const ItemID& aItemID,
                                                                                     TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnItemEquipped(const ItemID& aItemID, TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnItemEquippedComplete(const ItemID& aItemID,
                                                                                    TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnItemEquippedVisual(const ItemID& aItemID,
                                                                                  TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnItemUnequippingStarted(const ItemID& aItemID,
                                                                                      TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnItemUnequippingCanceled(const ItemID& aItemID,
                                                                                       TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnItemUnequipped(const ItemID& aItemID, TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnItemUnequippedComplete(const ItemID& aItemID,
                                                                                      TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnAttachmentPreRefreshed(const ItemID& aItemID,
                                                                                      TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnAttachmentRefreshed(const ItemID& aItemID,
                                                                                   TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnChangeAppearanceComplete(const ItemID& aItemID,
                                                                                        TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}

RED4EXT_INLINE void RED4ext::game::IAttachmentSlotsListener::OnChangeAppearanceCanceled(const ItemID& aItemID,
                                                                                        TweakDBID aSlotID)
{
    RED4EXT_UNUSED_PARAMETER(aItemID);
    RED4EXT_UNUSED_PARAMETER(aSlotID);
}
