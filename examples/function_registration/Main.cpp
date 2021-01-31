#include <iostream>

#include <RED4ext/RED4ext.hpp>

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

/*
 * To run this plugin you need to load it with RED4ext (https://github.com/WopsS/RED4ext).
 */
RED4EXT_C_EXPORT void OnInitialization()
{
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

        auto staticFunc = RED4ext::CClassStaticFunction::Create(playerPuppetCls, "MyStaticFunc", "MyStaticFunc", &MyStaticFunc);
        func->SetReturnType("Bool");

        playerPuppetCls->RegisterFunction(func);
        playerPuppetCls->RegisterFunction(staticFunc);
    }
}
