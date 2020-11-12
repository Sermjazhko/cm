#pragma once
#include <math.h>

#include <vector>

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
  private: System::Windows::Forms::PictureBox^ pictureBox2;
  private: System::Windows::Forms::PictureBox^ pictureBox3;
  private: System::Windows::Forms::Label^ label6;
  private: System::Windows::Forms::TextBox^ textBox6;
  private: System::Windows::Forms::Label^ label7;
  private: System::Windows::Forms::TextBox^ textBox7;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ x;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ u;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ z;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ local_error;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ h;
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
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->textBox2 = (gcnew System::Windows::Forms::TextBox());
      this->textBox3 = (gcnew System::Windows::Forms::TextBox());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->textBox4 = (gcnew System::Windows::Forms::TextBox());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->textBox5 = (gcnew System::Windows::Forms::TextBox());
      this->label5 = (gcnew System::Windows::Forms::Label());
      this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
      this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
      this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
      this->label6 = (gcnew System::Windows::Forms::Label());
      this->textBox6 = (gcnew System::Windows::Forms::TextBox());
      this->label7 = (gcnew System::Windows::Forms::Label());
      this->textBox7 = (gcnew System::Windows::Forms::TextBox());
      this->x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->u = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->z = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->local_error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
      this->SuspendLayout();
      // 
      // zedGraphControl1
      // 
      this->zedGraphControl1->Location = System::Drawing::Point(12, 12);
      this->zedGraphControl1->Name = L"zedGraphControl1";
      this->zedGraphControl1->ScrollGrace = 0;
      this->zedGraphControl1->ScrollMaxX = 0;
      this->zedGraphControl1->ScrollMaxY = 0;
      this->zedGraphControl1->ScrollMaxY2 = 0;
      this->zedGraphControl1->ScrollMinX = 0;
      this->zedGraphControl1->ScrollMinY = 0;
      this->zedGraphControl1->ScrollMinY2 = 0;
      this->zedGraphControl1->Size = System::Drawing::Size(470, 366);
      this->zedGraphControl1->TabIndex = 0;
      this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(45, 398);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(58, 20);
      this->textBox1->TabIndex = 1;
      this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(12, 405);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(27, 13);
      this->label1->TabIndex = 2;
      this->label1->Text = L"Шаг";
      this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
      // 
      // button1
      // 
      this->button1->Location = System::Drawing::Point(12, 430);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(91, 23);
      this->button1->TabIndex = 3;
      this->button1->Text = L"Старт";
      this->button1->UseVisualStyleBackColor = true;
      this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
      // 
      // dataGridView1
      // 
      this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
        this->x, this->u,
          this->z, this->local_error, this->h
      });
      this->dataGridView1->Location = System::Drawing::Point(497, 12);
      this->dataGridView1->Name = L"dataGridView1";
      this->dataGridView1->Size = System::Drawing::Size(345, 442);
      this->dataGridView1->TabIndex = 4;
      this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(123, 405);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(19, 13);
      this->label2->TabIndex = 5;
      this->label2->Text = L"u0";
      this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
      // 
      // textBox2
      // 
      this->textBox2->Location = System::Drawing::Point(148, 398);
      this->textBox2->Name = L"textBox2";
      this->textBox2->Size = System::Drawing::Size(62, 20);
      this->textBox2->TabIndex = 6;
      this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
      // 
      // textBox3
      // 
      this->textBox3->Location = System::Drawing::Point(148, 433);
      this->textBox3->Name = L"textBox3";
      this->textBox3->Size = System::Drawing::Size(62, 20);
      this->textBox3->TabIndex = 7;
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Location = System::Drawing::Point(121, 441);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(21, 13);
      this->label3->TabIndex = 8;
      this->label3->Text = L"u0\'";
      // 
      // textBox4
      // 
      this->textBox4->Location = System::Drawing::Point(256, 398);
      this->textBox4->Name = L"textBox4";
      this->textBox4->Size = System::Drawing::Size(66, 20);
      this->textBox4->TabIndex = 9;
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Location = System::Drawing::Point(233, 405);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(24, 13);
      this->label4->TabIndex = 10;
      this->label4->Text = L"eps";
      // 
      // textBox5
      // 
      this->textBox5->Location = System::Drawing::Point(256, 432);
      this->textBox5->Name = L"textBox5";
      this->textBox5->Size = System::Drawing::Size(66, 20);
      this->textBox5->TabIndex = 11;
      this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
      // 
      // label5
      // 
      this->label5->AutoSize = true;
      this->label5->Location = System::Drawing::Point(233, 440);
      this->label5->Name = L"label5";
      this->label5->Size = System::Drawing::Size(13, 13);
      this->label5->TabIndex = 12;
      this->label5->Text = L"L";
      // 
      // pictureBox1
      // 
      this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
      this->pictureBox1->Location = System::Drawing::Point(883, 12);
      this->pictureBox1->Name = L"pictureBox1";
      this->pictureBox1->Size = System::Drawing::Size(353, 287);
      this->pictureBox1->TabIndex = 13;
      this->pictureBox1->TabStop = false;
      // 
      // pictureBox2
      // 
      this->pictureBox2->Location = System::Drawing::Point(-23, -46);
      this->pictureBox2->Name = L"pictureBox2";
      this->pictureBox2->Size = System::Drawing::Size(100, 50);
      this->pictureBox2->TabIndex = 14;
      this->pictureBox2->TabStop = false;
      // 
      // pictureBox3
      // 
      this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
      this->pictureBox3->Location = System::Drawing::Point(883, 339);
      this->pictureBox3->Name = L"pictureBox3";
      this->pictureBox3->Size = System::Drawing::Size(353, 115);
      this->pictureBox3->TabIndex = 15;
      this->pictureBox3->TabStop = false;
      // 
      // label6
      // 
      this->label6->AutoSize = true;
      this->label6->Location = System::Drawing::Point(339, 405);
      this->label6->Name = L"label6";
      this->label6->Size = System::Drawing::Size(28, 13);
      this->label6->TabIndex = 16;
      this->label6->Text = L"xmin";
      // 
      // textBox6
      // 
      this->textBox6->Location = System::Drawing::Point(373, 398);
      this->textBox6->Name = L"textBox6";
      this->textBox6->Size = System::Drawing::Size(66, 20);
      this->textBox6->TabIndex = 17;
      // 
      // label7
      // 
      this->label7->AutoSize = true;
      this->label7->Location = System::Drawing::Point(336, 439);
      this->label7->Name = L"label7";
      this->label7->Size = System::Drawing::Size(31, 13);
      this->label7->TabIndex = 18;
      this->label7->Text = L"xmax";
      // 
      // textBox7
      // 
      this->textBox7->Location = System::Drawing::Point(373, 432);
      this->textBox7->Name = L"textBox7";
      this->textBox7->Size = System::Drawing::Size(66, 20);
      this->textBox7->TabIndex = 19;
      // 
      // x
      // 
      this->x->HeaderText = L"x";
      this->x->Name = L"x";
      // 
      // u
      // 
      this->u->HeaderText = L"u";
      this->u->Name = L"u";
      // 
      // z
      // 
      this->z->HeaderText = L"u\'";
      this->z->Name = L"z";
      // 
      // local_error
      // 
      this->local_error->HeaderText = L"ОЛП";
      this->local_error->Name = L"local_error";
      // 
      // h
      // 
      this->h->HeaderText = L"h";
      this->h->Name = L"h";
      // 
      // MyForm
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(1256, 466);
      this->Controls->Add(this->textBox7);
      this->Controls->Add(this->label7);
      this->Controls->Add(this->textBox6);
      this->Controls->Add(this->label6);
      this->Controls->Add(this->pictureBox3);
      this->Controls->Add(this->pictureBox2);
      this->Controls->Add(this->pictureBox1);
      this->Controls->Add(this->label5);
      this->Controls->Add(this->textBox5);
      this->Controls->Add(this->label4);
      this->Controls->Add(this->textBox4);
      this->Controls->Add(this->label3);
      this->Controls->Add(this->textBox3);
      this->Controls->Add(this->textBox2);
      this->Controls->Add(this->label2);
      this->Controls->Add(this->dataGridView1);
      this->Controls->Add(this->button1);
      this->Controls->Add(this->label1);
      this->Controls->Add(this->textBox1);
      this->Controls->Add(this->zedGraphControl1);
      this->Name = L"MyForm";
      this->Text = L"11 задача";
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
      this->ResumeLayout(false);
      this->PerformLayout();

    }
