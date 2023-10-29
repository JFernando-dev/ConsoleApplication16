#pragma once
#include "time.h"
#include "Casa.h"
#include "Casa2.h"
#include "Casa3.h"
namespace ConsoleApplication16 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			srand(time(NULL));
			g = CreateGraphics();
			objcasa = new Casa();
			objcasa2 = new Casa2();
			objcasa3 = new Casa3();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:

	protected:

	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		Graphics^ g;
		Casa* objcasa;
		Casa2* objcasa2;
		Casa3* objcasa3;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1382, 460);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm1::MyForm1_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//borrar
		g->Clear(Color::Black);
		//animacion
		objcasa->movimiento(g);
		objcasa->dibujar(g);
		objcasa2->movimiento(g);
		objcasa2->dibujar(g);
		objcasa3->movimiento(g);
		objcasa3->dibujar(g);
		//objcasa->borrar(g);
	}

	private: System::Void MyForm1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {

		switch (e->KeyCode)
		{
		case Keys::A:
			objcasa->agregar_casa1();
			break;
		case Keys::B:
			objcasa2->agregar_casa2();
			break;
		case Keys::C:
			objcasa3->agregar_casa3();
			break;
		case Keys::D:
			//objcasa->eliminar();
			objcasa->borrar(g);
			break;
		}
		
	}
		 
	};
}
