#include <winrt/windows.ui.xaml.h>
#include "../Shared/Shared.h"
#include <Windows.h>

int __cdecl main(::Platform::Array<::Platform::String^>^ args)
{
   return RunTests([](const char* message, Babylon::Polyfills::Console::LogLevel logLevel) {
       OutputDebugStringA(message);
   });
}