#pragma once
#include "Filters.h"
#include "InvertFilter.h"
#include "GrayScaleFilter.h"
#include"LinearCorrectionFilter.h"
#include "BrightnessFilter.h"
#include"MaximumFilter.h"
#include"GlassFilter.h"
#include"TransferFilter.h"
#include"BorderSelectionFilter.h"
#include"MedianFilter.h"
#include"SepiaFilter.h"
#include"SobelFilter.h"
#include"PerfectReflectorFilter.h"
#include"GaussianFilter.h"
#include"GrayWorldFilter.h"
#include"SharpnessFilter.h"
#include"BlurFilter.h"
#include<Windows.h>
#include"MyForm1.h"

namespace ImageProcessing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Filters_BPP;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		int size_mask;
		float** mask_update;

	public:

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dilationToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ erosionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ closingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ topHatToolStripMenuItem;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ grayScaleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������������ToolStripMenuItem;
	private: System::Windows::Forms::TabControl^ tabControl1;


	public:


		   Bitmap^ image;
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ProgressBar^ progressBar1;






































	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dilationToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->erosionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->topHatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->grayScaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2->SuspendLayout();
			this->menuStrip2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->tabPage1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(11, 518);
			this->progressBar1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(787, 18);
			this->progressBar1->TabIndex = 2;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox2);
			this->tabPage2->Controls->Add(this->menuStrip2);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage2->Size = System::Drawing::Size(782, 475);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"����������";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// menuStrip2
			// 
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem1,
					this->��������ToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(3, 2);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip2->Size = System::Drawing::Size(776, 28);
			this->menuStrip2->TabIndex = 0;
			this->menuStrip2->Text = L"menuStrip2";
			// 
			// ����ToolStripMenuItem1
			// 
			this->����ToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�������ToolStripMenuItem1 });
			this->����ToolStripMenuItem1->Name = L"����ToolStripMenuItem1";
			this->����ToolStripMenuItem1->Size = System::Drawing::Size(59, 24);
			this->����ToolStripMenuItem1->Text = L"����";
			// 
			// �������ToolStripMenuItem1
			// 
			this->�������ToolStripMenuItem1->Name = L"�������ToolStripMenuItem1";
			this->�������ToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->�������ToolStripMenuItem1->Text = L"�������";
			this->�������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem1_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->dilationToolStripMenuItem,
					this->erosionToolStripMenuItem, this->openingToolStripMenuItem, this->closingToolStripMenuItem, this->topHatToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// dilationToolStripMenuItem
			// 
			this->dilationToolStripMenuItem->Name = L"dilationToolStripMenuItem";
			this->dilationToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->dilationToolStripMenuItem->Text = L"Dilation";
			this->dilationToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::dilationToolStripMenuItem_Click);
			// 
			// erosionToolStripMenuItem
			// 
			this->erosionToolStripMenuItem->Name = L"erosionToolStripMenuItem";
			this->erosionToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->erosionToolStripMenuItem->Text = L"Erosion";
			this->erosionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::erosionToolStripMenuItem_Click);
			// 
			// openingToolStripMenuItem
			// 
			this->openingToolStripMenuItem->Name = L"openingToolStripMenuItem";
			this->openingToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->openingToolStripMenuItem->Text = L"Opening";
			this->openingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openingToolStripMenuItem_Click);
			// 
			// closingToolStripMenuItem
			// 
			this->closingToolStripMenuItem->Name = L"closingToolStripMenuItem";
			this->closingToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->closingToolStripMenuItem->Text = L"Closing";
			this->closingToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::closingToolStripMenuItem_Click);
			// 
			// topHatToolStripMenuItem
			// 
			this->topHatToolStripMenuItem->Name = L"topHatToolStripMenuItem";
			this->topHatToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->topHatToolStripMenuItem->Text = L"Top Hat";
			this->topHatToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::topHatToolStripMenuItem_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(0, 38);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(778, 434);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->menuStrip1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabPage1->Size = System::Drawing::Size(782, 475);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"�������";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����ToolStripMenuItem,
					this->������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(3, 2);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(776, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�������ToolStripMenuItem });
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click_1);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������ToolStripMenuItem,
					this->���������ToolStripMenuItem
			});
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(131, 24);
			this->������������ToolStripMenuItem->Text = L"���� ��������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->��������ToolStripMenuItem,
					this->grayScaleToolStripMenuItem, this->�����ToolStripMenuItem, this->�������ToolStripMenuItem, this->�������������������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->������������ToolStripMenuItem, this->�������ToolStripMenuItem, this->�����������������ToolStripMenuItem,
					this->���������������ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click_1);
			// 
			// grayScaleToolStripMenuItem
			// 
			this->grayScaleToolStripMenuItem->Name = L"grayScaleToolStripMenuItem";
			this->grayScaleToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->grayScaleToolStripMenuItem->Text = L"Gray Scale";
			this->grayScaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::grayScaleToolStripMenuItem_Click_1);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click_1);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click_1);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->�������������������ToolStripMenuItem->Text = L"��������� ����������";
			this->�������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������������������ToolStripMenuItem_Click_1);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->��������ToolStripMenuItem->Text = L"����� ���";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click_1);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->������������ToolStripMenuItem->Text = L"������ ������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click_1);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click_1);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->�����������������ToolStripMenuItem->Text = L"�������� ���������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������������ToolStripMenuItem_Click_1);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(257, 26);
			this->���������������ToolStripMenuItem->Text = L"��������� ������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click_1);
			// 
			// ���������ToolStripMenuItem
			// 
			this->���������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->��������ToolStripMenuItem,
					this->������������ToolStripMenuItem, this->������������ToolStripMenuItem, this->��������ToolStripMenuItem, this->���������������ToolStripMenuItem,
					this->�����������������ToolStripMenuItem
			});
			this->���������ToolStripMenuItem->Name = L"���������ToolStripMenuItem";
			this->���������ToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->���������ToolStripMenuItem->Text = L"���������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click_1);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->������������ToolStripMenuItem->Text = L"������ ������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click_1);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->������������ToolStripMenuItem->Text = L"������ ������";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������������ToolStripMenuItem_Click_1);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click_1);
			// 
			// ���������������ToolStripMenuItem
			// 
			this->���������������ToolStripMenuItem->Name = L"���������������ToolStripMenuItem";
			this->���������������ToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->���������������ToolStripMenuItem->Text = L"��������� ������";
			this->���������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���������������ToolStripMenuItem_Click_1);
			// 
			// �����������������ToolStripMenuItem
			// 
			this->�����������������ToolStripMenuItem->Name = L"�����������������ToolStripMenuItem";
			this->�����������������ToolStripMenuItem->Size = System::Drawing::Size(240, 26);
			this->�����������������ToolStripMenuItem->Text = L"���������� �������";
			this->�����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����������������ToolStripMenuItem_Click_1);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(5, 31);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(772, 442);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(11, 10);
			this->tabControl1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(790, 504);
			this->tabControl1->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(808, 550);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->progressBar1);
			this->MainMenuStrip = this->menuStrip2;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"��������� �����������";
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
//  ������� �������
	private: System::Void �������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ dialog = (gcnew OpenFileDialog());
		dialog->Filter = "Image files|*.png;*.jpg;*.bpm|All files(*.*)|*.*";
		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			image = gcnew Bitmap(dialog->FileName);
			pictureBox1->Image = image;
			pictureBox1->Refresh();
		}
	}

