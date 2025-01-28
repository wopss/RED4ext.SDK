#pragma once

#include <stdexcept>

namespace RED4ext
{
class [[nodiscard]] Exception : public std::runtime_error
{
public:
    using std::runtime_error::runtime_error;

    Exception(const Exception&) noexcept = default;
    Exception& operator=(const Exception&) noexcept = default;

    virtual ~Exception() noexcept = default;
};
} // namespace RED4ext
