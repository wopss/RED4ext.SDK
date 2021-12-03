#pragma once

#include <RED4ext/Api/PluginHandle.hpp>

namespace RED4ext
{
struct CGameApplication;

namespace v0
{
struct GameState
{
    bool (*OnEnter)(CGameApplication* aApp);
    bool (*OnUpdate)(CGameApplication* aApp);
    bool (*OnExit)(CGameApplication* aApp);
};
} // namespace v0
} // namespace RED4ext
