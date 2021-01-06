project("RED4ext.ExecuteFunctions")
    targetdir(red4ext.paths.build("examples"))

    kind("SharedLib")
    language("C++")

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
