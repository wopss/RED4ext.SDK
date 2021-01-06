project("RED4ext.AccessingProperties")
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
