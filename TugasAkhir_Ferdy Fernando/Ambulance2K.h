#pragma once
#include "Ambulance3.h"
namespace TugasAkhirFerdyFernando {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ambulance2K
	/// </summary>
	public ref class Ambulance2K : public System::Windows::Forms::Form
	{
	public:
		Ambulance2K(void)
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
		~Ambulance2K()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Ambulance2K::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(96, 150);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(257, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Hal yang perlu diperhatikan :";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(50, 220);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"1. Tenangi diri anda, kuasai situasinya";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(50, 255);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(313, 25);
			this->label3->TabIndex = 7;
			this->label3->Text = L"2. Hindari korban dari kerumunan terutama perokok";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(50, 292);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 25);
			this->label4->TabIndex = 8;
			this->label4->Text = L"3. Cek bagian vital korban ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(68, 317);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(302, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Cobalah cek napasnya atau denyut nadi bila memungkinkan.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(68, 397);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(328, 20);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Jika ada denyut atau napas, tepuk tubuhnya atau beri pertanyaan";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::PaleGreen;
			this->button1->Location = System::Drawing::Point(55, 345);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(92, 49);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Ada";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Gold;
			this->button2->Location = System::Drawing::Point(178, 345);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 49);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Tidak ada";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button3->Location = System::Drawing::Point(301, 345);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(92, 49);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Tidak yakin";
			this->button3->UseVisualStyleBackColor = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::PaleTurquoise;
			this->button4->Location = System::Drawing::Point(302, 427);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(92, 49);
			this->button4->TabIndex = 16;
			this->button4->Text = L"Tidak yakin";
			this->button4->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Gold;
			this->button5->Location = System::Drawing::Point(179, 427);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(92, 49);
			this->button5->TabIndex = 15;
			this->button5->Text = L"Tidak ada ";
			this->button5->UseVisualStyleBackColor = false;
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::PaleGreen;
			this->button6->Location = System::Drawing::Point(56, 427);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(92, 49);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Ada";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(50, 492);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(297, 25);
			this->label7->TabIndex = 17;
			this->label7->Text = L"4. Periksa apakah ada luka atau perdarahan berat";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(68, 517);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(294, 20);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Jika terdapat perdarahan berat, gunakan kain bersih untuk";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(68, 537);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 20);
			this->label8->TabIndex = 20;
			this->label8->Text = L"menekan luka.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(50, 569);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(341, 25);
			this->label10->TabIndex = 21;
			this->label10->Text = L"5. Pindahkan korban ke tempat aman jika memungkinkan";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(68, 594);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(208, 20);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Perhatikan apabila ada luka patah tulang";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Gill Sans MT Condensed", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(50, 631);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(286, 25);
			this->label12->TabIndex = 23;
			this->label12->Text = L"6. Deksripsikan keadaan korban serinci mungkin";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(72, 659);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(319, 314);
			this->textBox1->TabIndex = 24;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button7->Location = System::Drawing::Point(130, 1041);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(190, 72);
			this->button7->TabIndex = 25;
			this->button7->Text = L"Kumpulkan ";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Ambulance2K::button7_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(171, 47);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(85, 87);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 46;
			this->pictureBox1->TabStop = false;
			// 
			// Ambulance2K
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->AutoScrollMargin = System::Drawing::Size(0, 80);
			this->BackColor = System::Drawing::Color::Honeydew;
			this->ClientSize = System::Drawing::Size(450, 850);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Ambulance2K";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ambulance2K";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		Ambulance3^ f6 = gcnew Ambulance3();
		f6->ShowDialog();
	}
};
}
