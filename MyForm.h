#pragma once

#include "MathLibraryV2.h"
#include <stdexcept>

namespace Lab82Visual {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ harmonic_average_box_x1;
	private: System::Windows::Forms::TextBox^ harmonic_average_box_x2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ harmonic_average_box_x3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ harmonic_averege_output;
	private: System::Windows::Forms::Label^ taylor_row_output;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ taylor_row_x;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ taylor_row_n;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ polygon_area_output;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ polygon_area_n;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ polygon_area_a;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->harmonic_average_box_x1 = (gcnew System::Windows::Forms::TextBox());
			this->harmonic_average_box_x2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->harmonic_average_box_x3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->harmonic_averege_output = (gcnew System::Windows::Forms::Label());
			this->taylor_row_output = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->taylor_row_x = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->taylor_row_n = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->polygon_area_output = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->polygon_area_n = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->polygon_area_a = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(211, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Harmonic Average";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"x1 =";
			// 
			// harmonic_average_box_x1
			// 
			this->harmonic_average_box_x1->Location = System::Drawing::Point(53, 41);
			this->harmonic_average_box_x1->Name = L"harmonic_average_box_x1";
			this->harmonic_average_box_x1->Size = System::Drawing::Size(100, 22);
			this->harmonic_average_box_x1->TabIndex = 2;
			this->harmonic_average_box_x1->Text = L"1";
			// 
			// harmonic_average_box_x2
			// 
			this->harmonic_average_box_x2->Location = System::Drawing::Point(53, 69);
			this->harmonic_average_box_x2->Name = L"harmonic_average_box_x2";
			this->harmonic_average_box_x2->Size = System::Drawing::Size(100, 22);
			this->harmonic_average_box_x2->TabIndex = 4;
			this->harmonic_average_box_x2->Text = L"2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 72);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(30, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"x2 =";
			// 
			// harmonic_average_box_x3
			// 
			this->harmonic_average_box_x3->Location = System::Drawing::Point(53, 97);
			this->harmonic_average_box_x3->Name = L"harmonic_average_box_x3";
			this->harmonic_average_box_x3->Size = System::Drawing::Size(100, 22);
			this->harmonic_average_box_x3->TabIndex = 6;
			this->harmonic_average_box_x3->Text = L"3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(17, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 16);
			this->label4->TabIndex = 5;
			this->label4->Text = L"x3 =";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(17, 125);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(206, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Solve";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(17, 155);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(48, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Output:";
			// 
			// harmonic_averege_output
			// 
			this->harmonic_averege_output->AutoSize = true;
			this->harmonic_averege_output->Location = System::Drawing::Point(17, 175);
			this->harmonic_averege_output->Name = L"harmonic_averege_output";
			this->harmonic_averege_output->Size = System::Drawing::Size(182, 16);
			this->harmonic_averege_output->TabIndex = 9;
			this->harmonic_averege_output->Text = L"Enter values and press Solve";
			// 
			// taylor_row_output
			// 
			this->taylor_row_output->AutoSize = true;
			this->taylor_row_output->Location = System::Drawing::Point(234, 175);
			this->taylor_row_output->Name = L"taylor_row_output";
			this->taylor_row_output->Size = System::Drawing::Size(182, 16);
			this->taylor_row_output->TabIndex = 19;
			this->taylor_row_output->Text = L"Enter values and press Solve";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(234, 155);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(48, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Output:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(234, 125);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(206, 23);
			this->button2->TabIndex = 17;
			this->button2->Text = L"Solve";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// taylor_row_x
			// 
			this->taylor_row_x->Location = System::Drawing::Point(268, 72);
			this->taylor_row_x->Name = L"taylor_row_x";
			this->taylor_row_x->Size = System::Drawing::Size(100, 22);
			this->taylor_row_x->TabIndex = 14;
			this->taylor_row_x->Text = L"0,5";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(240, 75);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(23, 16);
			this->label9->TabIndex = 13;
			this->label9->Text = L"x =";
			// 
			// taylor_row_n
			// 
			this->taylor_row_n->Location = System::Drawing::Point(268, 44);
			this->taylor_row_n->Name = L"taylor_row_n";
			this->taylor_row_n->Size = System::Drawing::Size(100, 22);
			this->taylor_row_n->TabIndex = 12;
			this->taylor_row_n->Text = L"25";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(239, 47);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 16);
			this->label10->TabIndex = 11;
			this->label10->Text = L"n =";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(232, 9);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(136, 29);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Taylor Row";
			// 
			// polygon_area_output
			// 
			this->polygon_area_output->AutoSize = true;
			this->polygon_area_output->Location = System::Drawing::Point(450, 175);
			this->polygon_area_output->Name = L"polygon_area_output";
			this->polygon_area_output->Size = System::Drawing::Size(182, 16);
			this->polygon_area_output->TabIndex = 27;
			this->polygon_area_output->Text = L"Enter values and press Solve";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(450, 155);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(48, 16);
			this->label8->TabIndex = 26;
			this->label8->Text = L"Output:";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(450, 125);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(206, 23);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Solve";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// polygon_area_n
			// 
			this->polygon_area_n->Location = System::Drawing::Point(484, 71);
			this->polygon_area_n->Name = L"polygon_area_n";
			this->polygon_area_n->Size = System::Drawing::Size(100, 22);
			this->polygon_area_n->TabIndex = 24;
			this->polygon_area_n->Text = L"3";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(456, 74);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(24, 16);
			this->label12->TabIndex = 23;
			this->label12->Text = L"n =";
			// 
			// polygon_area_a
			// 
			this->polygon_area_a->Location = System::Drawing::Point(484, 43);
			this->polygon_area_a->Name = L"polygon_area_a";
			this->polygon_area_a->Size = System::Drawing::Size(100, 22);
			this->polygon_area_a->TabIndex = 22;
			this->polygon_area_a->Text = L"1";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(455, 46);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 16);
			this->label13->TabIndex = 21;
			this->label13->Text = L"a =";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(445, 9);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(157, 29);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Polygon Area";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1002, 259);
			this->Controls->Add(this->polygon_area_output);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->polygon_area_n);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->polygon_area_a);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->taylor_row_output);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->taylor_row_x);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->taylor_row_n);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->harmonic_averege_output);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->harmonic_average_box_x3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->harmonic_average_box_x2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->harmonic_average_box_x1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Task 8";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double x1 = System::Convert::ToDouble(harmonic_average_box_x1->Text);
		double x2 = System::Convert::ToDouble(harmonic_average_box_x2->Text);
		double x3 = System::Convert::ToDouble(harmonic_average_box_x3->Text);
		try
		{
			harmonic_averege_output->Text = System::Convert::ToString(CalcAverageHarmonic(x1, x2, x3));
		}
		catch(const std::exception& e)
		{
			harmonic_averege_output->Text = System::Convert::ToString("Attempted to divide by zero");
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double x = System::Convert::ToDouble(taylor_row_x->Text);
		double n = System::Convert::ToDouble(taylor_row_n->Text);
		try
		{
			taylor_row_output->Text = System::Convert::ToString(CalcTaylorRow(x, n));
		}
		catch (const std::exception& e)
		{
			taylor_row_output->Text = System::Convert::ToString("Doesn`t satisfy |x| < 1 or n > 0");
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double a = System::Convert::ToDouble(polygon_area_a->Text);
		double n = System::Convert::ToDouble(polygon_area_n->Text);
		try
		{
			polygon_area_output->Text = System::Convert::ToString(CalcPolygonArea(a, n));
		}
		catch (const std::exception& e)
		{
			polygon_area_output->Text = System::Convert::ToString("Doesn`t satisfy a > 0 or n > 2");
		}
	}
	};
}