//  ��������
	private: System::Void ��������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = (image->Width * image->Height);
		InvertFilter filter = InvertFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  ����� ������
	private: System::Void grayScaleToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = (image->Width * image->Height);
		GrayScaleFilter filter = GrayScaleFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;


	}

//  �����
	private: System::Void �����ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = (image->Width * image->Height);
		SepiaFilter filter = SepiaFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  �������
	private: System::Void �������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = (image->Width * image->Height);
		BrightnessFilter filter = BrightnessFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;

	}

//  ��������� ����������
	private: System::Void �������������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = (image->Width * image->Height);
		PerfectReflectorFilter filter = PerfectReflectorFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;

	}

//  ����� ���
	private: System::Void ��������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = (image->Width * image->Height);
		GrayWorldFilter filter = GrayWorldFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  �������
	private: System::Void �������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = (image->Width * image->Height + 200);
		TransferFilter filter = TransferFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;

	}

//  ������ ������
	private: System::Void ������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = (image->Width * image->Height);
		GlassFilter filter = GlassFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  �������� ���������� �����������
	private: System::Void �����������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = (image->Width * image->Height);
		LinearCorrectionFilter filter = LinearCorrectionFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  ��������� ������
	private: System::Void ���������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = image->Width * image->Height;
		MedianFilter filter = MedianFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  ��������
	private: System::Void ��������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = image->Width * image->Height;
		BlurFilter filter = BlurFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  ������ ������
	private: System::Void ������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = image->Width * image->Height;
		GaussianFilter filter = GaussianFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  ������ ������
	private: System::Void ������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = image->Width * image->Height;
		SobelFilter filter = SobelFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  ��������
	private: System::Void ��������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = image->Width * image->Height;
		SharpnessFilter filter = SharpnessFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  ��������� ������
	private: System::Void ���������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = 2 * (image->Width * image->Height);
		BorderSelectionFilter filter = BorderSelectionFilter();
		Bitmap^ resultImage = filter.processImage(image, progressBar1);
		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  ���������� �������
	private: System::Void �����������������ToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = 4 * (image->Width * image->Height);

		MedianFilter filter1 = MedianFilter();
		Bitmap^ Image1 = filter1.processImage(image, progressBar1);


		BorderSelectionFilter filter2 = BorderSelectionFilter();
		Bitmap^ Image2 = filter2.processImage(Image1, progressBar1);

		MaximumFilter filter3 = MaximumFilter();
		Bitmap^ resultImage = filter3.processImage(Image2, progressBar1);

		pictureBox1->Image = resultImage;
		pictureBox1->Refresh();
		progressBar1->Value = 0;
	}

