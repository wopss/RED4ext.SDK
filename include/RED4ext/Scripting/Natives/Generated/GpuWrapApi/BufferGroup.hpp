#pragma once

// clang-format off

// This file is generated from the Game's Reflection data

#include <cstdint>
namespace RED4ext
{
namespace GpuWrapApi {
enum class BufferGroup : int8_t
{
    System = 0,
    MeshResource = 1,
    MeshCustom = 2,
    AutoSpawner = 3,
    Debug = 4,
    DPL = 5,
    Weather = 6,
    ReflectionProbe = 7,
    Skinning = 8,
    Lights = 9,
    Video = 10,
    Particles = 11,
    GIManagerLitProbes = 12,
    GIManagerLookup = 13,
    GIManagerInterpolation = 14,
    GIManagerLitBricks = 15,
    GIManagerLights = 16,
    GIManagerEnvVolume = 17,
    GIProxyBrick = 18,
    GIProxySurfel = 19,
    GIProxyProbes = 20,
    GIProxyFactors = 21,
    GIProxyAcceleration = 22,
    Raytracing = 23,
    RaytracingUpload = 24,
    RaytracingAS = 25,
    RaytracingOMM = 26,
    Decals = 27,
    Instances = 28,
    Materials = 29,
    Multilayer = 30,
    FrameResources = 31,
    Misc = 32,
    MorphTargets = 33,
    MAX = 34,
};
} // namespace GpuWrapApi
using GpuWrapApiBufferGroup = GpuWrapApi::BufferGroup;
} // namespace RED4ext

// clang-format on
