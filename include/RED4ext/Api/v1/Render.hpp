#pragma once

namespace RED4ext
{
namespace GpuApi
{
struct SSwapChainData;
struct SDeviceData;
enum class EHdrMode : uint8_t;
} // namespace GpuApi

namespace v1
{
struct Render
{
    /**
     * @brief The function that is called before initialization of the given device data.
     *
     * @param[in] aDeviceData Active device data that will get initialized.
     *
     * @return True when there is no longer a need for an active monitoring of this event, false otherwise.
     * @note This function can get called multiple times in conjuction with shutdown. You must hook them both when you
     * plan to do anything on the GPU with the game if you want a stable hook, otherwise you may be leaking resources!
     */
    bool (*OnBeforeInitialization)(GpuApi::SDeviceData& aDeviceData);

    /**
     * @brief The function that is called after initialization of the given device data.
     *
     * @param[in] aDeviceData Active device data that was initialized.
     *
     * @return True when there is no longer a need for an active monitoring of this event, false otherwise.
     * @note This function can get called multiple times in conjuction with shutdown. You must hook them both when you
     * plan to do anything on the GPU with the game if you want a stable hook, otherwise you may be leaking resources!
     */
    bool (*OnAfterInitialization)(GpuApi::SDeviceData& aDeviceData);

    /**
     * @brief The function that is called before shutdown of the given device data.
     *
     * @param[in] aDeviceData Active device data that is going to be deinitialized.
     *
     * @return True when there is no longer a need for an active monitoring of this event, false otherwise.
     * @note This function can get called multiple times in conjuction with initialize. You must hook them both when you
     * plan to do anything on the GPU with the game if you want a stable hook, otherwise you may be leaking resources!
     */
    bool (*OnBeforeShutdown)(GpuApi::SDeviceData& aDeviceData);

    /**
     * @brief The function that is called after shutdown of the given device data.
     *
     * @param[in] aDeviceData Active device data that was deinitialized.
     *
     * @return True when there is no longer a need for an active monitoring of this event, false otherwise.
     * @note This function can get called multiple times in conjuction with initialize. You must hook them both when you
     * plan to do anything on the GPU with the game if you want a stable hook, otherwise you may be leaking resources!
     */
    bool (*OnAfterShutdown)(GpuApi::SDeviceData& aDeviceData);

    /**
     * @brief The function that is called when the buffers inside a swapchain are about to be resized, before original
     * function call.
     *
     * @param[in] aRenderWidth Render width that will be used to resize the buffers.
     * @param[in] aRenderHeight Render height that will be used to resize the buffers.
     * @param[in] aMonitorIndex Index to a structure with monitors to an active monitor that will be referenced during
     * the resize event.
     * @param[in] aHdrMode HDR mode that will be made active during the resize event.
     * @param[in] aSwapChainData Active swapchain that will be resized.
     *
     * @return True when there is no longer a need for an active monitoring of this event, false otherwise.
     * @note Some resources should be freed before resize happens, like anything borrowed from the game, while other
     * resources like custom textures or models should be freed after resize when it is guaranteed they are not actively
     * being used. Failing to do so may leak resources or cause premature removal of memory which is actively in use by
     * the GPU!
     */
    bool (*OnBeforeResizeBuffers)(uint32_t aRenderWidth, uint32_t aRenderHeight, int32_t aMonitorIndex,
                                  RED4ext::GpuApi::EHdrMode aHdrMode, GpuApi::SSwapChainData& aSwapChainData);

    /**
     * @brief The function that is called when the buffers inside a swapchain need to be resized, after original
     * function call.
     *
     * @param[in] aRenderWidth Render width that was used to resize the buffers.
     * @param[in] aRenderHeight Render height that was used to resize the buffers.
     * @param[in] aMonitorIndex Index to a structure with monitors to an active monitor referenced during the resize
     * event.
     * @param[in] aHdrMode HDR mode that was active during the resize event.
     * @param[in] aSwapChainData Active swapchain that was resized.
     *
     * @return True when there is no longer a need for an active monitoring of this event, false otherwise.
     * @note Some resources should be freed before resize happens, like anything borrowed from the game, while other
     * resources like custom textures or models should be freed after resize when it is guaranteed they are not actively
     * being used. Failing to do so may leak resources or cause premature removal of memory which is actively in use by
     * the GPU!
     */
    bool (*OnAfterResizeBuffers)(uint32_t aRenderWidth, uint32_t aRenderHeight, int32_t aMonitorIndex,
                                 RED4ext::GpuApi::EHdrMode aHdrMode, GpuApi::SSwapChainData& aSwapChainData);

    /**
     * @brief The function that is called when the latest frame is ready to be presented to the GPU, before original
     * function call.
     *
     * @param[in] aSwapChainData Active swapchain that is about to present the next frame.
     *
     * @return True when there is no longer a need for an active monitoring of this event, false otherwise.
     * @note There are multiple frames simultaneously in flight, including the one getting presented! Resources may
     * still be in use even after present is finished, use appropriate hooks and helper functions to swap resources
     * safely.
     */
    bool (*OnBeforePresent)(GpuApi::SSwapChainData& aSwapChainData);

    /**
     * @brief The function that is called when the latest frame was presented to the GPU, after original function call.
     *
     * @param[in] aSwapChainData Active swapchain that finished presenting.
     *
     * @return True when there is no longer a need for an active monitoring of this event, false otherwise.
     * @note There are multiple frames simultaneously in flight, including the one getting presented! Resources may
     * still be in use even after present is finished, use appropriate hooks and helper functions to swap resources
     * safely.
     */
    bool (*OnAfterPresent)(GpuApi::SSwapChainData& aSwapChainData);
};
} // namespace v1
} // namespace RED4ext
