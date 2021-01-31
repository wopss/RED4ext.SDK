project("RED4ext.FunctionRegistration")
    targetdir(red4ext.paths.build("examples"))

    kind("SharedLib")
    language("C++")
    dependson({ "RED4ext.SDK" })

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
