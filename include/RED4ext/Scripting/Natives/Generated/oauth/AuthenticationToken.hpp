#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
#include <RED4ext/Common.hpp>
#include <RED4ext/NativeTypes.hpp>

namespace RED4ext
{
namespace oauth
{
struct AuthenticationToken
{
    static constexpr const char* NAME = "oauthAuthenticationToken";
    static constexpr const char* ALIAS = NAME;

    CString token; // 00
    CString secret; // 20
    CString sessionHandle; // 40
    uint64_t tokenExpiresIn; // 60
    uint64_t authorizationExpiresIn; // 68
};
RED4EXT_ASSERT_SIZE(AuthenticationToken, 0x70);
} // namespace oauth
using oauthAuthenticationToken = oauth::AuthenticationToken;
} // namespace RED4ext

// clang-format on
