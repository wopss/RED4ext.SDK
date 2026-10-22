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
    uint8_t unk96[0xA0 - 0x96]; // 96
};
// Game 2.5 (3.0.88.46235): size 0x98 -> 0xA0 (registration 0x17C5E1E; the constructor 0x27CE084 now also stores a
// byte at 0x98). Fields unchanged, from the script natives: GetAction 0xF60398 `mov eax, dword ptr [rcx+0x90]`,
// GetCharacter 0x27CE0BC `mov al, byte ptr [rcx+0x94]`, GetType 0x27CE0D0 `mov al, byte ptr [rcx+0x95]`.
RED4EXT_ASSERT_SIZE(CharacterEvent, 0xA0);
RED4EXT_ASSERT_OFFSET(CharacterEvent, action, 0x90);
RED4EXT_ASSERT_OFFSET(CharacterEvent, character, 0x94);
RED4EXT_ASSERT_OFFSET(CharacterEvent, type, 0x95);
} // namespace ink
} // namespace RED4ext
