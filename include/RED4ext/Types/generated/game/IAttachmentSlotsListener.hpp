#pragma once

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game { 
struct IAttachmentSlotsListener : IScriptable
{
    static constexpr const char* NAME = "gameIAttachmentSlotsListener";
    static constexpr const char* ALIAS = "AttachmentSlotsListener";

};
RED4EXT_ASSERT_SIZE(IAttachmentSlotsListener, 0x40);
} // namespace game
using AttachmentSlotsListener = game::IAttachmentSlotsListener;
} // namespace RED4ext
