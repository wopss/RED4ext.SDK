#pragma once

#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/Handle.hpp>

namespace RED4ext
{
struct CString;
struct ISerializable;
struct IScriptable;
struct TweakDBID;
struct ItemID;

union ScriptInstanceUnion
{
    RED4EXT_DECLARE_TYPE(void, ptr);
    RED4EXT_DECLARE_TYPE(uint8_t, u8);
    RED4EXT_DECLARE_TYPE(int8_t, i8);
    RED4EXT_DECLARE_TYPE(uint16_t, u16);
    RED4EXT_DECLARE_TYPE(int16_t, i16);
    RED4EXT_DECLARE_TYPE(uint32_t, u32);
    RED4EXT_DECLARE_TYPE(int32_t, i32);
    RED4EXT_DECLARE_TYPE(uint64_t, u64);
    RED4EXT_DECLARE_TYPE(int64_t, i64);
    RED4EXT_DECLARE_TYPE(CString, str);
    RED4EXT_DECLARE_TYPE(TweakDBID, tdbid);
    RED4EXT_DECLARE_TYPE(ItemID, itemid);
    RED4EXT_DECLARE_TYPE(ISerializable, serializable);
    RED4EXT_DECLARE_TYPE(IScriptable, scriptable);
    RED4EXT_DECLARE_TYPE(Handle<IScriptable>, ref);
    RED4EXT_DECLARE_TYPE(WeakHandle<IScriptable>, wref);
    RED4EXT_DECLARE_TYPE(DynArray<void*>, array);
    RED4EXT_DECLARE_TYPE(DynArray<Handle<IScriptable>>, array_ref);
};
RED4EXT_ASSERT_SIZE(ScriptInstanceUnion, 0x8);

using ScriptInstance = void*;
} // namespace RED4ext
