#pragma once
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
#include <cliext/list>

namespace Lab4 {
	using namespace System::Collections::Generic;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Zavd2
	/// </summary>
	public ref class Zavd2 : public System::Windows::Forms::Form
	{
	public:
		Zavd2(void)
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
		~Zavd2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;









	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(275, 402);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(197, 47);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Вихід";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Zavd2::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"ListBox", L"DataGridView" });
			this->comboBox1->Location = System::Drawing::Point(68, 82);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(338, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Visible = false;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Zavd2::comboBox1_SelectedIndexChanged);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(12, 12);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(460, 64);
			this->checkedListBox1->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->Cursor = System::Windows::Forms::Cursors::Default;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 82);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(460, 33);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Згенерувати";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Zavd2::button2_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(12, 114);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(460, 277);
			this->listBox1->TabIndex = 13;
			this->listBox1->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ScrollBar;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView1->Location = System::Drawing::Point(12, 114);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(460, 277);
			this->dataGridView1->TabIndex = 14;
			this->dataGridView1->Visible = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->Cursor = System::Windows::Forms::Cursors::Default;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(12, 402);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(197, 47);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Обчислити";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Zavd2::button3_Click);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 85;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 83;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 83;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 83;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 83;
			// 
			// Zavd2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->ControlBox = false;
			this->Controls->Add(this->button3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Zavd2";
			this->Text = L"Zavd2";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		void SwapMinAndMaxInRow(array<int>^ row, int minIndex, int maxIndex) {
			int temp = row[minIndex];
			row[minIndex] = row[maxIndex];
			row[maxIndex] = temp;
		}

		void SwapMinAndMaxInColumn(array<array<int>^>^ matrix, int columnIndex, int minRowIndex, int maxRowIndex) {
			int temp = matrix[minRowIndex][columnIndex];
			matrix[minRowIndex][columnIndex] = matrix[maxRowIndex][columnIndex];
			matrix[maxRowIndex][columnIndex] = temp;
		}

		void SwapMinAndMaxForRow(array<int>^ row) {
			int minIndex = 0;
			int maxIndex = 0;
			int min = row[0];
			int max = row[0];

			// Знаходимо індекс мінімального та максимального елементів у рядку
			for (int i = 1; i < row->Length; i++) {
				if (row[i] < min) {
					min = row[i];
					minIndex = i;
				}
				if (row[i] > max) {
					max = row[i];
					maxIndex = i;
				}
			}

			// Міняємо місцями мінімальний та максимальний елементи у рядку
			SwapMinAndMaxInRow(row, minIndex, maxIndex);
		}

		void SwapMinAndMaxForColumn(array<array<int>^>^ matrix, int columnIndex) {
			int minIndex = 0;
			int maxIndex = 0;
			int min = matrix[0][columnIndex];
			int max = matrix[0][columnIndex];
			int rowCount = matrix->Length;

			// Знаходимо індекс мінімального та максимального елементів у стовпці
			for (int i = 1; i < rowCount; i++) {
				if (matrix[i][columnIndex] < min) {
					min = matrix[i][columnIndex];
					minIndex = i;
				}
				if (matrix[i][columnIndex] > max) {
					max = matrix[i][columnIndex];
					maxIndex = i;
				}
			}

			// Міняємо місцями мінімальний та максимальний елементи у стовпці
			SwapMinAndMaxInColumn(matrix, columnIndex, minIndex, maxIndex);
		}

		void ProcessMatrix(array<array<int>^>^ matrix) {
			int rowCount = matrix->Length;
			int columnCount = matrix[0]->Length;

			// Переставляємо місцями мінімальний та максимальний елементи для кожного рядка
			for (int i = 0; i < rowCount; i++) {
				SwapMinAndMaxForRow(matrix[i]);
			}

			// Переставляємо місцями мінімальний та максимальний елементи для кожного стовпця
			for (int j = 0; j < columnCount; j++) {
				SwapMinAndMaxForColumn(matrix, j);
			}
		}

	void DisplayMatrixInListBox(array<array<int>^>^ matrix, ListBox^ listBox) {
			listBox->Items->Clear();
			for (int i = 0; i < matrix->Length; i++) {
				String^ rowString = "";
				for (int j = 0; j < matrix[i]->Length; j++) {
					rowString += matrix[i][j] + " ";
				}
				listBox->Items->Add(rowString);
			}
	}

	int GetRandomNumber(int min, int max) {
			return min + (rand() % (max - min + 1));
	}

	void FillCheckedListBox() {
		checkedListBox1->Items->Clear();
		srand(time(0));
		for (int i = 0; i < 30; ++i) {
			int randomNumber = GetRandomNumber(1, 100);
			checkedListBox1->Items->Add(randomNumber);
		}
	}

	void DisplayMatrixInDataGridView(array<array<int>^>^ matrix, int rowCount, int columnCount, DataGridView^ dataGridView) {
		dataGridView->Rows->Clear();
		for (int i = 0; i < rowCount; i++) {
			DataGridViewRow^ row = gcnew DataGridViewRow();
			for (int j = 0; j < columnCount; j++) {
				DataGridViewTextBoxCell^ cell = gcnew DataGridViewTextBoxCell();
				cell->Value = matrix[i][j];
				row->Cells->Add(cell);
			}
			dataGridView->Rows->Add(row);
		}
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (comboBox1->SelectedItem->ToString() == "ListBox") {
			dataGridView1->Visible = false;
			listBox1->Visible = true;
		}
		else if (comboBox1->SelectedItem->ToString() == "DataGridView") {
			listBox1->Visible = false;
			dataGridView1->Visible = true;
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		FillCheckedListBox();
		button2->Hide();
		comboBox1->Visible = true;
		button3->Enabled = true;
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		List<int>^ selectedNumbers = gcnew List<int>();

		// Перевіряємо, чи вибрані елементи відповідають допустимим значенням
		for (int i = 0; i < checkedListBox1->CheckedIndices->Count; i++) {
			int index = checkedListBox1->CheckedIndices[i];
			int number = Convert::ToInt32(checkedListBox1->Items[index]);
			selectedNumbers->Add(number);
		}

		// Перевіряємо, чи кількість вибраних елементів відповідає допустимим значенням
		int totalCount = selectedNumbers->Count;
		if (totalCount != 4 && totalCount != 9 && totalCount != 16 && totalCount != 25) {
			MessageBox::Show("Кількість вибраних елементів повинна бути 4, 9, 16 або 25.", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		int selectedCount = checkedListBox1->CheckedItems->Count;
		array<int>^ matrix = gcnew array<int>(checkedListBox1->CheckedItems->Count);

		for (int i = 0; i < selectedCount; i++) {
			matrix[i] = Convert::ToInt32(checkedListBox1->CheckedItems[i]->ToString());
		}

		int dimension = static_cast<int>(Math::Sqrt(selectedCount));

		array<array<int>^>^ twoDMatrix = gcnew array<array<int>^>(dimension);
		for (int i = 0; i < dimension; i++) {
			twoDMatrix[i] = gcnew array<int>(dimension);
		}

		for (int i = 0; i < selectedCount; i++) {
			int row = i / dimension;
			int col = i % dimension;
			twoDMatrix[row][col] = matrix[i];
		}


		if (comboBox1->SelectedItem != nullptr) {
			String^ selectedItem = comboBox1->SelectedItem->ToString();
			if (selectedItem == "ListBox") {
				listBox1->Items->Clear();
				ProcessMatrix(twoDMatrix);
				DisplayMatrixInListBox(twoDMatrix, listBox1);
			}
			else if (selectedItem == "DataGridView") {
				dataGridView1->Rows->Clear();
				ProcessMatrix(twoDMatrix);
				DisplayMatrixInDataGridView(twoDMatrix, dimension, dimension, dataGridView1);
			}
		}
	}

};
}
