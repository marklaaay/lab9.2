#include "MyForm.h"

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	lab92::MyForm form;
	Application::Run(% form);
}