project("RED4ext.ExecuteFunctions")
    targetdir(red4ext.paths.build("examples"))

    kind("SharedLib")
    language("C++")

    defines(
    {
        "RED4EXT_STATIC_LIB"
    })

    includedirs(
    {
        ".",
        red4ext.paths.include()
    })

    files(
    {
        "**.cpp",
        "**.hpp"
    })

    links(
    {
        "RED4ext.SDK"
    })
