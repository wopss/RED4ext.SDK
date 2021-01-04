#pragma once

#include <RED4ext/Common.hpp>
#include <cstdint>

namespace RED4ext
{
template<typename T>
struct Handle;
template<typename T>
struct WeakHandle;
template<typename T>
struct DynArray;
struct CString;
struct ISerializable;
struct IScriptable;
struct TweakDBID;
struct ItemID;

#define DECLARE_TYPE(type, name)                                                                                       \
    const type*(const_##name##);                                                                                       \
    type*(##name##);

union InstanceType
{
    DECLARE_TYPE(void, ptr);
    DECLARE_TYPE(uint8_t, u8);
    DECLARE_TYPE(int8_t, i8);
    DECLARE_TYPE(uint16_t, u16);
    DECLARE_TYPE(int16_t, i16);
    DECLARE_TYPE(uint32_t, u32);
    DECLARE_TYPE(int32_t, i32);
    DECLARE_TYPE(uint64_t, u64);
    DECLARE_TYPE(int64_t, i64);
    DECLARE_TYPE(CString, str);
    DECLARE_TYPE(TweakDBID, tdbid);
    DECLARE_TYPE(ItemID, itemid);
    DECLARE_TYPE(ISerializable, serializable);
    DECLARE_TYPE(IScriptable, scriptable);
    DECLARE_TYPE(Handle<IScriptable>, ref);
    DECLARE_TYPE(WeakHandle<IScriptable>, wref);
    DECLARE_TYPE(DynArray<void*>, array);
    DECLARE_TYPE(DynArray<Handle<IScriptable>>, array_ref);
};
RED4EXT_ASSERT_SIZE(InstanceType, 0x8);

} // namespace RED4ext
