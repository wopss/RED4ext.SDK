# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.1.0/),
and this project adheres to
[Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Added

- Added `include/RED4ext/Detail/Containers/ArrayIterator.hpp`, a shared iterator
  type used by `DynArray`, `StaticArray`, and `Span`.

- `DynArray`:
  - Associated type aliases: `ValueType`, `Reference`, `Pointer`, `SizeType`, `Iterator`, etc.
  - Constructors: size, `std::input_iterator`, and `std::ranges::range`
  - `Assign()`: `std::input_iterator`, `std::ranges::range`, `std::initializer_list`, and size overloads
  - `Insert()`: value, `std::input_iterator`, `std::ranges::range`, `std::initializer_list`, and fill count overloads
  - `Erase()`: position and first-last overloads
  - `MaxSize()`
  - `Resize()`
  - Data Accessors: `At()` (bounds checked)
  - Reverse Data Accessors: `RBegin()`/`REnd()`
  - `Find()`, `IsInRange()`, `Includes()`
  - STL compatibility region

- `StaticArray`:
  - Associated type aliases: `ValueType`, `Reference`, `Pointer`, `SizeType`, `Iterator`, etc.
  - Constructors: default, `std::initializer_list`, and `std::input_iterator`
  - Destructor
  - Property Accessors: `Data()`, `Capacity()`, `Size()`
  - Data Accessors: `operator[]()`, `At()` (bounds checked), `Begin()`/`End()`, `Front()`/`Back()`
  - Reverse Data Accessors: `RBegin()`/`REnd()`
  - `Assign()`: `std::input_iterator`, `std::initializer_list`, and fill count overloads
  - `MaxSize()`
  - `Resize()`
  - `Clear()`
  - `Find()`, `IsInRange()`
  - STL compatibility region

- `Span`:
  - Associated type aliases: `ValueType`, `Reference`, `Pointer`, `SizeType`, `Iterator`, etc.
  - Data Accessors: `At()` (bounds checked), `Front()`/`Back()`, CamelCase `Begin()`/`End()`
  - Reverse Data Accessors: `RBegin()`/`REnd()`
  - STL compatibility region

### Changed

- `DynArray`, `StaticArray`, `Span`, and `SortedArray` have been moved into 
  respective files in `RED4ext/Containers/`

- `DynArray`:
  - Properties are now private
  - `Empty()` is now `IsEmpty()`
  - `MoveEntries()` has been split into two methods: `ShiftEntries()`,
     which handles direction-aware in-buffer element shifting using `std::move`/`std::move_backward`, 
     and a new static `MoveEntries()` reallocation callback with signature matching usage of `DynArray_Realloc`

- `StaticArray`:
  - Properties are now private

### Removed

- `DynArray`: `CopyFrom()`/`MoveFrom()`

- `Span`: 
  - `GetSize()` (favoring `Size()`)
  - `operator bool()`

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
