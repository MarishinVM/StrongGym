#pragma once


namespace SG {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    
	/// Сводка для MyForm
	
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
		
		/// Освободить все используемые ресурсы.
		
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	
	private: System::Windows::Forms::Button^ B_trainings;
	private: System::Windows::Forms::Button^ B_workout;
	private: System::Windows::Forms::Button^ B_diets;
	private: System::Windows::Forms::Button^ B_Relief;
	private: System::Windows::Forms::Button^ B_Mass_Force;
	private: System::Windows::Forms::Button^ B_for_men;
	private: System::Windows::Forms::Button^ B_for_women;
	private: System::Windows::Forms::Button^ B_weight_loss;
	private: System::Windows::Forms::Button^ B_weight_loss_W;
	private: System::Windows::Forms::Button^ B_Relief_W;
	private: System::Windows::Forms::Button^ B_Mass_Force_W;
	private: System::Windows::Forms::Button^ B_for_men_diets;
	private: System::Windows::Forms::Button^ B_for_women_diets;
	private: System::Windows::Forms::Button^ B_LW_Rel;
	private: System::Windows::Forms::Button^ B_Weight_maintenance;
	private: System::Windows::Forms::Button^ B_set_muscle_mass;
	private: System::Windows::Forms::Button^ B_LW_Rel_W;
	private: System::Windows::Forms::Button^ B_Weight_maintenance_W;
	private: System::Windows::Forms::Button^ B_set_muscle_mass_W;




	private:
		
