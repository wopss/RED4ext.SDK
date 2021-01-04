#pragma once

#include <cstdint>
#include <RED4ext/Common.hpp>

namespace RED4ext
{
template<typename T> struct Handle;
template<typename T> struct WeakHandle;
template<typename T> struct DynArray;
struct CString;
struct ISerializable;
struct IScriptable;
struct TweakDBID;
struct ItemID;

union InstanceType
{
    void*                           ptr;
    uint8_t*                        u8;
    int8_t*                         i8;
    uint16_t*                       u16;
    int16_t*                        i16;
    uint32_t*                       u32;
    int32_t*                        i32;
    uint64_t*                       u64;
    int64_t*                        i64;
    CString*                        str;
    TweakDBID*                      tdbid;
    ItemID*                         itemid;
    ISerializable*                  serializable;
    IScriptable*                    scriptable;
    Handle<IScriptable>*            ref;
    WeakHandle<IScriptable>*        wref;
    DynArray<void*>*                array;
    DynArray<Handle<IScriptable>>*  array_ref;
};
RED4EXT_ASSERT_SIZE(InstanceType, 0x8);

} // namespace RED4ext
