#pragma once
#include <cstdint>

#include <RED4ext/Common.hpp>
#include <RED4ext/DynArray.hpp>
#include <RED4ext/HashMap.hpp>
#include <RED4ext/Handle.hpp>
#include <RED4ext/Types/SharedMutex.hpp>
#include <RED4ext/Types/SimpleTypes.hpp>
#include <RED4ext/RTTITypes.hpp>
#include <RED4ext/Scripting/Stack.hpp> // Might need an alternative to CStackType

namespace RED4ext
{
struct IScriptable;

struct TweakDB
{
    struct TweakVal
    {
        // ToValueOffset here is the 3bytes stored in records.
        // those 3 bytes **ARE NOT** TweakDBID::Offset. tweak's offset point to this class and not the value.

        virtual ~TweakVal() = 0;
        virtual bool ToValueOffset_array_TweakDBID(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_TweakDBID(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_Quaternion(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_Quaternion(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_EulerAngles(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_EulerAngles(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_Vector3(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_Vector3(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_Vector2(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_Vector2(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_Color(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_Color(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_gamedataLocKeyWrapper(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_gamedataLocKeyWrapper(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_raRef_CResource(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_raRef_CResource(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_CName(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_CName(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_Bool(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_Bool(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_String(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_String(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_Float(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_Float(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_array_Int32(uint32_t* apValueOffset) = 0;
        virtual bool ToValueOffset_Int32(uint32_t* apValueOffset) = 0;
        virtual CStackType* GetValue(CStackType* apStackType) = 0;

        bool SetValue(CStackType& aStackType);
        void SetValue(void* apValue);

        // value here
    };

    enum class TweakGroupFlag : int8_t
    {
        None            = 0,
        Abstract        = 1 << 0,
        NotQueryable    = 1 << 1,
        CPO             = 1 << 2,
        Debug           = 1 << 3
    };

    SharedMutex mutex00;                                                    // 00 - used with values, valuesBuffer*, 
    SharedMutex mutex01;                                                    // 01 - used with recordsByID, recordsByType, packageIDs, packageValues, groups and groupFlags
    void* unk08;                                                            // 08 - class - 264 bytes - has DynArray<GroupFlagCName> and DynArray<FlagVal-1byte>
    void* unk10;                                                            // 10 - class - 208 bytes
    bool unk18;                                                             // 18
    DynArray<TweakDBID> values;                                             // 20
    uint64_t unk30;                                                         // 30
    HashMap<TweakDBID, Handle<IScriptable>> recordsByID;                    // 38
    HashMap<IRTTIType*, DynArray<Handle<IScriptable>>> recordsByType;       // 68
    DynArray<TweakDBID> packageIDs;                                         // 98
    DynArray<DynArray<TweakDBID>> packageValues;                            // A8
    uint32_t unkB8;                                                         // B8
    uint32_t unkBC;                                                         // BC
    DynArray<TweakDBID> groups;                                             // C0
    DynArray<TweakGroupFlag> groupFlags;                                    // D0
    uint64_t unkE0;                                                         // E0
    HashMap<CName, TweakVal*> defaultValueByType;                           // E8
    DynArray<CString> unk118;                                               // 118 - empty - maybe not CString
    uintptr_t valuesBuffer;                                                 // 128
    uint32_t valuesBufferSize;                                              // 130
    uintptr_t valuesBufferEnd;                                              // 138

    template<typename T>
    RED4EXT_INLINE T* GetVal(TweakDBID aDBID)
    {
        auto* tweakVal = GetTweakVal(aDBID);
        if (tweakVal == nullptr)
            return nullptr;

        CStackType stackType;
        tweakVal->GetValue(&stackType);
        return reinterpret_cast<T*>(stackType.value);
    }

    TweakVal* GetTweakVal(TweakDBID aDBID);
    static TweakDB* Get();
};
RED4EXT_ASSERT_OFFSET(TweakDB, unk08, 0x08);
RED4EXT_ASSERT_OFFSET(TweakDB, values, 0x20);
RED4EXT_ASSERT_OFFSET(TweakDB, valuesBufferEnd, 0x138);
RED4EXT_ASSERT_SIZE(TweakDB, 0x140);
}

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Types/TweakDB-inl.hpp>
#endif
