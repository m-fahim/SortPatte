#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include "SortContext.h"
#include "ConSubjectChart.h"
#include "ConObserverChartSec.h"
#include "VisualComponent.h"
#include "Chart.h"
#include "LabelDecorator.h"
#include "BorderDecorator.h"

namespace ass3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using std::cout; 
	using std::endl;

	/// <summary>
	/// Summary for Form1
	/// </summary>

	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox0;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox4;


	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox5;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox6;


	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;


	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox9;

	private: System::Windows::Forms::Label^  label10;

	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Series^ ser;
	private: bool checkRes;
	private: static int size = 10;
	private: int i;
	private: int* inputList;



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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea3 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			ser = series3;
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox0 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"N1";
			this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
			// 
			// textBox0
			// 
			this->textBox0->Location = System::Drawing::Point(38, 12);
			this->textBox0->MaxLength = 2;
			this->textBox0->Name = L"textBox0";
			this->textBox0->Size = System::Drawing::Size(45, 22);
			this->textBox0->TabIndex = 1;
			this->textBox0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox0->TextChanged += gcnew System::EventHandler(this, &Form1::textBox0_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Highlight;
			this->button1->Location = System::Drawing::Point(913, 85);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 28);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Update";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(268, 12);
			this->textBox1->MaxLength = 2;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(45, 22);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(236, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"N2";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(507, 10);
			this->textBox2->MaxLength = 2;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(45, 22);
			this->textBox2->TabIndex = 7;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form1::textBox2_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(475, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(26, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"N3";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(728, 12);
			this->textBox3->MaxLength = 2;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(45, 22);
			this->textBox3->TabIndex = 9;
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form1::textBox3_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(696, 15);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"N4";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(941, 12);
			this->textBox4->MaxLength = 2;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(45, 22);
			this->textBox4->TabIndex = 11;
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form1::textBox4_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(909, 15);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(26, 17);
			this->label6->TabIndex = 10;
			this->label6->Text = L"N5";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(38, 46);
			this->textBox5->MaxLength = 2;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(45, 22);
			this->textBox5->TabIndex = 21;
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form1::textBox5_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(903, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 17);
			this->label2->TabIndex = 20;
			this->label2->Text = L"N10";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click_1);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(268, 46);
			this->textBox6->MaxLength = 2;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(45, 22);
			this->textBox6->TabIndex = 19;
			this->textBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form1::textBox6_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(697, 49);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 17);
			this->label7->TabIndex = 18;
			this->label7->Text = L"N9";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(508, 44);
			this->textBox7->MaxLength = 2;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(45, 22);
			this->textBox7->TabIndex = 17;
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form1::textBox7_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(476, 47);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 17);
			this->label8->TabIndex = 16;
			this->label8->Text = L"N8";
			this->label8->Click += gcnew System::EventHandler(this, &Form1::label8_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(729, 46);
			this->textBox8->MaxLength = 2;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(45, 22);
			this->textBox8->TabIndex = 15;
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form1::textBox8_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(237, 49);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(26, 17);
			this->label9->TabIndex = 14;
			this->label9->Text = L"N7";
			this->label9->Click += gcnew System::EventHandler(this, &Form1::label9_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(941, 46);
			this->textBox9->MaxLength = 2;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(45, 22);
			this->textBox9->TabIndex = 13;
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &Form1::textBox9_TextChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(7, 49);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 17);
			this->label10->TabIndex = 12;
			this->label10->Text = L"N6";
			this->label10->Click += gcnew System::EventHandler(this, &Form1::label10_Click);
			// 
			// chart2
			// 
			this->chart2->BorderlineColor = System::Drawing::Color::Black;
			this->chart2->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			chartArea1->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart2->Legends->Add(legend1);
			this->chart2->Location = System::Drawing::Point(507, 119);
			this->chart2->Name = L"chart2";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::StackedBar;
			series1->Legend = L"Legend1";
			series1->Name = L"Number";
			this->chart2->Series->Add(series1);
			this->chart2->Size = System::Drawing::Size(482, 217);
			this->chart2->TabIndex = 23;
			this->chart2->Text = L"chart2";
			// 
			// chart1
			// 
			this->chart1->BorderlineColor = System::Drawing::Color::Black;
			this->chart1->BorderlineDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			chartArea2->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart1->Legends->Add(legend2);
			this->chart1->Location = System::Drawing::Point(12, 119);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Number";
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(482, 217);
			this->chart1->TabIndex = 24;
			this->chart1->Text = L"chart1";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Enabled = false;
			this->radioButton1->Location = System::Drawing::Point(71, 358);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(47, 21);
			this->radioButton1->TabIndex = 25;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"BS";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Enabled = false;
			this->radioButton2->Location = System::Drawing::Point(137, 358);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(41, 21);
			this->radioButton2->TabIndex = 26;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"IS";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Highlight;
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(72, 395);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 30);
			this->button2->TabIndex = 27;
			this->button2->Text = L"Sort";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(97, 447);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(81, 21);
			this->checkBox1->TabIndex = 28;
			this->checkBox1->Text = L"Boarder";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Enabled = false;
			this->checkBox2->Location = System::Drawing::Point(97, 474);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(72, 21);
			this->checkBox2->TabIndex = 29;
			this->checkBox2->Text = L"Labels";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// chart3
			// 
			this->chart3->BorderlineColor = System::Drawing::Color::Black;
			chartArea3->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea3);
			legend3->Name = L"Legend1";
			this->chart3->Legends->Add(legend3);
			this->chart3->Location = System::Drawing::Point(302, 353);
			this->chart3->Name = L"chart3";
			this->chart3->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::Berry;
			series3->ChartArea = L"ChartArea1";
			series3->Legend = L"Legend1";
			series3->Name = L"Number";
			this->chart3->Series->Add(series3);
			this->chart3->Size = System::Drawing::Size(494, 245);
			this->chart3->TabIndex = 30;
			this->chart3->Text = L"chart3";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1001, 619);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox0);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Opacity = 0.99;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Design Pattern - ASS3";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

			  checkRes	= checkInput(textBox1->Text);
			  if(checkRes == true){
				  textBox1->Text = "";
			  }
			 }
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				//label2->Text = "yes";	
				 int inputList1[10];
				 System::String ^ string1;
				 
				for (i = 0 ; i < size ; i++){

					string1 = "textbox"+i;
					//cout >> "String is  : "   >> endl ;
					//textBox11->AppendText(string1);
					Control^ ctrlPtr = FindControl(string1);
					if(ctrlPtr != nullptr)
					{

						int value;
						int % aout = value;
						Int32::TryParse(ctrlPtr->Text,value);

						inputList1[i] = value;
						//textBox11->AppendText(inputList1[i].ToString());
					}
				}

				ConSubjectChart nChart;
				ConObserverChartSec nCSec1("chart1");
				ConObserverChartSec nCSec2("chart2");
				nChart.Attach(&nCSec1);
				nChart.Attach(&nCSec2);
				nChart.ChangeValues(inputList1);
				std::vector<class ConObserverChartSec*> sList;
				sList= nChart.getList();

				for(vector<ConObserverChartSec*>::const_iterator iter = sList.begin(); iter != sList.end(); ++iter)
				{
					if(*iter != 0)
					{
						if((*iter)->getName() == "chart2"){
							for (i = 0 ; i < size ; i++){
								int *a = (*iter)->getData();
								int ne = a[i];

								//textBox11->AppendText(ne.ToString());
								chart2->Series["Number"]->Points->AddXY("N"+(i+1),ne);
							}
						}else if((*iter)->getName() == "chart1"){
							for (i = 0 ; i < size ; i++){
								int *a = (*iter)->getData();
								int ne = a[i];

								//textBox11->AppendText(ne.ToString());
								chart1->Series["Number"]->Points->AddXY("N"+(i+1),ne);
							}
						}
					}
				}
					
					this->radioButton1->Enabled = true;
					this->radioButton2->Enabled = true;
					this->button2->Enabled = true;
					//TextBox s = (TextBox)(form->components[string1]);
					//inputList[i] = 'label'+'2';
			
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void label2_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 checkRes	= checkInput(textBox7->Text);

				  if(checkRes == true){
					  textBox7->Text = "";
				  }
			 }
	private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 checkRes	= checkInput(textBox8->Text);

				  if(checkRes == true){
					  textBox8->Text = "";
				  }
			 }
	private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 checkRes	= checkInput(textBox9->Text);

				  if(checkRes == true){
					  textBox9->Text = "";
				  }
			 }
	private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
				 checkRes	= checkInput(textBox9->Text);

				 if(checkRes == true){
					 textBox9->Text = "";
				 }
			 }

	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 checkRes	= checkInput(textBox6->Text);

				  if(checkRes == true){
					  textBox6->Text = "";
				  }
			 }

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 int inputList1[10];

				if(radioButton1->Checked == true){
				   //textBox6->Text = "1";
					SortContext  obj;
					obj.reqBS();

					//int* inputList = new int[size];
					System::String ^ string1;
					int value;
					int % aout = value;

				/////////
				for (i = 0 ; i < size ; i++){

					string1 = "textbox"+i;
					//cout >> "String is  : "   >> endl ;
					//textBox11->AppendText(string1);
					Control^ ctrlPtr = FindControl(string1);

					if(ctrlPtr != nullptr)
					{
						Int32::TryParse(ctrlPtr->Text,value);

						inputList1[i] = value;
						//textBox11->AppendText(inputList1[i].ToString());
					}
				}

				//textBox11->AppendText("::");
				///////

				int i;
				int *a	= obj.readVector( inputList1, size );

				for (i = 0 ; i < size ; i++){
					int ne = a[i];
					/*std::stringstream ss;
					std::string s;
					ss << ne;
					s = ss.str();*/
					//textBox11->AppendText(ne.ToString());
					chart3->Series["Number"]->Points->AddXY(""+i,ne);
				}
					//textBox11->AppendText("::");

				}else if(radioButton2->Checked == true){

					//textBox6->Text = "2";
					SortContext  obj;
					obj.reqIS();

					//int* inputList = new int[size];
					 System::String ^ string1;
					 int value;
					 int % aout = value;

					/////////
					for (i = 0 ; i < size ; i++){
						string1 = "textbox"+i;
						//cout >> "String is  : "   >> endl ;
						//textBox11->AppendText(string1);
						Control^ ctrlPtr = FindControl(string1);
						if(ctrlPtr != nullptr)
						{
							Int32::TryParse(ctrlPtr->Text,value);

							inputList1[i] = value;
							//textBox11->AppendText(inputList1[i].ToString());
						}
					}//textBox11->AppendText("::");
					///////

				int i;
				int *a	= obj.readVector( inputList1, size );
				for (i = 0 ; i < size ; i++){
					int ne = a[i];
					/*std::stringstream ss;
					std::string s;
					ss << ne;
					s = ss.str();*/

					//textBox11->AppendText(ne.ToString());
					chart3->Series["Number"]->Points->AddXY(""+i,ne);
				}
				//textBox11->AppendText("::");
			}

			this->checkBox1->Enabled = true;
			this->checkBox2->Enabled = true;
}

