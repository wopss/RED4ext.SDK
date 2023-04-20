#pragma once

#include <RED4ext/CName.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/ISerializable.hpp>

namespace RED4ext::ink
{
struct Widget;

struct Children : ISerializable
{
    static constexpr const char* NAME = "inkChildren";
    static constexpr const char* ALIAS = NAME;

    virtual uint32_t GetNumChildren() = 0;                                         // D8
    virtual Widget* GetChildPtrByIndex(uint32_t aIndex) = 0;                       // E0
    virtual Widget* GetChildPtrByName(CName aName) = 0;                            // E8
    virtual Handle<Widget>& GetChildByIndex(uint32_t aIndex) = 0;                  // F0
    virtual void AddChild(const Handle<Widget>& aWidget) = 0;                      // F8
    virtual void InsertChild(const Handle<Widget>& aWidget, uint32_t aIndex) = 0;  // 100
    virtual bool RemoveChild(const Handle<Widget>& aWidget) = 0;                   // 108
    virtual bool RemoveChildByIndex(uint32_t aIndex) = 0;                          // 110
    virtual void RemoveAllChildren() = 0;                                          // 118
    virtual void ReorderChild(const Handle<Widget>& aWidget, uint32_t aIndex) = 0; // 120
    virtual void sub_128(uint32_t a1, uint32_t a2) = 0;                            // 128
    virtual void sub_130(void* a1) = 0;                                            // 130
    virtual uint32_t GetChildIndex(const Handle<Widget>& aWidget) = 0;             // 138
};
RED4EXT_ASSERT_SIZE(Children, 0x30);
} // namespace RED4ext::ink
