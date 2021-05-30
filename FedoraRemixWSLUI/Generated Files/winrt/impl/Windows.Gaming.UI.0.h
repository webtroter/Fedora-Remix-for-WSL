// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210505.3

#ifndef WINRT_Windows_Gaming_UI_0_H
#define WINRT_Windows_Gaming_UI_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Windows::Gaming::UI
{
    enum class GameChatMessageOrigin : int32_t
    {
        Voice = 0,
        Text = 1,
    };
    enum class GameChatOverlayPosition : int32_t
    {
        BottomCenter = 0,
        BottomLeft = 1,
        BottomRight = 2,
        MiddleRight = 3,
        MiddleLeft = 4,
        TopCenter = 5,
        TopLeft = 6,
        TopRight = 7,
    };
    struct IGameBarStatics;
    struct IGameChatOverlay;
    struct IGameChatOverlayStatics;
    struct GameBar;
    struct GameChatOverlay;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::Gaming::UI::IGameBarStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Gaming::UI::IGameChatOverlay>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Gaming::UI::IGameChatOverlayStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::Gaming::UI::GameBar>{ using type = class_category; };
    template <> struct category<winrt::Windows::Gaming::UI::GameChatOverlay>{ using type = class_category; };
    template <> struct category<winrt::Windows::Gaming::UI::GameChatMessageOrigin>{ using type = enum_category; };
    template <> struct category<winrt::Windows::Gaming::UI::GameChatOverlayPosition>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::UI::GameBar> = L"Windows.Gaming.UI.GameBar";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::UI::GameChatOverlay> = L"Windows.Gaming.UI.GameChatOverlay";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::UI::GameChatMessageOrigin> = L"Windows.Gaming.UI.GameChatMessageOrigin";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::UI::GameChatOverlayPosition> = L"Windows.Gaming.UI.GameChatOverlayPosition";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::UI::IGameBarStatics> = L"Windows.Gaming.UI.IGameBarStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::UI::IGameChatOverlay> = L"Windows.Gaming.UI.IGameChatOverlay";
    template <> inline constexpr auto& name_v<winrt::Windows::Gaming::UI::IGameChatOverlayStatics> = L"Windows.Gaming.UI.IGameChatOverlayStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::Gaming::UI::IGameBarStatics>{ 0x1DB9A292,0xCC78,0x4173,{ 0xBE,0x45,0xB6,0x1E,0x67,0x28,0x3E,0xA7 } }; // 1DB9A292-CC78-4173-BE45-B61E67283EA7
    template <> inline constexpr guid guid_v<winrt::Windows::Gaming::UI::IGameChatOverlay>{ 0xFBC64865,0xF6FC,0x4A48,{ 0xAE,0x07,0x03,0xAC,0x6E,0xD4,0x37,0x04 } }; // FBC64865-F6FC-4A48-AE07-03AC6ED43704
    template <> inline constexpr guid guid_v<winrt::Windows::Gaming::UI::IGameChatOverlayStatics>{ 0x89ACF614,0x7867,0x49F7,{ 0x96,0x87,0x25,0xD9,0xDB,0xF4,0x44,0xD1 } }; // 89ACF614-7867-49F7-9687-25D9DBF444D1
    template <> struct default_interface<winrt::Windows::Gaming::UI::GameChatOverlay>{ using type = winrt::Windows::Gaming::UI::IGameChatOverlay; };
    template <> struct abi<winrt::Windows::Gaming::UI::IGameBarStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_VisibilityChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VisibilityChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_IsInputRedirectedChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_IsInputRedirectedChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Visible(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsInputRedirected(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Gaming::UI::IGameChatOverlay>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DesiredPosition(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredPosition(int32_t) noexcept = 0;
            virtual int32_t __stdcall AddMessage(void*, void*, int32_t) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::Gaming::UI::IGameChatOverlayStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Gaming_UI_IGameBarStatics
    {
        WINRT_IMPL_AUTO(winrt::event_token) VisibilityChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using VisibilityChanged_revoker = impl::event_revoker<winrt::Windows::Gaming::UI::IGameBarStatics, &impl::abi_t<winrt::Windows::Gaming::UI::IGameBarStatics>::remove_VisibilityChanged>;
        [[nodiscard]] VisibilityChanged_revoker VisibilityChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) VisibilityChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) IsInputRedirectedChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using IsInputRedirectedChanged_revoker = impl::event_revoker<winrt::Windows::Gaming::UI::IGameBarStatics, &impl::abi_t<winrt::Windows::Gaming::UI::IGameBarStatics>::remove_IsInputRedirectedChanged>;
        [[nodiscard]] IsInputRedirectedChanged_revoker IsInputRedirectedChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) IsInputRedirectedChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Visible() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsInputRedirected() const;
    };
    template <> struct consume<winrt::Windows::Gaming::UI::IGameBarStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_UI_IGameBarStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_UI_IGameChatOverlay
    {
        [[nodiscard]] WINRT_IMPL_AUTO(winrt::Windows::Gaming::UI::GameChatOverlayPosition) DesiredPosition() const;
        WINRT_IMPL_AUTO(void) DesiredPosition(winrt::Windows::Gaming::UI::GameChatOverlayPosition const& value) const;
        WINRT_IMPL_AUTO(void) AddMessage(param::hstring const& sender, param::hstring const& message, winrt::Windows::Gaming::UI::GameChatMessageOrigin const& origin) const;
    };
    template <> struct consume<winrt::Windows::Gaming::UI::IGameChatOverlay>
    {
        template <typename D> using type = consume_Windows_Gaming_UI_IGameChatOverlay<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_UI_IGameChatOverlayStatics
    {
        WINRT_IMPL_AUTO(winrt::Windows::Gaming::UI::GameChatOverlay) GetDefault() const;
    };
    template <> struct consume<winrt::Windows::Gaming::UI::IGameChatOverlayStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_UI_IGameChatOverlayStatics<D>;
    };
}
#endif