#pragma endregion
  private:
    
    double f_1( double un, double L)
    {
      double g = 9.8; // заменить на текстбокс
      return -(g / L) * sin(un); //z'
     
    }
    vector<double> rungeKutta(double u0, double z0, double h, double L)
    {
      double coeff [4][2]; // 0 for q/z, 1 for k/u
      vector<double> res(2);
      coeff[0][0] = f_1(u0, L); // q0
      coeff[0][1] = z0; //k0
      coeff[1][0] = f_1(u0+z0*h*0.5, L);//q1
      coeff[1][1] = z0+coeff[0][0]*h*0.5;//k1
      coeff[2][0] = f_1(u0 + coeff[1][1] * h *0.5, L);//q2
      coeff[2][1] = z0 + coeff[1][0] * h *0.5; // k2
      coeff[3][0] = f_1(u0 + coeff[2][1] * h, L);//q3
      coeff[3][1] = z0 + coeff[2][0] * h;//k3
      res[0]= z0 + h / 6 * (coeff[0][0] + 2 * coeff[1][0] + 2 * coeff[2][0] + coeff[3][0]);
      res[1]= u0 + h / 6 * (coeff[0][1] + 2 * coeff[1][1] + 2 * coeff[2][1] + coeff[3][1]);
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
        rk2 = rungeKutta(u_, z_, h *0.5, L);
        z_ = rk2[0];
        u_ = rk2[1];
      }

      S1 = abs(z_ - z);
      S2 = abs(u_ - u);
      
      S = sqrt(S1*S1+S2*S2) / 15;
      locErr = S * 16 ;
      if (S > eps)
      {
        return h *0.5;
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
  private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

    GraphPane^ panel = zedGraphControl1->GraphPane;
    panel->CurveList->Clear();

    // Создадим список точек
    PointPairList^ f1_list = gcnew ZedGraph::PointPairList();

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
    panel->Title->Text = ".RK.";
  //  panel->Title->FontSpec->Fill->Brush = gcnew SolidBrush(Color);
   // panel->Title->FontSpec->Fill->IsVisible = true;

    panel->XAxis->Title->Text = "х";
    panel->YAxis->Title->Text = "u";
    /*
        double ymin_limit = -1.0;
        double ymax_limit = 100.0;
    */
    // Список точек

    int i = 1;
    double errorLoc;
    double  z0,u0, hControl; // z0 и u0 добавить 
    dataGridView1->Rows->Clear();
    u0 = Convert::ToDouble(textBox2->Text);
    z0 = Convert::ToDouble(textBox3->Text);
    double x = xmin;
    f1_list->Add(x, u0);
    dataGridView1->Rows->Add();
    dataGridView1->Rows[0]->Cells[0]->Value = x;
    dataGridView1->Rows[0]->Cells[1]->Value = u0;
    dataGridView1->Rows[0]->Cells[2]->Value = z0;
    for (; x < xmax; )
    {
      // Рунге-Кутта
      hControl = errorControl(u0, z0, h, eps, errorLoc, coefL);
     
      if (h <= hControl)
      {//Добавление на график
        x = x + h;
		x = floor(x * 10000000000 + 0.5) / 10000000000;
        f1_list->Add(x, u0);
        //Печать в таблицу
        dataGridView1->Rows->Add();
        dataGridView1->Rows[i]->Cells[0]->Value = x;
        dataGridView1->Rows[i]->Cells[1]->Value = u0;
        dataGridView1->Rows[i]->Cells[2]->Value = z0;
        dataGridView1->Rows[i]->Cells[3]->Value = errorLoc;
        dataGridView1->Rows[i]->Cells[4]->Value = h;
        i++;
      }
      h = hControl;
    }
    LineItem Curve1 = panel->AddCurve ("u(x)", f1_list, Color::Blue, SymbolType::None);
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
    // Обновляем график
    zedGraphControl1->Invalidate();
  }
  private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
