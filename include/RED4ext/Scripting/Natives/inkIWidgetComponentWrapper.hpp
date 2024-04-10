#pragma once

#include <RED4ext/Common.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct CClass;

namespace ent
{
struct Entity;
}

namespace ink
{
struct IWidgetController;
struct VirtualWindow;

struct IWidgetComponentWrapper
{
    static constexpr const char* NAME = "inkIWidgetComponentWrapper";
    static constexpr const char* ALIAS = NAME;

    virtual CClass* GetNativeType() = 0;                            // 00
    virtual CClass* GetType() = 0;                                  // 08
    virtual Memory::IAllocator* GetAllocator();                     // 10
    virtual ~IWidgetComponentWrapper() = 0;                         // 20
    virtual void sub_20() = 0;                                      // 28
    virtual void sub_28() = 0;                                      // 30
    virtual Handle<ink::VirtualWindow> GetWindow() = 0;             // 38
    virtual void sub_40() = 0;                                      // 40
    virtual void sub_48() = 0;                                      // 48
    virtual void sub_50() = 0;                                      // 50
    virtual void sub_58() = 0;                                      // 58
    virtual void sub_60() = 0;                                      // 60
    virtual void sub_68() = 0;                                      // 68
    virtual void sub_70() = 0;                                      // 70
    virtual void sub_78() = 0;                                      // 78
    virtual void sub_80() = 0;                                      // 80
    virtual void sub_88() = 0;                                      // 88
    virtual void sub_90() = 0;                                      // 90
    virtual Handle<ink::IWidgetController> GetGameController() = 0; // 98
    virtual void sub_A0() = 0;                                      // A0
    virtual void sub_A8() = 0;                                      // A8
    virtual void sub_B0() = 0;                                      // B0
    virtual void sub_B8() = 0;                                      // B8
    virtual void sub_C0() = 0;                                      // C0
    virtual void sub_C8() = 0;                                      // C8
    virtual void sub_D0() = 0;                                      // D0
    virtual void sub_D8() = 0;                                      // D8
    virtual void sub_E0() = 0;                                      // E0
    virtual ent::Entity* GetEntityPtr() = 0;                        // E8
    virtual ink::VirtualWindow* GetWindowPtr() = 0;                 // F0
    virtual void sub_F8() = 0;                                      // F8
    virtual void sub_100() = 0;                                     // 100
    virtual void sub_108() = 0;                                     // 108
    virtual void sub_110() = 0;                                     // 110
    virtual void sub_118() = 0;                                     // 118
    virtual void sub_120() = 0;                                     // 120
    virtual void sub_128() = 0;                                     // 128
    virtual void sub_130() = 0;                                     // 130
};
RED4EXT_ASSERT_SIZE(IWidgetComponentWrapper, 0x8);
} // namespace ink
} // namespace RED4ext
