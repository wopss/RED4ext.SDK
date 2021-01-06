local m = {}

local currentDir = os.getcwd();
function m.root()
    return path.getdirectory(path.getdirectory(path.getdirectory(currentDir)));
end

function m.build(...)
    return path.join(m.root(), "build", "%{cfg.buildcfg:lower()}", ...)
end

function m.examples(path1, ...)
    return path.join(m.root(), "examples", path1, ...)
end

function m.include(...)
    return path.join(m.root(), "include", ...)
end

function m.src(file)
    return path.join(m.root(), "src", file)
end

return m
