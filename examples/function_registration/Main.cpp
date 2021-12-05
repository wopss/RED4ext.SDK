#include <iostream>

#include <RED4ext/RED4ext.hpp>

/*
 * To run this plugin you need to load it with RED4ext (https://github.com/WopsS/RED4ext).
 */

/*
 * Every scripting function must have the following parameters:
 *  RED4ext::IScriptable* aContext
 *  RED4ext::CStackFrame* aFrame
 *  type* aOut
 *  int64_t a4
 *
 * You have to take care of the type conversion from stack variables, stack management, etc..
 */

void MyGlobalFunc(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, RED4ext::CString* aOut, int64_t a4)
{
    /*
     * You have to take care of the stack and other things, the game usually increase the "code" pointer if they read a
     * value.
     */
    std::cout << "Hello from the global function!";

    if (aOut)
    {
        RED4ext::CString result("Returned from MyGlobalFunc");
        *aOut = result;
    }
}

void MyFunc(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, int32_t* aOut, int64_t a4)
{
    /*
     * You have to take care of the stack and other things, the game usually increase the "code" pointer if they read a
     * value.
     */
    std::cout << "Hello from the function!";

    if (aOut)
    {
        *aOut = 10;
    }
}

void MyStaticFunc(RED4ext::IScriptable* aContext, RED4ext::CStackFrame* aFrame, bool* aOut, int64_t a4)
{
    /*
     * You have to take care of the stack and other things, the game usually increase the "code" pointer if they read a
     * value.
     */
    std::cout << "Hello from the static function!";

    if (aOut)
    {
        *aOut = true;
    }
}
RED4EXT_C_EXPORT void RED4EXT_CALL RegisterTypes()
{
}

RED4EXT_C_EXPORT void RED4EXT_CALL PostRegisterTypes()
{
    /**
     * Setting the return type and parameters is not necessary if the functions are imported in redscript, because these
     * should be replaced by the definition from redscript, only set them if you do not import them in redscript.
     */

    auto rtti = RED4ext::CRTTISystem::Get();

    {
        auto func = RED4ext::CGlobalFunction::Create("MyGlobalFunc", "MyGlobalFunc", &MyGlobalFunc);
        func->SetReturnType("String");
        rtti->RegisterFunction(func);
    }

    {
        auto playerPuppetCls = rtti->GetClass("PlayerPuppet");

        auto func = RED4ext::CClassFunction::Create(playerPuppetCls, "MyFunc", "MyFunc", &MyFunc);
        func->SetReturnType("Int32");

        auto staticFunc =
            RED4ext::CClassStaticFunction::Create(playerPuppetCls, "MyStaticFunc", "MyStaticFunc", &MyStaticFunc);
        staticFunc->SetReturnType("Bool");

        playerPuppetCls->RegisterFunction(func);
        playerPuppetCls->RegisterFunction(staticFunc);
    }
}

RED4EXT_C_EXPORT bool RED4EXT_CALL Main(RED4ext::PluginHandle aHandle, RED4ext::EMainReason aReason,
                                        const RED4ext::Sdk* aSdk)
{
    switch (aReason)
    {
    case RED4ext::EMainReason::Load:
    {
        RED4ext::RTTIRegistrator::Add(RegisterTypes, PostRegisterTypes);
        break;
    }
    case RED4ext::EMainReason::Unload:
    {
        break;
    }
    }

    return true;
}

RED4EXT_C_EXPORT void RED4EXT_CALL Query(RED4ext::PluginInfo* aInfo)
{
    aInfo->name = L"RED4ext.FunctionRegistration";
    aInfo->author = L"WopsS";
    aInfo->version = RED4EXT_SEMVER(1, 0, 0);
    aInfo->runtime = RED4EXT_RUNTIME_LATEST;
    aInfo->sdk = RED4EXT_SDK_LATEST;
}

RED4EXT_C_EXPORT uint32_t RED4EXT_CALL Supports()
{
    return RED4EXT_API_VERSION_LATEST;
}
