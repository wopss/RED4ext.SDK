#pragma once

#include <RED4ext/Api/PluginHandle.hpp>

namespace RED4ext::v0
{
struct Hooking
{
    /**
     * @brief Attach a hook.
     *
     * @param[in]   aHandle     The plugin's handle.
     * @param[in]   aTarget     The address of the function that will be hooked.
     * @param[in]   aDetour     The address of the callback.
     * @param[out]  aOriginal   A pointer to the trampoline function, will be used to call the original function. This
     * can be NULL.
     *
     * @return Returns true if the hook is attached, false otherwise.
     *
     * @example
     *
     * bool _CInitializationState_Init(RED4ext::CInitializationState* aThis, RED4ext::CGameApplication* aApp);
     * decltype(&_CInitializationState_Init) _CInitializationState_Init_Original;
     *
     * bool _CInitializationState_Init(RED4ext::CInitializationState* aThis, RED4ext::CGameApplication* aApp)
     * {
     *     MessageBox(nullptr, L"Hello!", L"Hello!", MB_OK);
     *     return _CInitializationState_Init_Original(aThis, aApp);
     * }
     *
     * RED4EXT_C_EXPORT bool RED4EXT_CALL Main(RED4ext::PluginHandle aHandle, RED4ext::EMainReason aReason, const
     * RED4ext::RED4ext* aRED4ext)
     * {
     *     switch (aReason)
     *     {
     *     case RED4ext::EMainReason::Load:
     *     {
     *         aRED4ext->hooking->Attach(aHandle, RED4EXT_OFFSET_TO_ADDR(0x140AD5F70 - RED4ext::Addresses::ImageBase),
     * &_CInitializationState_Init, reinterpret_cast<void**>(&_CInitializationState_Init_Original));
     *         break;
     *     }
     *     }
     *
     *     return true;
     * }
     */
    bool (*Attach)(PluginHandle aHandle, void* aTarget, void* aDetour, void** aOriginal);

    /**
     * @brief Detach all hooks at target.
     *
     * @param[in] aHandle   The plugin's handle.
     * @param[in] aTarget   The address of the function that was hooked.
     *
     * @return Returns true if all hooks were detached, false otherwise.
     *
     * @example
     *
     * bool _CInitializationState_Init(RED4ext::CInitializationState* aThis, RED4ext::CGameApplication* aApp);
     * decltype(&_CInitializationState_Init) _CInitializationState_Init_Original;
     *
     * bool _CInitializationState_Init(RED4ext::CInitializationState* aThis, RED4ext::CGameApplication* aApp)
     * {
     *     MessageBox(nullptr, L"Hello!", L"Hello!", MB_OK);
     *     return _CInitializationState_Init_Original(aThis, aApp);
     * }
     *
     * RED4EXT_C_EXPORT bool RED4EXT_CALL Main(RED4ext::PluginHandle aHandle, RED4ext::EMainReason aReason, const
     * RED4ext::RED4ext* aRED4ext)
     * {
     *     switch (aReason)
     *     {
     *     case RED4ext::EMainReason::Load:
     *     {
     *         aRED4ext->hooking->Attach(aHandle, RED4EXT_OFFSET_TO_ADDR(0x140AD5F70 - RED4ext::Addresses::ImageBase),
     * &_CInitializationState_Init, reinterpret_cast<void**>(&_CInitializationState_Init_Original));
     *         break;
     *     }
     *     case RED4ext::EMainReason::Unload:
     *     {
     *         aRED4ext->hooking->Detach(aHandle, RED4EXT_OFFSET_TO_ADDR(0x140AD5F70 - RED4ext::Addresses::ImageBase));
     *         break;
     *     }
     *     }
     *
     *     return true;
     * }
     */
    bool (*Detach)(PluginHandle aHandle, void* aTarget);
};
} // namespace RED4ext::v0
