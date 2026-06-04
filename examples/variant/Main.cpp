#include <RED4ext/RED4ext.hpp>
#ifdef RED4EXT_STATIC_LIB
#include <RED4ext/NativeTypes-inl.hpp>
#endif

RED4EXT_C_EXPORT bool RED4EXT_CALL Main(const RED4ext::v1::PluginHandle aHandle, const RED4ext::v1::EMainReason aReason,
                                        const RED4ext::v1::Sdk* aSdk)
{
    RED4EXT_UNUSED_PARAMETER(aHandle);
    RED4EXT_UNUSED_PARAMETER(aSdk);

    switch (aReason)
    {
    case RED4ext::v1::EMainReason::Load:
    {
        RED4ext::v1::GameState state{
            .OnEnter = [](RED4ext::CGameApplication*) -> bool
            {
                {
                    const auto data = RED4ext::ToVariant<RED4ext::CString>("Nova");
                    const auto number = RED4ext::FromVariant<RED4ext::CString>(data);

                    assert(number.has_value() == true);
                    assert(number.value() == "Nova");
                }

                {
                    const auto data = RED4ext::Variant(static_cast<int16_t>(32767));
                    const auto number = data.Get<int16_t>();

                    assert(number.has_value() == true);
                    assert(number.value() == 32767);
                }

                {
                    RED4ext::Variant data;
                    data.Set<float>(3.14f);
                    const auto number = data.Get<float>();
                    assert(number.has_value() == true);
                    assert(number.value() == 3.14f);
                }

                {
                    constexpr RED4ext::CName kTest = "Hello/World";

                    RED4ext::Variant data;
                    data.Set<RED4ext::CName>(kTest);
                    const auto name = data.Get<RED4ext::CName>();
                    assert(name.has_value() == true);
                    assert(name.value() == kTest);
                }

                return false;
            },
            .OnUpdate = nullptr,
            .OnExit = nullptr,
        };
        aSdk->gameStates->Add(aHandle, RED4ext::EGameStateType::Running, &state);

        break;
    }
    case RED4ext::v1::EMainReason::Unload:
    {
        break;
    }
    }

    return true;
}

RED4EXT_C_EXPORT void RED4EXT_CALL Query(RED4ext::v1::PluginInfo* aInfo)
{
    aInfo->name = L"RED4ext.Variant";
    aInfo->author = L"Rayshader";
    aInfo->version = RED4EXT_V1_SEMVER(1, 0, 0);
    aInfo->runtime = RED4EXT_V1_RUNTIME_VERSION_LATEST;
    aInfo->sdk = RED4EXT_V1_SDK_VERSION_CURRENT;
}

RED4EXT_C_EXPORT uint32_t RED4EXT_CALL Supports()
{
    return RED4EXT_API_VERSION_1;
}
