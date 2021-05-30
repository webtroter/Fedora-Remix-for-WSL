// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Media_Casting_2_H
#define WINRT_Windows_Media_Casting_2_H
#include "winrt/impl/Windows.Devices.Enumeration.1.h"
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Media.Casting.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::Casting
{
    struct __declspec(empty_bases) CastingConnection : winrt::Windows::Media::Casting::ICastingConnection
    {
        CastingConnection(std::nullptr_t) noexcept {}
        CastingConnection(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingConnection(ptr, take_ownership_from_abi) {}
        CastingConnection(CastingConnection const&) noexcept = default;
        CastingConnection(CastingConnection&&) noexcept = default;
        CastingConnection& operator=(CastingConnection const&) & noexcept = default;
        CastingConnection& operator=(CastingConnection&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CastingConnectionErrorOccurredEventArgs : winrt::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs
    {
        CastingConnectionErrorOccurredEventArgs(std::nullptr_t) noexcept {}
        CastingConnectionErrorOccurredEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingConnectionErrorOccurredEventArgs(ptr, take_ownership_from_abi) {}
        CastingConnectionErrorOccurredEventArgs(CastingConnectionErrorOccurredEventArgs const&) noexcept = default;
        CastingConnectionErrorOccurredEventArgs(CastingConnectionErrorOccurredEventArgs&&) noexcept = default;
        CastingConnectionErrorOccurredEventArgs& operator=(CastingConnectionErrorOccurredEventArgs const&) & noexcept = default;
        CastingConnectionErrorOccurredEventArgs& operator=(CastingConnectionErrorOccurredEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CastingDevice : winrt::Windows::Media::Casting::ICastingDevice
    {
        CastingDevice(std::nullptr_t) noexcept {}
        CastingDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingDevice(ptr, take_ownership_from_abi) {}
        CastingDevice(CastingDevice const&) noexcept = default;
        CastingDevice(CastingDevice&&) noexcept = default;
        CastingDevice& operator=(CastingDevice const&) & noexcept = default;
        CastingDevice& operator=(CastingDevice&&) & noexcept = default;
        static auto GetDeviceSelector(winrt::Windows::Media::Casting::CastingPlaybackTypes const& type);
        static auto GetDeviceSelectorFromCastingSourceAsync(winrt::Windows::Media::Casting::CastingSource const& castingSource);
        static auto FromIdAsync(param::hstring const& value);
        static auto DeviceInfoSupportsCastingAsync(winrt::Windows::Devices::Enumeration::DeviceInformation const& device);
    };
    struct __declspec(empty_bases) CastingDevicePicker : winrt::Windows::Media::Casting::ICastingDevicePicker
    {
        CastingDevicePicker(std::nullptr_t) noexcept {}
        CastingDevicePicker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingDevicePicker(ptr, take_ownership_from_abi) {}
        CastingDevicePicker();
        CastingDevicePicker(CastingDevicePicker const&) noexcept = default;
        CastingDevicePicker(CastingDevicePicker&&) noexcept = default;
        CastingDevicePicker& operator=(CastingDevicePicker const&) & noexcept = default;
        CastingDevicePicker& operator=(CastingDevicePicker&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CastingDevicePickerFilter : winrt::Windows::Media::Casting::ICastingDevicePickerFilter
    {
        CastingDevicePickerFilter(std::nullptr_t) noexcept {}
        CastingDevicePickerFilter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingDevicePickerFilter(ptr, take_ownership_from_abi) {}
        CastingDevicePickerFilter(CastingDevicePickerFilter const&) noexcept = default;
        CastingDevicePickerFilter(CastingDevicePickerFilter&&) noexcept = default;
        CastingDevicePickerFilter& operator=(CastingDevicePickerFilter const&) & noexcept = default;
        CastingDevicePickerFilter& operator=(CastingDevicePickerFilter&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CastingDeviceSelectedEventArgs : winrt::Windows::Media::Casting::ICastingDeviceSelectedEventArgs
    {
        CastingDeviceSelectedEventArgs(std::nullptr_t) noexcept {}
        CastingDeviceSelectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingDeviceSelectedEventArgs(ptr, take_ownership_from_abi) {}
        CastingDeviceSelectedEventArgs(CastingDeviceSelectedEventArgs const&) noexcept = default;
        CastingDeviceSelectedEventArgs(CastingDeviceSelectedEventArgs&&) noexcept = default;
        CastingDeviceSelectedEventArgs& operator=(CastingDeviceSelectedEventArgs const&) & noexcept = default;
        CastingDeviceSelectedEventArgs& operator=(CastingDeviceSelectedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) CastingSource : winrt::Windows::Media::Casting::ICastingSource
    {
        CastingSource(std::nullptr_t) noexcept {}
        CastingSource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Media::Casting::ICastingSource(ptr, take_ownership_from_abi) {}
        CastingSource(CastingSource const&) noexcept = default;
        CastingSource(CastingSource&&) noexcept = default;
        CastingSource& operator=(CastingSource const&) & noexcept = default;
        CastingSource& operator=(CastingSource&&) & noexcept = default;
    };
}
#endif
