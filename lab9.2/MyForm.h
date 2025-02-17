#pragma once
#include "spawn.h"
//#include "../../../Program Files (x86)/Reference Assemblies/Microsoft/Framework/.NETFramework/v4.7.2/mscorlib.dll"
namespace lab92 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cmdFind;
	private: System::Windows::Forms::Button^ cmdExit;
	protected:


	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::ListBox^ lstLB;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ txtX;

	protected:


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->cmdFind = (gcnew System::Windows::Forms::Button());
			this->cmdExit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->txtX = (gcnew System::Windows::Forms::TextBox());
			this->lstLB = (gcnew System::Windows::Forms::ListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// cmdFind
			// 
			this->cmdFind->Location = System::Drawing::Point(345, 436);
			this->cmdFind->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmdFind->Name = L"cmdFind";
			this->cmdFind->Size = System::Drawing::Size(208, 81);
			this->cmdFind->TabIndex = 0;
			this->cmdFind->Text = L"Вычислить";
			this->cmdFind->UseVisualStyleBackColor = true;
			this->cmdFind->Click += gcnew System::EventHandler(this, &MyForm::cmdFind_Click);
			// 
			// cmdExit
			// 
			this->cmdExit->Location = System::Drawing::Point(558, 436);
			this->cmdExit->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cmdExit->Name = L"cmdExit";
			this->cmdExit->Size = System::Drawing::Size(208, 81);
			this->cmdExit->TabIndex = 1;
			this->cmdExit->Text = L"Завершить";
			this->cmdExit->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(-2, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(846, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Вычислите константу π с точностью до ε = 0.00001, воспользовавшись разложением в "
				L"ряд";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->txtX);
			this->panel1->Location = System::Drawing::Point(345, 165);
			this->panel1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(422, 258);
			this->panel1->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(69, 34);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(94, 20);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Число \"x\":";
			// 
			// txtX
			// 
			this->txtX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtX->Location = System::Drawing::Point(211, 32);
			this->txtX->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->txtX->Name = L"txtX";
			this->txtX->Size = System::Drawing::Size(210, 26);
			this->txtX->TabIndex = 9;
			this->txtX->TextChanged += gcnew System::EventHandler(this, &MyForm::txtX_TextChanged);
			// 
			// lstLB
			// 
			this->lstLB->AccessibleRole = System::Windows::Forms::AccessibleRole::Grip;
			this->lstLB->FormattingEnabled = true;
			this->lstLB->Location = System::Drawing::Point(9, 165);
			this->lstLB->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->lstLB->Name = L"lstLB";
			this->lstLB->ScrollAlwaysVisible = true;
			this->lstLB->Size = System::Drawing::Size(332, 355);
			this->lstLB->TabIndex = 5;
			this->lstLB->TabStop = false;
			this->lstLB->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 142);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(110, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"№ итерации";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(168, 142);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 20);
			this->label3->TabIndex = 7;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 34);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(431, 52);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(433, 47);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(148, 23);
			this->label5->TabIndex = 9;
			this->label5->Text = L"и соотношение";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(585, 34);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(148, 52);
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Arial Black", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(4, 89);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(626, 46);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Сравните результат со значением, \r\nполученным с помощью соответствующей библиотеч"
				L"ной функции.";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(774, 524);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lstLB);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->cmdExit);
			this->Controls->Add(this->cmdFind);
			this->Controls->Add(this->panel1);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void cmdFind_Click(System::Object^ sender, System::EventArgs^ e) {
	double x = GetDouble(txtX);
	lstLB->Items->Clear();
	Pos(x,lstLB);
}
private: System::Void txtX_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void txtE_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
