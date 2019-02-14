#pragma once

#include "MainPage.g.h"

namespace winrt::winrtcppcoawaitBlankApp1::implementation
{
    struct MainPage : MainPageT<MainPage>
    {
        MainPage() = default;

        int32_t MyProperty();
        void MyProperty(int32_t value);
    };
}

namespace winrt::winrtcppcoawaitBlankApp1::factory_implementation
{
    struct MainPage : MainPageT<MainPage, implementation::MainPage>
    {
    };
}