private: bool checkInput(System::String^ textValue) {
				 int value;
				 int % aout = value;
				 Int32::TryParse(textValue,value);
				 //textBox11->AppendText(""+value);
				 if(System::Text::RegularExpressions::Regex::IsMatch(textValue, "^[-0-9]*$") == true){
					 if(value < 0 || value > 25 ){
							MessageBox::Show("Each Input Should in between 0-25","Input Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
							return true;
						}
					 else{
							return false;
					 }
				 }else{
					 MessageBox::Show("Each Input Should be a Number in between 0-25","Input Type Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					 return true;
				 }
			 }
private: Control^ FindControl(String^ strControlName){
            if (strControlName->Length == 0 || this->Controls->Find(strControlName, true)->Length == 0)
                return nullptr;

            return this->Controls->Find(strControlName, true)[0];
        }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 checkRes	= checkInput(textBox2->Text);
			  
			 if(checkRes == true){
				  textBox2->Text = "";
			  }
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 checkRes	= checkInput(textBox3->Text);
			  
			 if(checkRes == true){
				  textBox3->Text = "";
			  }
		 }
private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 checkRes	= checkInput(textBox4->Text);
			  
			 if(checkRes == true){
				  textBox4->Text = "";
			  }
		 }
private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 checkRes	= checkInput(textBox5->Text);
			  
			 if(checkRes == true){
				  textBox5->Text = "";
			  }
		 }
private: System::Void textBox0_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 checkRes	= checkInput(textBox0->Text);
			 
			 if(checkRes == true){
				 textBox0->Text = "";
			 }
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 VisualComponent^ vc = gcnew BorderDecorator(gcnew Chart(chart3),chart3);
			 if(checkBox1->Checked == true){
				 vc->draw();
			 }else if (checkBox1->Checked == false){
				 vc->drop();
			 }
		 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 VisualComponent^ vc2 = gcnew LabelDecorator(gcnew Chart(ser),ser);
			 if(checkBox2->Checked == true){
				vc2->draw();
			 }else if (checkBox2->Checked == false){
				vc2->drop();
			 }
		 }
};
}

