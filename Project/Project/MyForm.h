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
  /// ������ ��� MyForm
  /// </summary>
  public ref class MyForm : public System::Windows::Forms::Form
  {
  public:
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
  private: ZedGraph::ZedGraphControl^ zedGraphControl1;
  private: System::Windows::Forms::TextBox^ textBox1;
  private: System::Windows::Forms::Label^ label1;
  private: System::Windows::Forms::Button^ button1;
  private: System::Windows::Forms::DataGridView^ dataGridView1;


  private: System::Windows::Forms::Label^ label2;
  private: System::Windows::Forms::TextBox^ textBox2;
  private: System::Windows::Forms::TextBox^ textBox3;
  private: System::Windows::Forms::Label^ label3;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ x;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ u;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ z;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ local_error;
  private: System::Windows::Forms::TextBox^ textBox4;
  private: System::Windows::Forms::Label^ label4;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^ h;
  protected:

  private: System::ComponentModel::IContainer^ components;
  private:

    /// <summary>
    /// ������������ ���������� ������������.
    /// </summary>


#pragma region Windows Form Designer generated code
    /// <summary>
    /// ��������� ����� ��� ��������� ������������ � �� ��������� 
    /// ���������� ����� ������ � ������� ��������� ����.
    /// </summary>
    void InitializeComponent(void)
    {
      this->components = (gcnew System::ComponentModel::Container());
      this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
      this->textBox1 = (gcnew System::Windows::Forms::TextBox());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->button1 = (gcnew System::Windows::Forms::Button());
      this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
      this->x = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->u = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->z = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->local_error = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->textBox2 = (gcnew System::Windows::Forms::TextBox());
      this->textBox3 = (gcnew System::Windows::Forms::TextBox());
      this->label3 = (gcnew System::Windows::Forms::Label());
      this->textBox4 = (gcnew System::Windows::Forms::TextBox());
      this->label4 = (gcnew System::Windows::Forms::Label());
      this->h = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
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
      // 
      // textBox1
      // 
      this->textBox1->Location = System::Drawing::Point(64, 398);
      this->textBox1->Name = L"textBox1";
      this->textBox1->Size = System::Drawing::Size(100, 20);
      this->textBox1->TabIndex = 1;
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(12, 405);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(27, 13);
      this->label1->TabIndex = 2;
      this->label1->Text = L"���";
      this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
      // 
      // button1
      // 
      this->button1->Location = System::Drawing::Point(15, 431);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(75, 23);
      this->button1->TabIndex = 3;
      this->button1->Text = L"�����";
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
      this->dataGridView1->Size = System::Drawing::Size(802, 366);
      this->dataGridView1->TabIndex = 4;
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
      this->z->HeaderText = L"z";
      this->z->Name = L"z";
      // 
      // local_error
      // 
      this->local_error->HeaderText = L"local error";
      this->local_error->Name = L"local_error";
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(189, 404);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(19, 13);
      this->label2->TabIndex = 5;
      this->label2->Text = L"u0";
      // 
      // textBox2
      // 
      this->textBox2->Location = System::Drawing::Point(225, 398);
      this->textBox2->Name = L"textBox2";
      this->textBox2->Size = System::Drawing::Size(100, 20);
      this->textBox2->TabIndex = 6;
      this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
      // 
      // textBox3
      // 
      this->textBox3->Location = System::Drawing::Point(225, 433);
      this->textBox3->Name = L"textBox3";
      this->textBox3->Size = System::Drawing::Size(100, 20);
      this->textBox3->TabIndex = 7;
      // 
      // label3
      // 
      this->label3->AutoSize = true;
      this->label3->Location = System::Drawing::Point(189, 440);
      this->label3->Name = L"label3";
      this->label3->Size = System::Drawing::Size(21, 13);
      this->label3->TabIndex = 8;
      this->label3->Text = L"u0\'";
      // 
      // textBox4
      // 
      this->textBox4->Location = System::Drawing::Point(381, 398);
      this->textBox4->Name = L"textBox4";
      this->textBox4->Size = System::Drawing::Size(100, 20);
      this->textBox4->TabIndex = 9;
      // 
      // label4
      // 
      this->label4->AutoSize = true;
      this->label4->Location = System::Drawing::Point(340, 405);
      this->label4->Name = L"label4";
      this->label4->Size = System::Drawing::Size(24, 13);
      this->label4->TabIndex = 10;
      this->label4->Text = L"eps";
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
      this->ClientSize = System::Drawing::Size(1311, 466);
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
      this->Text = L"11 ������";
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
      this->ResumeLayout(false);
      this->PerformLayout();

    }
#pragma endregion
  private:
    double f1(double x) {
      return sin(x);
    }
    double f_1( double un)
    {
      double g = 9.8, L = 0.1; // �������� �� ���������
      return -(g / L) * sin(un); //z'
     
    }
    vector<double> rungeKutta(double u0, double z0, double h)
    {
      double coeff [4][2]; // 0 for q/z, 1 for k/u
      vector<double> res(2);
      coeff[0][0] = f_1(u0); // q0
      coeff[0][1] = z0; //k0
      coeff[1][0] = f_1(u0+z0*h/2);//q1
      coeff[1][1] = z0+coeff[0][0]*h/2;//k1
      coeff[2][0] = f_1(u0 + coeff[1][1] * h / 2);//q2
      coeff[2][1] = z0 + coeff[1][0] * h / 2; // k2
      coeff[3][0] = f_1(u0 + coeff[2][1] * h);//q3
      coeff[3][1] = z0 + coeff[2][1] * h;//k3
      res[0]= z0 + h / 6 * (coeff[0][0] + 2 * coeff[1][0] + 2 * coeff[2][0] + coeff[3][0]);
      res[1]= u0 + h / 6 * (coeff[0][1] + 2 * coeff[1][1] + 2 * coeff[2][1] + coeff[3][1]);
      return res;
    }
    double errorControl(double &u0, double &z0, double h, double eps, double &locErr)
    {
      double z, u, z_, u_, S1, S2, S;
      vector<double> rk1, rk2;
      rk1 = rungeKutta(u0, z0, h);
      z = rk1[0];
      u = rk1[1];
      z_ = z0;
      u_ = u0;
      for (int i = 0; i < 2; i++)
      {
        rk2 = rungeKutta(u_, z_, h / 2);
        z_ = rk2[0];
        u_ = rk2[1];
      }

      S1 = abs(z_ - z);
      S2 = abs(u_ - u);
      if (S1 >= S2)
      {
        S=S1;
      }
      else
      {
        S = S2;
      }
      S = S / 15;
      locErr = S * 16 ;
      if (S > eps)
      {
        return h / 2;
      } // ��������� ����� 
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

    // �������� ������ �����
    PointPairList^ f1_list = gcnew ZedGraph::PointPairList();

    // ��������, ��� ���� ������
    //double xmin = Convert::ToDouble(textBox1->Text);
   // double xmax = Convert::ToDouble(textBox2->Text);
    double xmin = 0;
    double xmax = 10;
    double h = Convert::ToDouble(textBox1->Text);
   // double h = 0.1;
    double eps = Convert::ToDouble(textBox4->Text);
    double xmin_limit = xmin - 0.1;
    double xmax_limit = xmax + 0.1;
    /*
        double ymin_limit = -1.0;
        double ymax_limit = 100.0;
    */
    // ������ �����
    int i = 0;
    double errorLoc;
    double  z0,u0, hControl; // z0 � u0 �������� 
    dataGridView1->Rows->Clear();
    u0 = Convert::ToDouble(textBox2->Text);
    z0 = Convert::ToDouble(textBox3->Text);
    for (double x = xmin; x <= xmax; )
    {
      // �����-�����
      hControl = errorControl(u0, z0, h, eps, errorLoc);
     
      if (h <= hControl)
      {//���������� �� ������
        f1_list->Add(x, u0);
        //������ � �������
        dataGridView1->Rows->Add();
        dataGridView1->Rows[i]->Cells[0]->Value = x;
        dataGridView1->Rows[i]->Cells[1]->Value = u0;
        dataGridView1->Rows[i]->Cells[2]->Value = z0;
        dataGridView1->Rows[i]->Cells[3]->Value = errorLoc;
        dataGridView1->Rows[i]->Cells[4]->Value = h;
        x += h;
        i++;
      }
      h = hControl;
    }
    LineItem Curve1 = panel->AddCurve ("u(x)", f1_list, Color::Blue, SymbolType::None);
    // ������������� ������������ ��� �������� �� ��� X
    panel->XAxis->Scale->Min = xmin_limit;
    panel->XAxis->Scale->Max = xmax_limit;
    /*
        // ������������� ������������ ��� �������� �� ��� Y
        panel->YAxis->Scale->Min = ymin_limit;
        panel->YAxis->Scale->Max = ymax_limit;
    */
    // �������� ����� AxisChange (), ����� �������� ������ �� ����. 
    // � ��������� ������ �� ������� ����� �������� ������ ����� �������, 
    // ������� ��������� � ��������� �� ����, ������������� �� ���������
    zedGraphControl1->AxisChange();
    // ��������� ������
    zedGraphControl1->Invalidate();
  }
  private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
  }
  private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
  }
};
}
