#pragma once

#include <RED4ext/CName.hpp>
#include <cstdint>

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
    virtual ~IGameState() = 0; // 00

    virtual const char* GetName() = 0;                 // 08
    virtual EGameStateType GetType() = 0;              // 10
    virtual bool OnEnter(CGameApplication* aApp) = 0;  // 18
    virtual bool OnUpdate(CGameApplication* aApp) = 0; // 20
    virtual bool OnExit(CGameApplication* aApp) = 0;   // 28
};

struct CBaseInitializationState : IGameState
{
    virtual void ReadOptions(int64_t a1, CGameOptions* aOptions) = 0; // 30
    virtual CName GetEngineName(int64_t a3) = 0;                      // 38
    virtual void sub_40() = 0;                                        // 40
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
