#pragma once

namespace CWinFormCal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ lbl_result;
	protected:

	private: System::Windows::Forms::Button^ btn_equal;
	private: System::Windows::Forms::Button^ btn_percent;
	private: System::Windows::Forms::Button^ btn_division;



	private: System::Windows::Forms::Button^ btn_sign;

	private: System::Windows::Forms::Button^ btn_ac;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btn38;





	private: System::Windows::Forms::Button^ btn_multiplication;
	private: System::Windows::Forms::Button^ btn9;




	private: System::Windows::Forms::Button^ btn_sum;
	private: System::Windows::Forms::Button^ btn6;


	private: System::Windows::Forms::Button^ btn5;



	private: System::Windows::Forms::Button^ btn4;


	private: System::Windows::Forms::Button^ btn0;




	private: System::Windows::Forms::Button^ btn_subtraction;
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btn3;







	private: System::Windows::Forms::Button^ btn_float;
	
	private: float first_num;
	private: char user_action;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbl_result = (gcnew System::Windows::Forms::Label());
			this->btn_equal = (gcnew System::Windows::Forms::Button());
			this->btn_percent = (gcnew System::Windows::Forms::Button());
			this->btn_division = (gcnew System::Windows::Forms::Button());
			this->btn_sign = (gcnew System::Windows::Forms::Button());
			this->btn_ac = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn38 = (gcnew System::Windows::Forms::Button());
			this->btn_multiplication = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn_sum = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btn_subtraction = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn_float = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Location = System::Drawing::Point(281, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(22, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::button1_Click);
			// 
			// lbl_result
			// 
			this->lbl_result->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_result->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbl_result->Font = (gcnew System::Drawing::Font(L"Proxy 7", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->lbl_result->Location = System::Drawing::Point(12, 73);
			this->lbl_result->Name = L"lbl_result";
			this->lbl_result->Size = System::Drawing::Size(291, 51);
			this->lbl_result->TabIndex = 1;
			this->lbl_result->Text = L"0";
			this->lbl_result->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lbl_result->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn_equal
			// 
			this->btn_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equal->Location = System::Drawing::Point(172, 146);
			this->btn_equal->Name = L"btn_equal";
			this->btn_equal->Size = System::Drawing::Size(131, 45);
			this->btn_equal->TabIndex = 2;
			this->btn_equal->Text = L"=";
			this->btn_equal->UseVisualStyleBackColor = false;
			this->btn_equal->Click += gcnew System::EventHandler(this, &Calculator::btn_equal_Click);
			// 
			// btn_percent
			// 
			this->btn_percent->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_percent->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_percent->Location = System::Drawing::Point(172, 210);
			this->btn_percent->Name = L"btn_percent";
			this->btn_percent->Size = System::Drawing::Size(55, 45);
			this->btn_percent->TabIndex = 8;
			this->btn_percent->Text = L"%";
			this->btn_percent->UseVisualStyleBackColor = false;
			this->btn_percent->Click += gcnew System::EventHandler(this, &Calculator::btn_percent_Click);
			// 
			// btn_division
			// 
			this->btn_division->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_division->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_division->Location = System::Drawing::Point(248, 210);
			this->btn_division->Name = L"btn_division";
			this->btn_division->Size = System::Drawing::Size(55, 45);
			this->btn_division->TabIndex = 9;
			this->btn_division->Text = L"/";
			this->btn_division->UseVisualStyleBackColor = false;
			this->btn_division->Click += gcnew System::EventHandler(this, &Calculator::btn_division_Click);
			// 
			// btn_sign
			// 
			this->btn_sign->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_sign->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sign->Location = System::Drawing::Point(96, 210);
			this->btn_sign->Name = L"btn_sign";
			this->btn_sign->Size = System::Drawing::Size(55, 45);
			this->btn_sign->TabIndex = 10;
			this->btn_sign->Text = L"+/-";
			this->btn_sign->UseVisualStyleBackColor = false;
			this->btn_sign->Click += gcnew System::EventHandler(this, &Calculator::btn_sign_Click);
			// 
			// btn_ac
			// 
			this->btn_ac->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_ac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_ac->Location = System::Drawing::Point(19, 210);
			this->btn_ac->Name = L"btn_ac";
			this->btn_ac->Size = System::Drawing::Size(55, 45);
			this->btn_ac->TabIndex = 11;
			this->btn_ac->Text = L"AC";
			this->btn_ac->UseVisualStyleBackColor = false;
			this->btn_ac->Click += gcnew System::EventHandler(this, &Calculator::btn_ac_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn7->Location = System::Drawing::Point(19, 273);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(55, 45);
			this->btn7->TabIndex = 12;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn38
			// 
			this->btn38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn38->Location = System::Drawing::Point(96, 273);
			this->btn38->Name = L"btn38";
			this->btn38->Size = System::Drawing::Size(55, 45);
			this->btn38->TabIndex = 13;
			this->btn38->Text = L"8";
			this->btn38->UseVisualStyleBackColor = false;
			this->btn38->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn_multiplication
			// 
			this->btn_multiplication->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_multiplication->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_multiplication->Location = System::Drawing::Point(248, 273);
			this->btn_multiplication->Name = L"btn_multiplication";
			this->btn_multiplication->Size = System::Drawing::Size(55, 45);
			this->btn_multiplication->TabIndex = 14;
			this->btn_multiplication->Text = L"x";
			this->btn_multiplication->UseVisualStyleBackColor = false;
			this->btn_multiplication->Click += gcnew System::EventHandler(this, &Calculator::btn_multiplication_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn9->Location = System::Drawing::Point(172, 273);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(55, 45);
			this->btn9->TabIndex = 15;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn_sum
			// 
			this->btn_sum->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_sum->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_sum->Location = System::Drawing::Point(248, 324);
			this->btn_sum->Name = L"btn_sum";
			this->btn_sum->Size = System::Drawing::Size(55, 45);
			this->btn_sum->TabIndex = 16;
			this->btn_sum->Text = L"+";
			this->btn_sum->UseVisualStyleBackColor = false;
			this->btn_sum->Click += gcnew System::EventHandler(this, &Calculator::btn_sum_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn6->Location = System::Drawing::Point(172, 324);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(55, 45);
			this->btn6->TabIndex = 17;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn5->Location = System::Drawing::Point(96, 324);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(55, 45);
			this->btn5->TabIndex = 18;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn4->Location = System::Drawing::Point(19, 324);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(55, 45);
			this->btn4->TabIndex = 19;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			this->btn4->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn0->Location = System::Drawing::Point(19, 426);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(208, 45);
			this->btn0->TabIndex = 21;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn_subtraction
			// 
			this->btn_subtraction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_subtraction->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_subtraction->Location = System::Drawing::Point(248, 375);
			this->btn_subtraction->Name = L"btn_subtraction";
			this->btn_subtraction->Size = System::Drawing::Size(55, 45);
			this->btn_subtraction->TabIndex = 22;
			this->btn_subtraction->Text = L"-";
			this->btn_subtraction->UseVisualStyleBackColor = false;
			this->btn_subtraction->Click += gcnew System::EventHandler(this, &Calculator::btn_subtraction_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn1->Location = System::Drawing::Point(19, 375);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(55, 45);
			this->btn1->TabIndex = 23;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn2->Location = System::Drawing::Point(96, 375);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(55, 45);
			this->btn2->TabIndex = 24;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btn3->Location = System::Drawing::Point(172, 375);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(55, 45);
			this->btn3->TabIndex = 25;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &Calculator::Btnnumber_Click);
			// 
			// btn_float
			// 
			this->btn_float->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->btn_float->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btn_float->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_float->Location = System::Drawing::Point(248, 426);
			this->btn_float->Name = L"btn_float";
			this->btn_float->Size = System::Drawing::Size(55, 45);
			this->btn_float->TabIndex = 26;
			this->btn_float->Text = L".";
			this->btn_float->UseVisualStyleBackColor = false;
			this->btn_float->Click += gcnew System::EventHandler(this, &Calculator::btn_float_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDark;
			this->ClientSize = System::Drawing::Size(315, 494);
			this->Controls->Add(this->btn_float);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn_subtraction);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn_sum);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn_multiplication);
			this->Controls->Add(this->btn38);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn_ac);
			this->Controls->Add(this->btn_sign);
			this->Controls->Add(this->btn_division);
			this->Controls->Add(this->btn_percent);
			this->Controls->Add(this->btn_equal);
			this->Controls->Add(this->lbl_result);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Calculator";
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}

		private: System::Void math_action(char action) {
			this->first_num = System::Convert::ToDouble(this->lbl_result->Text);
			this->user_action = action;
			this->lbl_result->Text = "0";
		}
#pragma endregion
	 private: System::Void Btnnumber_Click(System::Object^ sender, System::EventArgs^ e) {
		 Button^ button = safe_cast <Button^>(sender);
		 if (this->lbl_result->Text == "0")
			 this->lbl_result->Text = button->Text;
		 else
			 this->lbl_result->Text = this->lbl_result->Text + button->Text;
			   }
	private: System::Void btn_division_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
private: System::Void btn_multiplication_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
private: System::Void btn_sum_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}
private: System::Void btn_subtraction_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
private: System::Void btn_equal_Click(System::Object^ sender, System::EventArgs^ e) {
	float second = System::Convert::ToDouble(this->lbl_result->Text);
	float res;
	switch (this->user_action) {
	case '+':res = this->first_num + second; break;
	case '-':res = this->first_num - second; break;
	case '/':res = this->first_num / second; break;
	case '*':res = this->first_num * second; break;
	case '%':res = this->first_num * second / 100; break;
	}
	this->lbl_result->Text = System::Convert::ToString(res);
}
private: System::Void btn_ac_Click(System::Object^ sender, System::EventArgs^ e) {
	this->lbl_result->Text = "0";
	this->first_num = 0;
	this->user_action = ' ';
}
private: System::Void btn_sign_Click(System::Object^ sender, System::EventArgs^ e) {
	float num = System::Convert::ToDouble(this->lbl_result->Text);
	num *= -1;
	this->lbl_result->Text = System::Convert::ToString(num);
}
private: System::Void btn_percent_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('%');
}
private: System::Void btn_float_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->lbl_result->Text;
	if (!text->Contains(","))
		this->lbl_result->Text = text + ",";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
