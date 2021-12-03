#pragma once

#include <cstdint>
#include <RED4ext/CName.hpp>

namespace RED4ext
{
struct CGameApplication;
struct CGameOptions;

enum class EGameStateType : uint32_t
{
    BaseInitialization = 0,
    Initialization,
    Running,
    Shutdown
};

struct IGameState
{
    virtual ~IGameState() = 0;

    virtual const char* GetName() = 0;
    virtual EGameStateType GetType() = 0;
    virtual bool OnEnter(CGameApplication* aApp) = 0;
    virtual bool OnUpdate(CGameApplication* aApp) = 0;
    virtual bool OnExit(CGameApplication* aApp) = 0;
};

struct CBaseInitializationState : IGameState
{
    virtual void ReadOptions(int64_t a1, CGameOptions* aOptions) = 0;
    virtual CName GetEngineName(int64_t a3) = 0;
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
