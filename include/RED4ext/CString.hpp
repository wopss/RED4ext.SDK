#pragma once
#pragma message("WARNING: 'RED4ext/CString.hpp' is deprecated. Please use 'RED4ext/String.hpp' instead.")

#include <RED4ext/String.hpp>

namespace RED4ext
{
struct [[deprecated("Use 'String' instead.")]] CString : String
{
};

}
