#pragma once
#include <math.h>
#include <vector>
int d = 0;
using namespace std;
namespace Project {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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
	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;




	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox7;






	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ n;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ u;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ z;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ local_error;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ h;

	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;

	private: ZedGraph::ZedGraphControl^ zedGraphControl2;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: ZedGraph::ZedGraphControl^ zedGraphControl3;
















	protected:

	private: System::ComponentModel::IContainer^ components;
	private:

		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
	/// <summary>
	/// Требуемый метод для поддержки конструктора — не изменяйте 
	/// содержимое этого метода с помощью редактора кода.
	/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->n = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->u = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->z = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->local_error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(0, 0);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(503, 369);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(154, 425);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(66, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"0,1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 425);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Начальный шаг";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Silver;
			this->button1->Location = System::Drawing::Point(16, 504);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(204, 38);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Старт";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->n, this->x,
					this->u, this->z, this->local_error, this->h
			});
			this->dataGridView1->Location = System::Drawing::Point(525, 33);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(566, 442);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// n
			// 
			this->n->HeaderText = L"n (номер шага)";
			this->n->Name = L"n";
			// 
			// x
			// 
			this->x->HeaderText = L"x (время) - текущая точка";
			this->x->Name = L"x";
			// 
			// u
			// 
			this->u->HeaderText = L"u (угол) - численное решение";
			this->u->Name = L"u";
			// 
			// z
			// 
			this->z->HeaderText = L"u\' (скорость) - численное решение";
			this->z->Name = L"z";
			// 
			// local_error
			// 
			this->local_error->HeaderText = L"Оценка нормы локальной погрешности";
			this->local_error->Name = L"local_error";
			// 
			// h
			// 
			this->h->HeaderText = L"h (шаг)";
			this->h->Name = L"h";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(251, 425);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 26);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Начальный \r\nугол - u0\r\n";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(324, 425);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(53, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"0,31415926535";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(335, 462);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(42, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(251, 462);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(77, 26);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Начальная \r\nскорость - u0\'";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(154, 462);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(66, 20);
			this->textBox4->TabIndex = 9;
			this->textBox4->Text = L"1e-5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 462);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(135, 26);
			this->label4->TabIndex = 10;
			this->label4->Text = L"eps - параметр контроля \r\nлокальной погрешности";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(335, 501);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(42, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"0,1";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(251, 504);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(58, 26);
			this->label5->TabIndex = 12;
			this->label5->Text = L" L - длина \r\nмаятника\r\n";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::Label5_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(1097, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(353, 287);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1097, 360);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(353, 115);
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(393, 428);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(31, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"x min\r\n";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(444, 425);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(71, 20);
			this->textBox6->TabIndex = 17;
			this->textBox6->Text = L"0";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox6_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(393, 465);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"x max";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(444, 462);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(71, 20);
			this->textBox7->TabIndex = 19;
			this->textBox7->Text = L"5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(537, 490);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(461, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"Оценка нормы ЛП  вычисляется: ||S||*2^p, где p - порядок метода, ||S|| - евклидов"
				L"а норма ";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(393, 504);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 39);
			this->label9->TabIndex = 21;
			this->label9->Text = L"g - ускорение\r\nсвободного \r\nпадения\r\n";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(470, 501);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(45, 20);
			this->textBox8->TabIndex = 22;
			this->textBox8->Text = L"9,8";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(507, 391);
			this->tabControl1->TabIndex = 24;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::TabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->zedGraphControl1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(499, 365);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"График зависимости u от x";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->zedGraphControl3);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(499, 365);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"График зависимости u\' от x";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(0, -1);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(503, 369);
			this->zedGraphControl2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->zedGraphControl2);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(499, 365);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"График зависимости u\' от u";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(0, 0);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(503, 370);
			this->zedGraphControl3->TabIndex = 0;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Location = System::Drawing::Point(444, 396);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(71, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Очистить график";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1460, 551);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Name = L"MyForm";
			this->Text = L"11 задача, Сермяжко";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private:

		double f_1(double un, double L)
		{
			double g = Convert::ToDouble(textBox8->Text);; // заменить на текстбокс
			return -(g / L) * sin(un); //z'

		}
		vector<double> rungeKutta(double u0, double z0, double h, double L)
		{
			double coeff[4][2]; // 0 for q/z, 1 for k/u
			vector<double> res(2);
			coeff[0][0] = f_1(u0, L); // q0
			coeff[0][1] = z0; //k0
			coeff[1][0] = f_1(u0 + z0 * h * 0.5, L);//q1
			coeff[1][1] = z0 + coeff[0][0] * h * 0.5;//k1
			coeff[2][0] = f_1(u0 + coeff[1][1] * h * 0.5, L);//q2
			coeff[2][1] = z0 + coeff[1][0] * h * 0.5; // k2
			coeff[3][0] = f_1(u0 + coeff[2][1] * h, L);//q3
			coeff[3][1] = z0 + coeff[2][0] * h;//k3
			res[0] = z0 + h / 6 * (coeff[0][0] + 2 * coeff[1][0] + 2 * coeff[2][0] + coeff[3][0]);
			res[1] = u0 + h / 6 * (coeff[0][1] + 2 * coeff[1][1] + 2 * coeff[2][1] + coeff[3][1]);
			return res;
		}
		double errorControl(double& u0, double& z0, double h, double eps, double& locErr, double L)
		{
			double z, u, z_, u_, S1, S2, S;
			vector<double> rk1, rk2;
			rk1 = rungeKutta(u0, z0, h, L);
			z = rk1[0];
			u = rk1[1];
			z_ = z0;
			u_ = u0;
			for (int i = 0; i < 2; i++)
			{
				rk2 = rungeKutta(u_, z_, h * 0.5, L);
				z_ = rk2[0];
				u_ = rk2[1];
			}

			S1 = abs(z_ - z);
			S2 = abs(u_ - u);

			S = sqrt(S1 * S1 + S2 * S2) / 15;
			locErr = S * 16;
			if (S > eps)
			{
				return h * 0.5;
			} // принимаем точку 
			else
			{
				u0 = u;
				z0 = z;
				if (S < (eps / 32))
				{
					return 2 * h;
				}
				return h;
			}
		}
	private: System::Void button1_Click(System::Object ^ sender, System::EventArgs ^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		GraphPane^ panel3 = zedGraphControl3->GraphPane;
		// Создадим список точек
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f3_list = gcnew ZedGraph::PointPairList();
		// Интервал, где есть данные
		double xmin = Convert::ToDouble(textBox6->Text);
		double xmax = Convert::ToDouble(textBox7->Text);
		// double xmin = 0;
		// double xmax = 10;
		double h = Convert::ToDouble(textBox1->Text);
		// double h = 0.1;
		double eps = Convert::ToDouble(textBox4->Text);
		double coefL = Convert::ToDouble(textBox5->Text);
		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;
		panel->Title->Text = "График зависимости угла кругового маятника от времени";

		panel2->Title->Text = "График зависимости скорости кругового маятника от угла";

		panel3->Title->Text = "График зависимости скорости кругового маятника от времени";
		//  panel->Title->FontSpec->Fill->Brush = gcnew SolidBrush(Color);
		 // panel->Title->FontSpec->Fill->IsVisible = true;

		panel->XAxis->Title->Text = "х - время";
		panel->YAxis->Title->Text = "u - угол";
		panel2->XAxis->Title->Text = "u - угол";
		panel2->YAxis->Title->Text = "u' - скорость";

		panel3->XAxis->Title->Text = "х - время";
		panel3->YAxis->Title->Text = "u' - скорость";
		/*
			double ymin_limit = -1.0;
			double ymax_limit = 100.0;
		*/
		// Список точек

		int i = 1;
		double errorLoc;
		double  z0, u0, hControl; // z0 и u0 добавить 
		dataGridView1->Rows->Clear();
		u0 = Convert::ToDouble(textBox2->Text);
		z0 = Convert::ToDouble(textBox3->Text);
		double x = xmin;
		f1_list->Add(x, u0);
		f2_list->Add(u0, z0);

		f3_list->Add(x, z0);
		dataGridView1->Rows->Add();

		dataGridView1->Rows[0]->Cells[0]->Value = i - 1;
		dataGridView1->Rows[0]->Cells[1]->Value = x;
		dataGridView1->Rows[0]->Cells[2]->Value = u0;
		dataGridView1->Rows[0]->Cells[3]->Value = z0;
		for (; x < xmax; )
		{
			// Рунге-Кутта
			hControl = errorControl(u0, z0, h, eps, errorLoc, coefL);

			if (h <= hControl)
			{//Добавление на график
				x = x + h;
				x = floor(x * 10000000000 + 0.5) / 10000000000;
				f1_list->Add(x, u0);
				f2_list->Add(u0, z0);
				f3_list->Add(x, z0);
				//Печать в таблицу
				dataGridView1->Rows->Add();

				dataGridView1->Rows[i]->Cells[0]->Value = i;
				dataGridView1->Rows[i]->Cells[1]->Value = x;
				dataGridView1->Rows[i]->Cells[2]->Value = u0;
				dataGridView1->Rows[i]->Cells[3]->Value = z0;
				dataGridView1->Rows[i]->Cells[4]->Value = errorLoc;
				dataGridView1->Rows[i]->Cells[5]->Value = h;
				i++;
			}
			h = hControl;
			if (h == 0)
				break;
		}
		Color color;
		switch (d%5)
		{
		case 0:
			color = Color::Red;
			break;
		case 1:
			color = Color::Blue;
			break;
		case 2:
			color = Color::YellowGreen;
			break;
		case 3:
			color = Color::Black;
			break;
		case 4:
			color = Color::MediumPurple;
			break;
		}
		d++;
		LineItem Curve1 = panel->AddCurve("u(x)", f1_list, color, SymbolType::None);
		LineItem Curve2 = panel2->AddCurve("u'(u)", f2_list, color, SymbolType::None);
		LineItem Curve3 = panel3->AddCurve("u'(x)", f3_list, color, SymbolType::None);
		Curve1.Line->Width = 4.0f;
		// Устанавливаем интересующий нас интервал по оси X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
		/*
			// Устанавливаем интересующий нас интервал по оси Y
			panel->YAxis->Scale->Min = ymin_limit;
			panel->YAxis->Scale->Max = ymax_limit;
		*/
		// Вызываем метод AxisChange (), чтобы обновить данные об осях. 
		// В противном случае на рисунке будет показана только часть графика, 
		// которая умещается в интервалы по осям, установленные по умолчанию
		zedGraphControl1->AxisChange();
		zedGraphControl2->AxisChange();
		zedGraphControl3->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
		zedGraphControl2->Invalidate();
		zedGraphControl3->Invalidate();
	}
	private: System::Void label1_Click(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void textBox2_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void zedGraphControl1_Load(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void label2_Click(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object ^ sender, System::Windows::Forms::DataGridViewCellEventArgs ^ e) {
	}
	private: System::Void TextBox6_TextChanged(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void Label5_Click(System::Object ^ sender, System::EventArgs ^ e) {
	}
	private: System::Void Button2_Click(System::Object ^ sender, System::EventArgs ^ e) {
 	    GraphPane^ panel = zedGraphControl1->GraphPane;
		GraphPane^ panel2 = zedGraphControl2->GraphPane;
		GraphPane^ panel3 = zedGraphControl3->GraphPane;
		panel->CurveList->Clear();
		panel2->CurveList->Clear();
		panel3->CurveList->Clear();
		dataGridView1->Rows->Clear();
		zedGraphControl1->Invalidate();
		zedGraphControl2->Invalidate();
		zedGraphControl3->Invalidate();
		d = 0;
	}

private: System::Void TabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