//  ������� ����������
	private: System::Void �������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ dialog = (gcnew OpenFileDialog());
		dialog->Filter = "Image files|*.png;*.jpg;*.bpm|All files(*.*)|*.*";
		if (dialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			image = gcnew Bitmap(dialog->FileName);
			pictureBox2->Image = image;
			pictureBox2->Refresh();
		}
	}

//  ���������� - Dilation
	private: Bitmap^ dilation(Bitmap^ sourceImage, std::vector<std::vector<float>> mask) {
		Bitmap^ resultImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);
		
		int MW = mask.size();
		int MH = mask[0].size();
		int H = sourceImage->Height;
		int W = sourceImage->Width;
		
		for (int y = MH / 2; y < H - MH / 2; y++)
			for (int x = MW / 2; x < W - MW / 2; x++) {
				int max = 0;
				for (int j = -MH / 2; j <= MH / 2; j++)
					for (int i = -MW / 2; i <= MW / 2; i++) {
						if ((mask[i + MW / 2][j + MH / 2] == 1) && (((sourceImage->GetPixel(x + i, y + j)).R > max)))
							max = sourceImage->GetPixel(x + i, y + j).R;
						progressBar1->PerformStep();
					}
				resultImage->SetPixel(x, y, Color::FromArgb(255, max, max, max));
			}
		return resultImage;
	}
	private: System::Void dilationToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum =9 *( image->Width * image->Height);
		

		std::vector<std::vector<float>> mask;
		MyForm1^ f1 = gcnew MyForm1();

		if (f1->ShowDialog(this) == System::Windows::Forms::DialogResult::Yes) {
			mask_update = f1->m;
			size_mask = f1->size;

			mask.resize(size_mask);
			for (int i = 0; i < mask.size(); i++)
				mask[i].resize(size_mask);
			for (int i = 0; i < size_mask; i++) {
				for (int j = 0; j < size_mask; j++) {
					mask[i][j] = mask_update[i][j];
				}
			}
		}
		else {
			mask.resize(3);
			for (int i = 0; i < mask.size(); i++)
				mask[i].resize(3);
			mask[0][0] = 0; mask[0][1] = 1; mask[0][2] = 0;
			mask[1][0] = 1; mask[1][1] = 1; mask[1][2] = 1;
			mask[2][0] = 0; mask[2][1] = 1; mask[2][2] = 0;
		}




		Bitmap^ resultImage = dilation(image, mask);

		pictureBox2->Image = resultImage;
		pictureBox2->Refresh();
		progressBar1->Value = 0;
	
	}

