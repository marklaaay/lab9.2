#include "stdafx.h"
double GetDouble(TextBox^ TB) {
	return Convert::ToDouble(TB->Text);
}
double GetInt(TextBox^ TB) {
	return Convert::ToInt32(TB->Text);
}