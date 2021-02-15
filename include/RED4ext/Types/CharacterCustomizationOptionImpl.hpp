#include <RED4ext/Handle.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>

namespace RED4ext
{
namespace game::ui
{
    struct CharacterCustomizationInfo;
    struct MorphInfo;
    struct AppearanceInfo;
    struct SwitcherInfo;

    struct CharacterCustomizationOptionImpl : IScriptable
    {
        virtual void GetMorphInfo(Handle<MorphInfo>& info) = 0;           // 110
        virtual void GetAppearanceInfo(Handle<AppearanceInfo>& info) = 0; // 118
        virtual void GetSwitcherInfo(Handle<SwitcherInfo>& info) = 0;     // 120
        virtual void SetCurrentIndex(int32_t curIndex) = 0;               // 128

        Handle<CharacterCustomizationInfo> info; // 40
        uint32_t bodyPart;                       // 50 - Enum
        int32_t prevIndex;                       // 54
        int32_t currIndex;                       // 58
        bool isActive;                           // 5C
        bool isCensored;                         // 5D
    };
    RED4EXT_ASSERT_SIZE(CharacterCustomizationOptionImpl, 0x60);
} // namespace game::ui
} // namespace RED4ext
