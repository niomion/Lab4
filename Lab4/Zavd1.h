#pragma once
#include <fstream>
namespace Lab4 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Zavd1
	/// </summary>
	public ref class Zavd1 : public System::Windows::Forms::Form
	{
	public:
		String^ openedFileName;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ CreateTxtFile;
	private: System::Windows::Forms::ToolStripMenuItem^ OpenTxtFile;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveTxtFile;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveTxtFileAs;

	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ êîëüîðToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ Font;
	private: System::Windows::Forms::FontDialog^ fontDialog1;
	public:
		String^ openedFilePath;
		Zavd1(void)
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
		~Zavd1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

	private: System::Windows::Forms::Label^ label1;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CreateTxtFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenTxtFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveTxtFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveTxtFileAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Font = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîëüîðToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->Enabled = false;
			this->richTextBox1->Location = System::Drawing::Point(12, 78);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(460, 375);
			this->richTextBox1->TabIndex = 10;
			this->richTextBox1->Text = L"";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::SlateBlue;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem3, this->toolStripMenuItem2
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(484, 36);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->CreateTxtFile,
					this->OpenTxtFile, this->SaveTxtFile, this->SaveTxtFileAs
			});
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem1->ForeColor = System::Drawing::SystemColors::Control;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Padding = System::Windows::Forms::Padding(25, 0, 4, 0);
			this->toolStripMenuItem1->Size = System::Drawing::Size(93, 32);
			this->toolStripMenuItem1->Text = L"Ìåíþ";
			// 
			// CreateTxtFile
			// 
			this->CreateTxtFile->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CreateTxtFile->Name = L"CreateTxtFile";
			this->CreateTxtFile->Size = System::Drawing::Size(192, 22);
			this->CreateTxtFile->Text = L"Ñòâîðèòè";
			this->CreateTxtFile->Click += gcnew System::EventHandler(this, &Zavd1::CreateTxtFile_Click);
			// 
			// OpenTxtFile
			// 
			this->OpenTxtFile->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OpenTxtFile->Name = L"OpenTxtFile";
			this->OpenTxtFile->Size = System::Drawing::Size(192, 22);
			this->OpenTxtFile->Text = L"Â³äêðèòè";
			this->OpenTxtFile->Click += gcnew System::EventHandler(this, &Zavd1::OpenTxtFile_Click);
			// 
			// SaveTxtFile
			// 
			this->SaveTxtFile->Enabled = false;
			this->SaveTxtFile->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SaveTxtFile->Name = L"SaveTxtFile";
			this->SaveTxtFile->Size = System::Drawing::Size(192, 22);
			this->SaveTxtFile->Text = L"Çáåðåãòè";
			this->SaveTxtFile->Click += gcnew System::EventHandler(this, &Zavd1::SaveTxtFile_Click);
			// 
			// SaveTxtFileAs
			// 
			this->SaveTxtFileAs->Enabled = false;
			this->SaveTxtFileAs->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SaveTxtFileAs->Name = L"SaveTxtFileAs";
			this->SaveTxtFileAs->Size = System::Drawing::Size(192, 22);
			this->SaveTxtFileAs->Text = L"Çáåðåãòè ÿê...";
			this->SaveTxtFileAs->Click += gcnew System::EventHandler(this, &Zavd1::SaveTxtFileAs_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->toolStripMenuItem3->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->Font,
					this->êîëüîðToolStripMenuItem
			});
			this->toolStripMenuItem3->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem3->ForeColor = System::Drawing::SystemColors::Control;
			this->toolStripMenuItem3->Margin = System::Windows::Forms::Padding(7, 0, 0, 0);
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(96, 32);
			this->toolStripMenuItem3->Text = L"Äèçàéí";
			// 
			// Font
			// 
			this->Font->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 9.75F));
			this->Font->Name = L"Font";
			this->Font->Size = System::Drawing::Size(128, 22);
			this->Font->Text = L"Øðèôò";
			this->Font->Click += gcnew System::EventHandler(this, &Zavd1::Font_Click);
			// 
			// êîëüîðToolStripMenuItem
			// 
			this->êîëüîðToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 9.75F));
			this->êîëüîðToolStripMenuItem->Name = L"êîëüîðToolStripMenuItem";
			this->êîëüîðToolStripMenuItem->Size = System::Drawing::Size(128, 22);
			this->êîëüîðToolStripMenuItem->Text = L"Êîëüîð";
			this->êîëüîðToolStripMenuItem->Click += gcnew System::EventHandler(this, &Zavd1::ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripMenuItem2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->toolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem2->ForeColor = System::Drawing::SystemColors::Control;
			this->toolStripMenuItem2->Margin = System::Windows::Forms::Padding(0, 0, 7, 0);
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(84, 32);
			this->toolStripMenuItem2->Text = L"Âèõ³ä";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Zavd1::toolStripMenuItem2_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 48);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 21);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Â³äêðèòèé ôàéë: Íåìàº";
			// 
			// Zavd1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(484, 461);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Zavd1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Zavd1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (colorDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK) {
			int startRange = richTextBox1->SelectionStart;
			int lenghtRange = richTextBox1->SelectionLength;
			richTextBox1->SelectionColor = colorDialog1->Color;
		}
	}
	private: System::Void CreateTxtFile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->SaveTxtFile->Enabled = true;
		this->SaveTxtFileAs->Enabled = true;
		this->richTextBox1->Enabled = true;
		this->richTextBox1->Clear();
		openedFileName = nullptr;
		label1->Text = "Â³äêðèòèé ôàéë: Íîâèé (Íå çáåðåæåíî)";
	}
	private: System::Void OpenTxtFile_Click(System::Object^ sender, System::EventArgs^ e) {
		this->SaveTxtFile->Enabled = true;
		this->SaveTxtFileAs->Enabled = true;
		this->richTextBox1->Enabled = true;
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			openedFileName = openFileDialog1->FileName; // Store the opened filename
			richTextBox1->LoadFile(openedFileName, RichTextBoxStreamType::PlainText);
		}
		openedFilePath = System::IO::Path::GetFileName(openedFileName);
		label1->Text = "Â³äêðèòèé ôàéë: " + openedFilePath;
	}
	private: System::Void SaveTxtFile_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		if (!String::IsNullOrEmpty(openedFileName)) {
			richTextBox1->SaveFile(openedFileName, RichTextBoxStreamType::PlainText);
		}
		else if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
			openedFileName = saveFileDialog1->FileName;
			openedFilePath = System::IO::Path::GetFileName(openedFileName);
			richTextBox1->LoadFile(openedFileName, RichTextBoxStreamType::PlainText);
			label1->Text = "Â³äêðèòèé ôàéë: " + openedFilePath;
		}
	}
	private: System::Void SaveTxtFileAs_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			richTextBox1->SaveFile(saveFileDialog1->FileName, RichTextBoxStreamType::PlainText);
		}
	}
	private: System::Void Font_Click(System::Object^ sender, System::EventArgs^ e) {
		if (fontDialog1->ShowDialog(this) == System::Windows::Forms::DialogResult::OK) {
			int startRange = richTextBox1->SelectionStart;
			int lengthRange = richTextBox1->SelectionLength;
			richTextBox1->Select(startRange, lengthRange);
			richTextBox1->SelectionFont = fontDialog1->Font;
		}
	}
	};
}