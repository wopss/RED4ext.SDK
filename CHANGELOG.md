# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to
[Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Added

- Add `DynArray` constructors for input iterators and containers satisfying `std::ranges::range` concept.
- Add STL-like constructors and methods for `DynArray`, `StaticArray`: `Resize()`, `Insert()`, `Erase()`, etc
- Add `IRenderObject` (#194).
- Add `TRenderPtr<>`, a smart pointer for types inheriting `IRenderObject` (#194).
- Add `IRenderResource` (#194).
- Add parallel jobs support to `JobQueue` (#204).

### Changed

- Move `DynArray`, `StaticArray`, `Span`, and `SortedArray` into respective files in `RED4ext/Containers/`
- Make `DynArray`, `StaticArray`, `Span` fields private, use getter methods instead: `Data()`, `Size()`, etc.
- Rename `Span::GetSize()` to `Span::Size()`
- Move render types (`IRenderProxy`, `IRenderResource`, etc.) into respective files in `RED4ext/Rendering/` (#194).

### Removed

- Remove implicit boolean conversion for `Span`, use `Span::IsEmpty()` instead.

## [1.0.0] - 2026-03-09

- Initial release.

**Migrating from HEAD to 1.0.0**:

If you consumed the SDK at HEAD prior to the 1.0.0 release, please note the
following breaking changes and update your code accordingly:

- The version shim has been removed, you must now explicitly specify the loader
  API version. Update your types and includes to use the `v1` namespace:
  - Rename `RED4ext::PluginInfo` to `RED4ext::v1::PluginInfo` (include
    `RED4ext/Api/v1/PluginInfo.hpp`).
  - Rename `RED4ext::PluginHandle` to `RED4ext::v1::PluginHandle` (include
    `RED4ext/Api/v1/PluginHandle.hpp`).
  - Rename `RED4ext::EMainReason` to `RED4ext::v1::EMainReason` (include
    `RED4ext/Api/v1/EMainReason.hpp`).
  - Rename `RED4ext::Sdk` to `RED4ext::v1::Sdk` (include
    `RED4ext/Api/v1/Sdk.hpp`).
- The naming scheme for several macros and defines has changed:
  - Replace all `RED4EXT_V1_RUNTIME_*` defines with
    `RED4EXT_V1_RUNTIME_VERSION_*` (for example, replace
    `RED4EXT_V1_RUNTIME_2_31` with `RED4EXT_V1_RUNTIME_VERSION_2_31` or
    `RED4EXT_RUNTIME_LATEST` with `RED4EXT_V1_RUNTIME_VERSION_LATEST`).
  - Replace `RED4EXT_API_VERSION_LATEST` with `RED4EXT_API_VERSION_1`.
  - Replace `RED4EXT_V1_SDK_LATEST` with `RED4EXT_V1_SDK_VERSION_CURRENT`.
  - Replace `RED4EXT_SEMVER` with `RED4EXT_V1_SEMVER`.
- Remove any usage of `RED4EXT_V1_SDK_0_*_0`, as these defines no longer exist.
- All classes and methods that were previously marked as deprecated have been
  removed.

[unreleased]: https://github.com/wopss/RED4ext.SDK/compare/1.0.0...HEAD
[1.0.0]: https://github.com/wopss/RED4ext.SDK/releases/tag/1.0.0
