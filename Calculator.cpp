#include "Calculator.h"
#include <windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	CWinFormCal::Calculator Cal;
	Application::Run(% Cal);
}