		/// Обязательная переменная конструктора.
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
	
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->B_trainings = (gcnew System::Windows::Forms::Button());
			this->B_workout = (gcnew System::Windows::Forms::Button());
			this->B_diets = (gcnew System::Windows::Forms::Button());
			this->B_for_men = (gcnew System::Windows::Forms::Button());
			this->B_for_men_diets = (gcnew System::Windows::Forms::Button());
			this->B_for_women = (gcnew System::Windows::Forms::Button());
			this->B_for_women_diets = (gcnew System::Windows::Forms::Button());
			this->B_weight_loss = (gcnew System::Windows::Forms::Button());
			this->B_Relief = (gcnew System::Windows::Forms::Button());
			this->B_Mass_Force = (gcnew System::Windows::Forms::Button());
			this->B_weight_loss_W = (gcnew System::Windows::Forms::Button());
			this->B_Relief_W = (gcnew System::Windows::Forms::Button());
			this->B_Mass_Force_W = (gcnew System::Windows::Forms::Button());
			this->B_LW_Rel = (gcnew System::Windows::Forms::Button());
			this->B_LW_Rel_W = (gcnew System::Windows::Forms::Button());
			this->B_Weight_maintenance = (gcnew System::Windows::Forms::Button());
			this->B_Weight_maintenance_W = (gcnew System::Windows::Forms::Button());
			this->B_set_muscle_mass = (gcnew System::Windows::Forms::Button());
			this->B_set_muscle_mass_W = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// B_trainings
			// 
			this->B_trainings->BackColor = System::Drawing::Color::Moccasin;
			this->B_trainings->FlatAppearance->BorderColor = System::Drawing::Color::SkyBlue;
			this->B_trainings->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_trainings->Location = System::Drawing::Point(-1, 0);
			this->B_trainings->Name = L"B_trainings";
			this->B_trainings->Size = System::Drawing::Size(125, 53);
			this->B_trainings->TabIndex = 1;
			this->B_trainings->Text = L"Тренировки";
			this->B_trainings->UseVisualStyleBackColor = false;
			this->B_trainings->Click += gcnew System::EventHandler(this, &MyForm::trainings_Click);
			// 
			// B_workout
			// 
			this->B_workout->BackColor = System::Drawing::Color::Moccasin;
			this->B_workout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_workout->Location = System::Drawing::Point(-1, 130);
			this->B_workout->Name = L"B_workout";
			this->B_workout->Size = System::Drawing::Size(125, 53);
			this->B_workout->TabIndex = 2;
			this->B_workout->Text = L"Упражнения";
			this->B_workout->UseVisualStyleBackColor = false;
			// 
			// B_diets
			// 
			this->B_diets->BackColor = System::Drawing::Color::Moccasin;
			this->B_diets->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_diets->Location = System::Drawing::Point(-1, 260);
			this->B_diets->Name = L"B_diets";
			this->B_diets->Size = System::Drawing::Size(125, 53);
			this->B_diets->TabIndex = 3;
			this->B_diets->Text = L"Диеты";
			this->B_diets->UseVisualStyleBackColor = false;
			this->B_diets->Click += gcnew System::EventHandler(this, &MyForm::B_diets_Click);
			// 
			// B_for_men
			// 
			this->B_for_men->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->B_for_men->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_for_men->Location = System::Drawing::Point(121, 0);
			this->B_for_men->Name = L"B_for_men";
			this->B_for_men->Size = System::Drawing::Size(125, 53);
			this->B_for_men->TabIndex = 4;
			this->B_for_men->Text = L"Для мужчин";
			this->B_for_men->UseVisualStyleBackColor = false;
			this->B_for_men->Visible = false;
			this->B_for_men->Click += gcnew System::EventHandler(this, &MyForm::B_for_men_Click);
			// 
			// B_for_men_diets
			// 
			this->B_for_men_diets->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->B_for_men_diets->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_for_men_diets->Location = System::Drawing::Point(121, 260);
			this->B_for_men_diets->Name = L"B_for_men_diets";
			this->B_for_men_diets->Size = System::Drawing::Size(125, 53);
			this->B_for_men_diets->TabIndex = 4;
			this->B_for_men_diets->Text = L"Для мужчин";
			this->B_for_men_diets->UseVisualStyleBackColor = false;
			this->B_for_men_diets->Visible = false;
			this->B_for_men_diets->Click += gcnew System::EventHandler(this, &MyForm::B_for_men_diets_Click);
			// 
			// B_for_women
			// 
			this->B_for_women->BackColor = System::Drawing::Color::LightCoral;
			this->B_for_women->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_for_women->Location = System::Drawing::Point(121, 53);
			this->B_for_women->Name = L"B_for_women";
			this->B_for_women->Size = System::Drawing::Size(125, 53);
			this->B_for_women->TabIndex = 4;
			this->B_for_women->Text = L"Для женщин";
			this->B_for_women->UseVisualStyleBackColor = false;
			this->B_for_women->Visible = false;
			this->B_for_women->Click += gcnew System::EventHandler(this, &MyForm::B_for_women_Click);
			// 
			// B_for_women_diets
			// 
			this->B_for_women_diets->BackColor = System::Drawing::Color::LightCoral;
			this->B_for_women_diets->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_for_women_diets->Location = System::Drawing::Point(121, 310);
			this->B_for_women_diets->Name = L"B_for_women_diets";
			this->B_for_women_diets->Size = System::Drawing::Size(125, 53);
			this->B_for_women_diets->TabIndex = 4;
			this->B_for_women_diets->Text = L"Для женщин";
			this->B_for_women_diets->UseVisualStyleBackColor = false;
			this->B_for_women_diets->Visible = false;
			this->B_for_women_diets->Click += gcnew System::EventHandler(this, &MyForm::B_for_women_diets_Click);
			// 
			// B_weight_loss
			// 
			this->B_weight_loss->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->B_weight_loss->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_weight_loss->Location = System::Drawing::Point(244, 0);
			this->B_weight_loss->Name = L"B_weight_loss";
			this->B_weight_loss->Size = System::Drawing::Size(125, 53);
			this->B_weight_loss->TabIndex = 4;
			this->B_weight_loss->Text = L"На похудение";
			this->B_weight_loss->UseVisualStyleBackColor = false;
			this->B_weight_loss->Visible = false;
			// 
			// B_Relief
			// 
			this->B_Relief->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->B_Relief->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_Relief->Location = System::Drawing::Point(244, 50);
			this->B_Relief->Name = L"B_Relief";
			this->B_Relief->Size = System::Drawing::Size(125, 53);
			this->B_Relief->TabIndex = 4;
			this->B_Relief->Text = L"На рельеф";
			this->B_Relief->UseVisualStyleBackColor = false;
			this->B_Relief->Visible = false;
			// 
			// B_Mass_Force
			// 
			this->B_Mass_Force->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->B_Mass_Force->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_Mass_Force->Location = System::Drawing::Point(244, 100);
			this->B_Mass_Force->Name = L"B_Mass_Force";
			this->B_Mass_Force->Size = System::Drawing::Size(125, 53);
			this->B_Mass_Force->TabIndex = 4;
			this->B_Mass_Force->Text = L"На массу и силу";
			this->B_Mass_Force->UseVisualStyleBackColor = false;
			this->B_Mass_Force->Visible = false;
			// 
			// B_weight_loss_W
			// 
			this->B_weight_loss_W->BackColor = System::Drawing::Color::LightCoral;
			this->B_weight_loss_W->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_weight_loss_W->Location = System::Drawing::Point(244, 50);
			this->B_weight_loss_W->Name = L"B_weight_loss_W";
			this->B_weight_loss_W->Size = System::Drawing::Size(125, 53);
			this->B_weight_loss_W->TabIndex = 4;
			this->B_weight_loss_W->Text = L"На похудение";
			this->B_weight_loss_W->UseVisualStyleBackColor = false;
			this->B_weight_loss_W->Visible = false;
			// 
			// B_Relief_W
			// 
			this->B_Relief_W->BackColor = System::Drawing::Color::LightCoral;
			this->B_Relief_W->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_Relief_W->Location = System::Drawing::Point(244, 100);
			this->B_Relief_W->Name = L"B_Relief_W";
			this->B_Relief_W->Size = System::Drawing::Size(125, 53);
			this->B_Relief_W->TabIndex = 4;
			this->B_Relief_W->Text = L"На рельеф";
			this->B_Relief_W->UseVisualStyleBackColor = false;
			this->B_Relief_W->Visible = false;
			// 
			// B_Mass_Force_W
			// 
			this->B_Mass_Force_W->BackColor = System::Drawing::Color::LightCoral;
			this->B_Mass_Force_W->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_Mass_Force_W->Location = System::Drawing::Point(244, 148);
			this->B_Mass_Force_W->Name = L"B_Mass_Force_W";
			this->B_Mass_Force_W->Size = System::Drawing::Size(125, 53);
			this->B_Mass_Force_W->TabIndex = 4;
			this->B_Mass_Force_W->Text = L"На массу и силу";
			this->B_Mass_Force_W->UseVisualStyleBackColor = false;
			this->B_Mass_Force_W->Visible = false;
			// 
			// B_LW_Rel
			// 
			this->B_LW_Rel->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->B_LW_Rel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_LW_Rel->Location = System::Drawing::Point(244, 260);
			this->B_LW_Rel->Name = L"B_LW_Rel";
			this->B_LW_Rel->Size = System::Drawing::Size(125, 53);
			this->B_LW_Rel->TabIndex = 4;
			this->B_LW_Rel->Text = L"Похудение / рельеф";
			this->B_LW_Rel->UseVisualStyleBackColor = false;
			this->B_LW_Rel->Visible = false;
			// 
			// B_LW_Rel_W
			// 
			this->B_LW_Rel_W->BackColor = System::Drawing::Color::LightCoral;
			this->B_LW_Rel_W->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_LW_Rel_W->Location = System::Drawing::Point(244, 310);
			this->B_LW_Rel_W->Name = L"B_LW_Rel_W";
			this->B_LW_Rel_W->Size = System::Drawing::Size(125, 53);
			this->B_LW_Rel_W->TabIndex = 4;
			this->B_LW_Rel_W->Text = L"Похудение / рельеф";
			this->B_LW_Rel_W->UseVisualStyleBackColor = false;
			this->B_LW_Rel_W->Visible = false;
			// 
			// B_Weight_maintenance
			// 
			this->B_Weight_maintenance->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->B_Weight_maintenance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->B_Weight_maintenance->Location = System::Drawing::Point(244, 310);
			this->B_Weight_maintenance->Name = L"B_Weight_maintenance";
			this->B_Weight_maintenance->Size = System::Drawing::Size(125, 53);
			this->B_Weight_maintenance->TabIndex = 5;
			this->B_Weight_maintenance->Text = L"Поддержание веса";
			this->B_Weight_maintenance->UseVisualStyleBackColor = false;
			this->B_Weight_maintenance->Visible = false;
			// 
			// B_Weight_maintenance_W
			// 
			this->B_Weight_maintenance_W->BackColor = System::Drawing::Color::LightCoral;
			this->B_Weight_maintenance_W->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->B_Weight_maintenance_W->Location = System::Drawing::Point(244, 360);
			this->B_Weight_maintenance_W->Name = L"B_Weight_maintenance_W";
			this->B_Weight_maintenance_W->Size = System::Drawing::Size(125, 53);
			this->B_Weight_maintenance_W->TabIndex = 5;
			this->B_Weight_maintenance_W->Text = L"Поддержание веса";
			this->B_Weight_maintenance_W->UseVisualStyleBackColor = false;
			this->B_Weight_maintenance_W->Visible = false;
			// 
			// B_set_muscle_mass
			// 
			this->B_set_muscle_mass->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->B_set_muscle_mass->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_set_muscle_mass->Location = System::Drawing::Point(244, 360);
			this->B_set_muscle_mass->Name = L"B_set_muscle_mass";
			this->B_set_muscle_mass->Size = System::Drawing::Size(125, 53);
			this->B_set_muscle_mass->TabIndex = 6;
			this->B_set_muscle_mass->Text = L"Набор мыш. массы";
			this->B_set_muscle_mass->UseVisualStyleBackColor = false;
			this->B_set_muscle_mass->Visible = false;
			// 
			// B_set_muscle_mass_W
			// 
			this->B_set_muscle_mass_W->BackColor = System::Drawing::Color::LightCoral;
			this->B_set_muscle_mass_W->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->B_set_muscle_mass_W->Location = System::Drawing::Point(244, 410);
			this->B_set_muscle_mass_W->Name = L"B_set_muscle_mass_W";
			this->B_set_muscle_mass_W->Size = System::Drawing::Size(125, 53);
			this->B_set_muscle_mass_W->TabIndex = 6;
			this->B_set_muscle_mass_W->Text = L"Набор мыш. массы";
			this->B_set_muscle_mass_W->UseVisualStyleBackColor = false;
			this->B_set_muscle_mass_W->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(931, 611);
			this->Controls->Add(this->B_set_muscle_mass);
			this->Controls->Add(this->B_set_muscle_mass_W);
			this->Controls->Add(this->B_Weight_maintenance);
			this->Controls->Add(this->B_Weight_maintenance_W);
			this->Controls->Add(this->B_trainings);
			this->Controls->Add(this->B_workout);
			this->Controls->Add(this->B_diets);
			this->Controls->Add(this->B_for_men);
			this->Controls->Add(this->B_for_men_diets);
			this->Controls->Add(this->B_for_women);
			this->Controls->Add(this->B_for_women_diets);
			this->Controls->Add(this->B_weight_loss);
			this->Controls->Add(this->B_weight_loss_W);
			this->Controls->Add(this->B_Relief);
			this->Controls->Add(this->B_Relief_W);
			this->Controls->Add(this->B_Mass_Force);
			this->Controls->Add(this->B_Mass_Force_W);
			this->Controls->Add(this->B_LW_Rel);
			this->Controls->Add(this->B_LW_Rel_W);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->MaximumSize = System::Drawing::Size(1000, 650);
			this->Name = L"MyForm";
			this->Text = L"Strong Gym";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	
private: System::Void trainings_Click(System::Object^ sender, System::EventArgs^ e)
	{
	  this->B_for_men->Visible = true;
	  this->B_for_women->Visible = true;

	  this->B_for_men_diets->Visible = false;
	  this->B_for_women_diets->Visible = false;

	  this->B_LW_Rel->Visible = false;
	  this->B_Weight_maintenance->Visible = false;
	  this->B_set_muscle_mass->Visible = false;

	  this->B_LW_Rel_W->Visible = false;
	  this->B_Weight_maintenance_W->Visible = false;
	  this->B_set_muscle_mass_W->Visible = false;

	}

private: System::Void B_for_men_Click(System::Object^ sender, System::EventArgs^ e)
    {
	  this->B_weight_loss ->Visible = true;
	  this->B_Relief->Visible = true;
	  this->B_Mass_Force->Visible = true;

	  this->B_weight_loss_W->Visible = false;
	  this->B_Relief_W->Visible = false;
	  this->B_Mass_Force_W->Visible = false;
    }

private: System::Void B_for_women_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->B_weight_loss->Visible = false;
	this->B_Relief->Visible = false;
	this->B_Mass_Force->Visible = false;
	
