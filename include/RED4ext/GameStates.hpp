#pragma once

#include <cstdint>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
struct CGameApplication;

enum class EGameState
{
    Uninitialized = 0,
    Initialized,
    Ran,
    Done,
};

struct IGameState
{
    virtual ~IGameState() = 0;

    virtual const char* GetName() = 0;
    virtual uint32_t GetIndex() = 0;
    virtual bool Init(CGameApplication* aApp) = 0;
    virtual bool Run(CGameApplication* aApp) = 0;
    virtual bool Done(CGameApplication* aApp) = 0;
};

struct CBaseInitializationState : IGameState
{
    virtual void sub_30() = 0;
    virtual CName* GetEngineName(CName& aOut, int64_t a3);
};

struct CInitializationState : IGameState
{
};

struct CRunningState : IGameState
{
};

struct CShutdownState : IGameState
{
};
} // namespace RED4ext
