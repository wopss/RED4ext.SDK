local m = {}
local paths = require("red4ext/paths")

function m.gen(major, minor, patch)
    local content = string.format([[
#pragma once

#define RED4EXT_VER_MAJOR %d
#define RED4EXT_VER_MINOR %d
#define RED4EXT_VER_PATCH %d

#define RED4EXT_VERSION RED4EXT_VER_MAJOR * 10000 + RED4EXT_VER_MINOR * 100 + RED4EXT_VER_PATCH
]], major, minor, patch)

    local file = paths.include("RED4ext", "Version.hpp")

    local current = io.readfile(file)
    if current == content then
        return
    end

    io.writefile(file, content)
end

return m
