#pragma once

#include <cstdint>

#include <RED4ext/CString.hpp>
#include <RED4ext/Common.hpp>
#include <RED4ext/Unks.hpp>

namespace RED4ext
{
struct CDateTime
{
    int64_t unk0;
};
RED4EXT_ASSERT_SIZE(CDateTime, 0x8);

struct CGUID
{
    int64_t unk0;
    int64_t unk8;
};
RED4EXT_ASSERT_SIZE(CGUID, 0x10);

struct CRUID
{
    int64_t unk0;
};
RED4EXT_ASSERT_SIZE(CRUID, 0x8);

struct CRUIDRef
{
    int64_t unk0;
};
RED4EXT_ASSERT_SIZE(CRUIDRef, 0x8);

struct TweakDBID
{
    uint32_t name;  // 00 CRC32
    uint8_t length; // 04
    uint16_t unk05; // 05
    uint8_t unk07;  // 07
};
RED4EXT_ASSERT_SIZE(TweakDBID, 0x8);

struct ItemID
{
    TweakDBID tdbid;   // 00
    uint32_t rngSeed;  // 08
    uint16_t unk0C;    // 0C
    uint8_t unk0E;     // 0E
    uint8_t pad0F;     // 0F
};
RED4EXT_ASSERT_SIZE(ItemID, 0x10);

struct EditorObjectID
{
    int64_t unk0;
    int64_t unk8;
    int64_t unk10;
    int64_t unk18;
};
RED4EXT_ASSERT_SIZE(EditorObjectID, 0x20);

struct Variant
{
    int64_t unk0;
    int64_t unk8;
    int64_t unk10;
};
RED4EXT_ASSERT_SIZE(Variant, 0x18);

struct DataBuffer
{
    int64_t unk0;
    int32_t unk8;
    int32_t unkC;
    Unk530 unk10;
    int64_t unk20;
};
RED4EXT_ASSERT_SIZE(DataBuffer, 0x28);

struct SharedDataBuffer
{
    int64_t unk0;
};
RED4EXT_ASSERT_SIZE(SharedDataBuffer, 0x8);

struct serializationDeferredDataBufferType
{
    int64_t unk0;
    int64_t unk8;
    int64_t unk10;
    int64_t unk18;
    Unk530 unk20;
    int64_t unk30;
    int8_t unk38;
    int64_t unk40;
    int64_t unk48;
    int64_t unk50;
};
RED4EXT_ASSERT_SIZE(serializationDeferredDataBufferType, 0x58);

struct gamedataLocKeyWrapper
{
    int64_t unk0;
};
RED4EXT_ASSERT_SIZE(gamedataLocKeyWrapper, 0x8);

struct LocalizationString
{
    int64_t unk0;
    CString unk8;
};
RED4EXT_ASSERT_SIZE(LocalizationString, 0x28);

struct MessageResourcePath
{
    int64_t unk0;
};
RED4EXT_ASSERT_SIZE(MessageResourcePath, 0x8);

struct NodeRef
{
    int64_t unk0;
};
RED4EXT_ASSERT_SIZE(NodeRef, 0x8);

struct RuntimeEntityRef
{
    int64_t unk0;
};
RED4EXT_ASSERT_SIZE(RuntimeEntityRef, 0x8);
} // namespace RED4ext
