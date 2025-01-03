#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/ResourceLoader.hpp>
#endif

#include <RED4ext/Detail/AddressHashes.hpp>
#include <RED4ext/Relocation.hpp>

RED4EXT_INLINE RED4ext::ResourceRequest::ResourceRequest(ResourcePath aPath)
    : path(aPath)
    , unk08(0)
    , unk10(false)
    , disablePreInitialization(false)
    , disableImports(false)
    , disablePostLoad(false)
    , unk14(false)
    , unk15(false)
    , unk16(false)
    , archiveHandle(-1)
    , unk1C(0)
    , unk20(0)
{
}

RED4EXT_INLINE RED4ext::ResourceLoader* RED4ext::ResourceLoader::Get()
{
    static UniversalRelocPtr<ResourceLoader*> ptr(Detail::AddressHashes::ResourceLoader);
    return ptr;
}