	this->B_weight_loss_W->Visible = true;
	this->B_Relief_W->Visible = true;
	this->B_Mass_Force_W->Visible = true;

}
	   private: System::Void B_diets_Click(System::Object^ sender, System::EventArgs^ e)
	   {
		   this->B_for_men_diets->Visible = true;
		   this->B_for_women_diets->Visible = true;

		   this->B_weight_loss->Visible = false;
		   this->B_Relief->Visible = false;
		   this->B_Mass_Force->Visible = false;

		   this->B_for_men->Visible = false;
		   this->B_for_women->Visible = false;

		   this->B_weight_loss_W->Visible = false;
		   this->B_Relief_W->Visible = false;
		   this->B_Mass_Force_W->Visible = false;
	   }

	   private: System::Void B_for_men_diets_Click(System::Object^ sender, System::EventArgs^ e) 
	   {
		   this->B_LW_Rel->Visible = true;
		   this->B_Weight_maintenance->Visible = true;
		   this->B_set_muscle_mass->Visible = true;

		   this->B_LW_Rel_W->Visible = false;
		   this->B_Weight_maintenance_W->Visible = false;
		   this->B_set_muscle_mass_W->Visible = false;
	   }

	   private: System::Void B_for_women_diets_Click(System::Object^ sender, System::EventArgs^ e) 
	   {
		   this->B_LW_Rel->Visible = false;
		   this->B_Weight_maintenance->Visible = false;
		   this->B_set_muscle_mass->Visible = false;
		   
		   this->B_LW_Rel_W->Visible = true;
		   this->B_Weight_maintenance_W->Visible = true;
		   this->B_set_muscle_mass_W->Visible = true;
	   }
};
}
