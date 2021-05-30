// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Management_Policies_1_H
#define WINRT_Windows_Management_Policies_1_H
#include "winrt/impl/Windows.Management.Policies.0.h"
WINRT_EXPORT namespace winrt::Windows::Management::Policies
{
    struct __declspec(empty_bases) INamedPolicyData :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<INamedPolicyData>
    {
        INamedPolicyData(std::nullptr_t = nullptr) noexcept {}
        INamedPolicyData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        INamedPolicyData(INamedPolicyData const&) noexcept = default;
        INamedPolicyData(INamedPolicyData&&) noexcept = default;
        INamedPolicyData& operator=(INamedPolicyData const&) & noexcept = default;
        INamedPolicyData& operator=(INamedPolicyData&&) & noexcept = default;
    };
    struct __declspec(empty_bases) INamedPolicyStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<INamedPolicyStatics>
    {
        INamedPolicyStatics(std::nullptr_t = nullptr) noexcept {}
        INamedPolicyStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        INamedPolicyStatics(INamedPolicyStatics const&) noexcept = default;
        INamedPolicyStatics(INamedPolicyStatics&&) noexcept = default;
        INamedPolicyStatics& operator=(INamedPolicyStatics const&) & noexcept = default;
        INamedPolicyStatics& operator=(INamedPolicyStatics&&) & noexcept = default;
    };
}
#endif
