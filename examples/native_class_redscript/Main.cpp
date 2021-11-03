#include <RED4ext/RED4ext.hpp>
#include <RED4ext/Scripting/IScriptable.hpp>
#include <RED4ext/RTTITypes.hpp>

struct MyCustomClass : RED4ext::IScriptable
{
    RED4ext::CClass* GetNativeType();
};

RED4ext::TTypedClass<MyCustomClass> cls("MyCustomClass");

RED4ext::CClass* MyCustomClass::GetNativeType()
{
    return &cls;
}

void GetNumber(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, float* aOut, int64_t a4)
{
    MessageBox(nullptr, L"Test", L"Hello", MB_OK);
    aFrame->code++; // skip ParamEnd
    *aOut = 6.25;
}

RED4EXT_C_EXPORT void RED4EXT_CALL RegisterTypes()
{
    cls.flags = {.isNative = true};
    RED4ext::CRTTISystem::Get()->RegisterType(&cls, 100000);
}

RED4EXT_C_EXPORT void RED4EXT_CALL PostRegisterTypes()
{
   auto rtti = RED4ext::CRTTISystem::Get();
   auto scriptable = rtti->GetClass("IScriptable");
   cls.parent = scriptable;

   RED4ext::CBaseFunction::Flags flags = { .isNative = true };
   auto getNumber = RED4ext::CClassFunction::Create(&cls, "GetNumber", "GetNumber", &GetNumber);
   getNumber->flags = flags;
   getNumber->SetReturnType("Float");
   cls.RegisterFunction(getNumber);
}

BOOL APIENTRY DllMain(HMODULE aModule, DWORD aReason, LPVOID aReserved)
{
    switch (aReason)
    {
    case DLL_PROCESS_ATTACH:
    {
        DisableThreadLibraryCalls(aModule);
        RED4ext::RTTIRegistrator::Add(RegisterTypes, PostRegisterTypes);
        break;
    }
    case DLL_PROCESS_DETACH:
    {
        break;
    }
    }

    return TRUE;
}

RED4EXT_C_EXPORT bool RED4EXT_CALL Load(RED4ext::PluginHandle aHandle, const RED4ext::IRED4ext* aInterface)
{
    return true;
}

RED4EXT_C_EXPORT void RED4EXT_CALL PostLoad()
{

}

RED4EXT_C_EXPORT void RED4EXT_CALL Unload()
{
}

RED4EXT_C_EXPORT void RED4EXT_CALL Query(RED4ext::PluginInfo* aInfo)
{
    aInfo->name = L"Native Classes";
    aInfo->author = L"Jack Humbert";
    aInfo->version = RED4EXT_SEMVER(1, 0, 0);
    aInfo->runtime = RED4EXT_RUNTIME_LATEST;
    aInfo->sdk = RED4EXT_SDK_LATEST;
}

RED4EXT_C_EXPORT uint32_t RED4EXT_CALL Supports()
{
    return RED4EXT_API_VERSION_LATEST;
}
