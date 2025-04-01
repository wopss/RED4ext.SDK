#pragma once

#include <RED4ext/CString.hpp>
#include <RED4ext/CWideString.hpp>
#include <RED4ext/Common.hpp>
#include <cstdint>
#include <minwinrt.h>

namespace RED4ext
{
struct Process
{
    static constexpr uint32_t DefaultTimeout = 60000;

    enum class ExecutionFlags : std::uint8_t
    {
        // unsets CREATE_NO_WINDOW
        ShouldCreateWindow = 0x1,
        // sets CREATE_BREAKAWAY_FROM_JOB | CREATE_SUSPENDED in Process Creation Flags
        BreakawayAndSuspend = 0x2,
        // unsets bInheritHandles
        NoInheritHandles = 0x4
    };

    enum class ReadFlags : std::uint8_t
    {
        // open & read regardless of other options
        Unk1 = 0x1,
        // opens file from name provided and writes output
        WriteToFile = 0x2,
        // writes output to CString
        GetCString = 0x4
    };

    /**
     * @brief creates the read & write pipes, and handle information
     *
     * @param[in]   aHandle     The plugin's handle.
     * @param[in]   aPath       The path to be added to the redscript compilation - can be a folder or a .reds file
     *
     * @return Returns true if the path was added is attached, false otherwise.
     *
     * @pattern 48 89 5C 24 08 57 48 83 EC 40 33 C0 C7 44 24 20 18 00 00 00 48 8D 91 08 20 00 00 48 89 81 00 20
     */
    Process();

    /// @pattern 40 53 48 83 EC 20 48 8B D9 48 8B 89 08 20 00 00 FF 15 ? ? 4B 00 48 8B 8B 00 20 00 00 48 83 C4
    bool CloseHandles();

    /**
     * @brief Assigns the process's error code to this->errorCode
     *
     * @return Returns the error code
     *
     * @pattern 40 53 48 83 EC 20 48 8D 99 28 20 00 00 48 8B 89 10 20 00 00 48 8B D3 FF 15 ? ? 4B 00 8B 03 48
     */
    DWORD GetExitCode();

    /// @pattern 40 55 56 57 41 56 B8 68 20 00 00 E8 ? ? E7 FF 48 2B E0 49 8B E9 49 8B F0 8B FA 4C 8B F1 F6 C2
    void ReadFromPipe(const ReadFlags aFlags, const CString& aFilename, CString& aStdOut);

    /**
     * @brief Converts aWorkingDirectory to a CWideString and calls Execute
     *
     * @param[in]   aCommand            The location of the executable
     * @param[in]   aArgs               Arguments passed to the command
     * @param[in]   aWorkingDirectory   The directory to execute the process from
     * @param[in]   aFlags              Flags that alter the execution
     *
     * @return True if the process was started successfully
     *
     * @pattern 48 89 5C 24 08 48 89 74 24 10 57 48 83 EC 40 48 8B FA 48 8B F1 48 8D 54 24 30 49 8B C9 49 8B D8
     */
    bool Execute(const CString& aCommand, CWideString& aArgs, const CString& aWorkingDirectory,
                 const ExecutionFlags aFlags);

    /**
     * @brief Begins the proccess
     *
     * @param[in]   aCommand            The location of the executable
     * @param[in]   aArgs               Arguments passed to the command
     * @param[in]   aWorkingDirectory   The directory to execute the process from
     * @param[in]   aFlags              Flags that alter the execution
     *
     * @return True if the process was started successfully
     *
     * @pattern 48 89 5C 24 10 48 89 74 24 18 55 57 41 54 41 56 41 57 48 8D 6C 24 B0 48 81 EC 50 01 00 00 0F 57
     */
    bool Execute(const CString& aCommand, CWideString& aArgs, const CWideString& aWorkingDirectory,
                 const ExecutionFlags aFlags);

    /// @pattern 48 89 5C 24 08 57 48 83 EC 20 48 8B D9 41 0F B6 F8 48 8B 89 10 20 00 00 FF 15 ? ? 4B 00 85 C0
    bool Terminate(const uint32_t aExitCode, const bool aCloseHandles);

    /// @pattern 48 83 EC 48 48 8B 89 10 20 00 00 FF 15 ? ? 4B 00 85 C0 74 4A 3D 02 01 00 00 74 3C FF 15 ? ?
    bool WaitUntilCompleted(const uint32_t aTimeoutMS) const;

    wchar_t command[0x1000]; // 0000
    PHANDLE readPipe;        // 2000
    PHANDLE writePipe;       // 2008
    HANDLE handle;           // 2010
    HANDLE hThread;          // 2018
    uint64_t unk2;           // 2020
    DWORD errorCode;         // 2028
};

// DEFINE_ENUM_FLAG_OPERATORS(Process::ExecutionFlags);
// DEFINE_ENUM_FLAG_OPERATORS(Process::ReadFlags);
} // namespace RED4ext

#ifdef RED4EXT_HEADER_ONLY
#include <RED4ext/Process-inl.hpp>
#endif