//  ������� - Erosion
	private: Bitmap^ erosion(Bitmap^ sourceImage, std::vector<std::vector<float>> mask) {
		Bitmap^ resultImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);

		int MW = mask.size();
		int MH = mask[1].size();

		int H = sourceImage->Height;
		int W = sourceImage->Width;

		for (int y = MH / 2; y < H - MH / 2 ; y++) {
			for (int x = MW / 2; x < W - MW / 2 ; x++) {
				int min = 255;
				for (int j = -MH / 2; j <= MH / 2; j++) {
					for (int i = -MW / 2; i <= MW / 2; i++) {
						if ((mask[i + MW / 2][j + MH / 2] == 1) && (((sourceImage->GetPixel(x + i, y + j)).R < min)))
							min = sourceImage->GetPixel(x + i, y + j).R;
						progressBar1->PerformStep();
					}
				}
				resultImage->SetPixel(x, y, Color::FromArgb(255, min, min, min));
			}
		}
		return resultImage;
	}
	private: System::Void erosionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = 9 * (image->Width * image->Height);
		Bitmap^ resultImage = gcnew Bitmap(image->Width, image->Height);

		std::vector<std::vector<float>> mask;
		MyForm1^ f1 = gcnew MyForm1();

		if (f1->ShowDialog(this) == System::Windows::Forms::DialogResult::Yes) {
			mask_update = f1->m;
			size_mask = f1->size;

			mask.resize(size_mask);
			for (int i = 0; i < mask.size(); i++)
				mask[i].resize(size_mask);
			for (int i = 0; i < size_mask; i++) {
				for (int j = 0; j < size_mask; j++) {
					mask[i][j] = mask_update[i][j];
				}
			}
		}
		else {
			mask.resize(3);
			for (int i = 0; i < mask.size(); i++)
				mask[i].resize(3);
			mask[0][0] = 1; mask[0][1] = 1; mask[0][2] = 1;
			mask[1][0] = 1; mask[1][1] = 1; mask[1][2] = 1;
			mask[2][0] = 1; mask[2][1] = 1; mask[2][2] = 1;
		}

		resultImage = erosion(image, mask);

		pictureBox2->Image = resultImage;
		pictureBox2->Refresh();
		progressBar1->Value = 0;
	}	

//  �������� - Opining
	private: Bitmap^ opening(Bitmap^ sourceImage, const std::vector<std::vector<float>>& mask) {
		Bitmap^ InterimImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);
		//  �������
		InterimImage = erosion(sourceImage, mask);

		//  ���������� � ����������
		Bitmap^ resultImage = gcnew Bitmap(InterimImage->Width, InterimImage->Height);
		resultImage = dilation(InterimImage, mask);
		return resultImage;

	}
	private: System::Void openingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = 18 * (image->Width * image->Height);


		std::vector<std::vector<float>> mask;
		MyForm1^ f1 = gcnew MyForm1();

		if (f1->ShowDialog(this) == System::Windows::Forms::DialogResult::Yes) {
			mask_update = f1->m;
			size_mask = f1->size;

			mask.resize(size_mask);
			for (int i = 0; i < mask.size(); i++)
				mask[i].resize(size_mask);
			for (int i = 0; i < size_mask; i++) {
				for (int j = 0; j < size_mask; j++) {
					mask[i][j] = mask_update[i][j];
				}
			}
		}
		else {
			mask.resize(3);
			for (int i = 0; i < mask.size(); i++)
				mask[i].resize(3);
			mask[0][0] = 1; mask[0][1] = 1; mask[0][2] = 1;
			mask[1][0] = 1; mask[1][1] = 1; mask[1][2] = 1;
			mask[2][0] = 1; mask[2][1] = 1; mask[2][2] = 1;
		}


		Bitmap^ resultImage = opening(image, mask);


		//  �������� ���������
		pictureBox2->Image = resultImage;
		pictureBox2->Refresh();
		progressBar1->Value = 0;
	}

