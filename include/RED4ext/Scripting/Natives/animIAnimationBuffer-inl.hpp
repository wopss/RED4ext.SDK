#pragma once

#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/Scripting/Natives/animIAnimationBuffer.hpp>
#endif

RED4EXT_INLINE bool RED4ext::anim::IAnimationBuffer::Load()
{
}

RED4EXT_INLINE bool RED4ext::anim::IAnimationBuffer::Unload()
{
}

RED4EXT_INLINE bool RED4ext::anim::IAnimationBuffer::IsReady()
{
    return true;
}

RED4EXT_INLINE bool RED4ext::anim::IAnimationBuffer::HasInplaceCompressedBuffer()
{
    return true;
}

RED4EXT_INLINE AnimDataAddress* RED4ext::anim::IAnimationBuffer::GetDataAddress()
{
    return {};
}

RED4EXT_INLINE void RED4ext::anim::IAnimationBuffer::GetSize()
{
}

RED4EXT_INLINE void RED4ext::anim::IAnimationBuffer::GetExtraData()
{
}

RED4EXT_INLINE void RED4ext::anim::IAnimationBuffer::sub_138()
{
}

RED4EXT_INLINE bool RED4ext::anim::IAnimationBuffer::HasFallbackframes()
{
}

RED4EXT_INLINE void RED4ext::anim::IAnimationBuffer::sub_140()
{
}

RED4EXT_INLINE void RED4ext::anim::IAnimationBuffer::sub_148()
{
}

RED4EXT_INLINE void RED4ext::anim::IAnimationBuffer::CreateFallbackFrame()
{
}

RED4EXT_INLINE void RED4ext::anim::IAnimationBuffer::GatherInfo()
{
}

RED4EXT_INLINE bool RED4ext::anim::IAnimationBuffer::sub_168()
{
    return true;
}

RED4EXT_INLINE void RED4ext::anim::IAnimationBuffer::sub_170()
{
}

RED4EXT_INLINE bool RED4ext::anim::IAnimationBuffer::sub_178()
{
}

RED4EXT_INLINE void RED4ext::anim::IAnimationBuffer::sub_180()
{
}