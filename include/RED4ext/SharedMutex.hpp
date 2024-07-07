#pragma once

namespace RED4ext
{
using SharedMutex [[deprecated("Use SharedSpinLock instead")]] = SharedSpinLock;
} // namespace RED4ext