//  �������� - Closing
	private: Bitmap^ closing(Bitmap^ sourceImage, const std::vector<std::vector<float>>& mask) {
		Bitmap^ InterimImage = gcnew Bitmap(sourceImage->Width, sourceImage->Height);

		//  ����������
		InterimImage = dilation(sourceImage, mask);

		//  ������� � ����������
		Bitmap^ resultImage = gcnew Bitmap(InterimImage->Width, InterimImage->Height);
		resultImage = erosion(InterimImage, mask);

		return resultImage;

	}
	private: System::Void closingToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//  ��� ���������� �������� �����������, ����� ����� ��������;
		progressBar1->Step = 1;
		progressBar1->Maximum = 18 * (image->Width * image->Height);
		Bitmap^ InterimImage = gcnew Bitmap(image->Width, image->Height);

		std::vector<std::vector<float>> mask;
		MyForm1^ f1 = gcnew MyForm1();

		if (f1->ShowDialog(this) == System::Windows::Forms::DialogResult::Yes) {
			mask_update = f1->m;
			size_mask = f1->size;

			mask.resize(size_mask);
			for (int i = 0; i < mask.size(); i++)
				mask[i].resize(size_mask);
			for (int i = 0; i < size_mask; i++) {
				for (int j = 0; j < size_mask; j++) {
					mask[i][j] = mask_update[i][j];
				}
			}
		}
		else {
			mask.resize(3);
			for (int i = 0; i < mask.size(); i++)
				mask[i].resize(3);
			mask[0][0] = 0; mask[0][1] = 1; mask[0][2] = 0;
			mask[1][0] = 1; mask[1][1] = 1; mask[1][2] = 1;
			mask[2][0] = 0; mask[2][1] = 1; mask[2][2] = 0;
		}

		Bitmap^ resultImage = closing(image, mask);


		//  �������� ���������
		pictureBox2->Image = resultImage;
		pictureBox2->Refresh();
		progressBar1->Value = 0;
	}

//  Top Hat
	private: Bitmap^ TopHat(Bitmap^ sourceImage, const std::vector<std::vector<float>>& mask) {
		Bitmap^ InterimImage = closing(sourceImage, mask);

		std::vector<std::vector<float>> image_in_vector(sourceImage->Width);
		for (int i = 0; i < image_in_vector.size(); i++)
			image_in_vector[i].resize(sourceImage->Height);

		for (int i = 0; i < image_in_vector.size(); i++)
			for (int j = 0; j < image_in_vector[i].size(); j++) {
				Color col = InterimImage->GetPixel(i, j);
				if (col.R  == 0)
					image_in_vector[i][j] = 0;
				else
					image_in_vector[i][j] = 1;
			}
		Bitmap^ resultImage = erosion(sourceImage, image_in_vector);
		return resultImage;
	}
	private: System::Void topHatToolStripMenuItem_Click(System::Object ^ sender, System::EventArgs ^ e) {
		progressBar1->Step = 1;
		progressBar1->Maximum = 29 * (image->Width * image->Height);

		Bitmap^ resultImage = gcnew Bitmap(image->Width, image->Height);

		std::vector<std::vector<float>> mask;
		MyForm1^ f1 = gcnew MyForm1();

		if (f1->ShowDialog(this) == System::Windows::Forms::DialogResult::Yes) {
			mask_update = f1->m;
			size_mask = f1->size;

			mask.resize(size_mask);
			for (int i = 0; i < mask.size(); i++)
				mask[i].resize(size_mask);
			for (int i = 0; i < size_mask; i++) {
				for (int j = 0; j < size_mask; j++) {
					mask[i][j] = mask_update[i][j];
				}
			}
		}
		else {
			mask.resize(3);
			for (int i = 0; i < mask.size(); i++)
				mask[i].resize(3);
			mask[0][0] = 0; mask[0][1] = 1; mask[0][2] = 0;
			mask[1][0] = 1; mask[1][1] = 1; mask[1][2] = 1;
			mask[2][0] = 0; mask[2][1] = 1; mask[2][2] = 0;
		}

		resultImage = TopHat(image, mask);

		pictureBox2->Image = resultImage;
		pictureBox2->Refresh();
		progressBar1->Value = 0;
	}
};
}
	