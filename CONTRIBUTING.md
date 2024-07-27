# Contributing

You can contribute to RED4ext.SDK with issues, ideas and PRs. Simply filling issues or propose new ideas is a great way to contribute.

## Content guidelines

The issue tracker is exclusively for filling and discussing bugs and feature requests, it is not for scripting support (e.g. `How do I get X handler?`, `How can I call X function?`, etc.). For any other kind of discussion use [discussions](https://github.com/WopsS/RED4ext.SDK/discussions).

### Reporting a bug or requesting a feature

Before filing a bug report or requesting a new features ensure the bug reproduces on the latest version of the library and search existing issues and make sure this issue is not already filed.

## Code guidelines

### Language

The project is using [C++20](https://en.cppreference.com/w/cpp/20), any C++20 features are allowed.

### General

* Use [EditorConfig](https://editorconfig.org/) and [clang-format](https://clang.llvm.org/docs/ClangFormat.html) to style your code before pushing.
* Use names that describe the purpose or intent of the object. Names should be self-explanatory and easily recognizable in the context.
* Minimize the use of abbreviations that would likely be unknown to someone outside the project.
* Use `auto` whenever it is possible, if the intended type is the correct one (in case of primitive types).
* Brackets (`{}`) must be on new line.

### Namespaces

* Namespaces must be `PascalCase`.
* The code must be in `RED4ext` namespace, even reversed types.

### Classes

* Class names must be `PascalCase`.
* Use `class` and `struct` accordingly.
* A rule of thumb is to use `struct` for reversed types or objects that carry data, for everything else use `class`.

### Functions

* Function names should be `PascalCase`.

### Variables

* Class data members should be prefixed with `m_`.
* Function arguments should be prefixed with an `a` (**a**rgument).
* Local variables should be `camelCase`.
* Structs data members are named like ordinary variables.

### Enumerators

* Enumerators names must be `PascalCase`.
* Always use `enum class` over `enum`.

### Macros

* Marcos should be named with uppercase letters.
* Prefix macros with `RED4EXT_`.

## Commit messages

Please try to format commit messages as follows (based on [A Note About Git Commit Messages](http://tbaggery.com/2008/04/19/a-note-about-git-commit-messages.html)):

```text
Short (50 characters or less) summary

Provide a more detailed (72 characters or so) text after the first line,
if necessary, leave one blank line below the summary.

If the commit fixes an issue, leave another blank line after the final paragraph
and indicate which issue is fixed.

Fix #1
```

## Declare reverse engineered content

SDK doesn't include every member of classes. Most of the knowledge is generated using [RED4.RTTIDumper](https://github.com/WopsS/RED4.RTTIDumper), 
through the RTTI system.

Say you discovered a new member in a class, and you want to write a PR. This section will give you a tour to make it 
right and compliant with the SDK.

### Prepare your environment

Clone and setup [RED4.RTTIDumper](https://github.com/WopsS/RED4.RTTIDumper), read through the [build](https://github.com/WopsS/RED4.RTTIDumper?tab=readme-ov-file#build-instructions) 
instructions.
Make sure to update RED4ext.SDK dependency, in `<RTTIDumper>/deps/red4ext.sdk` to use the latest snapshot of the SDK.
You can comment each line adding a [custom writer](https://github.com/WopsS/RED4.RTTIDumper/blob/4feaad12de106e395b7a637031432ea3caa2cf10/src/Main.cpp#L29).
This way, it will only generate the C++ dump and make the process faster.

### Declare a new member

All operations below are done within `<RTTIDumper>/deps/red4ext.sdk`, in order for the dumper to account for the change
you want to write. We will see the content of your PR after this step.

We will declare a new member of the class [vehicleBaseObject](https://github.com/WopsS/RED4ext.SDK/blob/fa50370bc0c4d95c16b8ec9e0a10113f155f361f/include/RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp).
In this example, it will be the property `bool isOnGround` which was found out at offset `0x25C`.
If you look at the class, the file is in `../include/RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp`.

We need to declare this file to tell the SDK we want to use our modified version of this class, instead of the generated
one:
1. Copy this file in `../include/RED4ext/Scripting/Natives/`.
2. Rename the file using the full name of the class, which will be [vehicleBaseObject.hpp](https://github.com/WopsS/RED4ext.SDK/blob/fa50370bc0c4d95c16b8ec9e0a10113f155f361f/include/RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp#L20):

```cpp
    static constexpr const char* NAME = "vehicleBaseObject";
```

3. Remove `__declspec()` declaration:

```diff
- struct __declspec(align(0x10)) BaseObject : game::Object
+ struct BaseObject : game::Object
```

4. Declare the new member based on its offset and type:

```diff
{
    static constexpr const char* NAME = "vehicleBaseObject";
    static constexpr const char* ALIAS = "VehicleObject";

-   uint8_t unk240[0x3A0 - 0x240]; // 240
+   uint8_t unk240[0x25C - 0x240]; // 240
+   bool isOnGround;               // 25C
+   uint8_t unk25D[0x3A0 - 0x25D]; // 25D
    Ref<AI::Archetype> archetype;  // 3A0
    uint8_t unk3B8[0x6D2 - 0x3B8]; // 3B8
    bool isVehicleOnStateLocked;   // 6D2
    uint8_t unk6D3[0xB90 - 0x6D3]; // 6D3
};
```

5. Assert the offset of known members:

```diff
};
RED4EXT_ASSERT_SIZE(BaseObject, 0xB90);
+RED4EXT_ASSERT_OFFSET(BaseObject, isOnGround, 0x25C);
+RED4EXT_ASSERT_OFFSET(BaseObject, archetype, 0x3A0);
+RED4EXT_ASSERT_OFFSET(BaseObject, isVehicleOnStateLocked, 0x6D2);
} // namespace vehicle
using vehicleBaseObject = vehicle::BaseObject;
using VehicleObject = vehicle::BaseObject;
} // namespace RED4ext
```

### Generate stub

1. Build the library and install it in `<game>/red4ext/plugins/`.
2. Run the game, wait, close the game and go in `<game>/bin/x64/dumps/cpp/Scripting/`.
3. Copy the folder `Natives` in the folder of RED4ext.SDK to replace its content with the new version.
4. If you see a difference on files you didn't touch, ask around before proceeding.
5. It should have [generated a stub](https://github.com/WopsS/RED4ext.SDK/blob/8730efb3aa0fed84e040997ca3e07571d5c86803/include/RED4ext/Scripting/Natives/Generated/vehicle/BaseObject.hpp)
   for the file in `Generated` folder. It *disables* the generated file using comments, and include the native 
   declaration we added.

### Ready to push

After isolating the changes we made in the clone of SDK in RTTI.Dumper, we can mirror them in our own clone of 
RED4ext.SDK.
You are now ready to write a nice commit, push and send a PR.

You can look at this [PR#142](https://github.com/WopsS/RED4ext.SDK/pull/142), to see the result of this example.

If you have questions, feel free to ask in [red4ext-cpp](https://discord.com/channels/717692382849663036/839400251680227339) channel of Discord.

## License

The project is licensed under the MIT license detailed in [LICENSE.md](/LICENSE.md) file. All incoming code is subject to the project's [LICENSE](/LICENSE.md).

**Do not** use code that is not yours or is not compatible with the project's [LICENSE](/LICENSE.md).
