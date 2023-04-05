#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Scripting/Natives/Generated/ink/InputEvent.hpp>

namespace RED4ext
{
enum class EInputAction : uint32_t
{
    IACT_None,
    IACT_Press,
    IACT_Release,
    IACT_Axis,
};

enum class inkCharacterEventType : uint8_t
{
    CharInput,
    MoveCaretForward,
    MoveCaretBackward,
    Delete,
    Backspace,
};

namespace ink
{
struct CharacterEvent : InputEvent
{
    static constexpr const char* NAME = "inkCharacterEvent";
    static constexpr const char* ALIAS = NAME;

    EInputAction action;        // 90
    char character;             // 94
    inkCharacterEventType type; // 95
};
RED4EXT_ASSERT_SIZE(CharacterEvent, 0x98);
} // namespace ink
} // namespace RED4ext
