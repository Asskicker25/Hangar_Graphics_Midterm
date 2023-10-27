#include "Props.h"

void Props::Load()
{

	//Lab Desks
	SetCurrentModel("Assets/Models/Props/SM_Prop_Desk_Lab_02_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 90.0f, 0.0f));

	AddModelPos({43.5f, 0.0f, 32.3f});


	SetCurrentModel("Assets/Models/Props/SM_Prop_Desk_Lab_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 30.0f, 0.0f));

	AddModelPos({ 45.5f, 0.0f, 27.0f });

	//Small object Desks
	SetCurrentModel("Assets/Models/Props/SM_Prop_Desk_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -30.0f, 0.0f));

	glm::vec3 largeTablePos = glm::vec3(37.5f, 0.0f, 30.0f);

	AddModelPos({ largeTablePos .x, largeTablePos.y, largeTablePos.z});

	SetCurrentModel("Assets/Models/Props/SM_Prop_Desk_02_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 30.0f, 0.0f));

	AddModelPos({ largeTablePos.x - 5.0f, largeTablePos.y, largeTablePos.z});

	//Small Objects
	SetCurrentModel("Assets/Models/Props/SM_Prop_Beaker_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -30.0f, 0.0f));

	float startOffset = 0.25f;

	for (int i = 0; i < 4; i++)
	{
		AddModelPos({ 
			largeTablePos.x + startOffset - ( i * 0.5f),
			largeTablePos.y + 1.5f,
			largeTablePos.z + (startOffset * 0.5f) - (i * 0.275f) - (0.75f)
			});
	}

	//Desk Objects
	SetCurrentModel("Assets/Models/Props/SM_Prop_3DPrinter_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 30.0f, 0.0f));

	AddModelPos({ largeTablePos.x - 5.0f, largeTablePos.y + 1.5f, largeTablePos.z });
	
	SetCurrentModel("Assets/Models/Props/SM_Item_Cups_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -30.0f, 0.0f));

	AddModelPos({ largeTablePos.x + 1.2f , largeTablePos.y + 1.5f, largeTablePos.z + 1.5f});
	
	SetCurrentModel("Assets/Models/Props/SM_Item_Flag_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -30.0f, 0.0f));

	AddModelPos({ largeTablePos.x - 1.95f, largeTablePos.y + 1.5f, largeTablePos.z - 0.25f});
	
	
	SetCurrentModel("Assets/Models/Props/SM_Item_Food_03_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -30.0f, 0.0f));

	AddModelPos({ largeTablePos.x + 1.8f, largeTablePos.y + 1.75f, largeTablePos.z + 0.35f });
	
	SetCurrentModel("Assets/Models/Props/SM_Item_Lamp_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 60.0f, 0.0f));

	AddModelPos({ largeTablePos.x - 1.6f, largeTablePos.y + 1.5f, largeTablePos.z - 0.85f });
	
	SetCurrentModel("Assets/Models/Props/SM_Prop_Monitor_03_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -30.0f, 0.0f));

	AddModelPos({ largeTablePos.x , largeTablePos.y + 1.5f, largeTablePos.z  });
	
	SetCurrentModel("Assets/Models/Props/SM_Prop_Panel_Vintage_05_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -30.0f, 0.0f));

	AddModelPos({ largeTablePos.x - 1.0f , largeTablePos.y + 1.5f, largeTablePos.z  });
	
	SetCurrentModel("Assets/Models/Props/SM_Prop_Phone_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -30.0f, 0.0f));

	AddModelPos({ largeTablePos.x + 1.0f , largeTablePos.y + 1.5f, largeTablePos.z + 0.2f });

	//Chair
	SetCurrentModel("Assets/Models/Props/SM_Prop_Seat_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -210.0f, 0.0f));

	AddModelPos({ largeTablePos.x - 1.0f , largeTablePos.y , largeTablePos.z + 2.0f });

	SetCurrentModel("Assets/Models/Props/SM_Prop_Seat_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -90.0f, 0.0f));

	for (int i = 0; i < 6; i++)
	{
		AddModelPos({ 54.0f, 0.0f, 23.0f + ( 2.5f  * i)});
	}
	

	//Plants
	SetCurrentModel("Assets/Models/Props/SM_Prop_Plants_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 0.0f, 0.0f));
	
	AddModelPos( { 37.5f, 0.0f, 39.5f });
	AddModelPos( { 35.2f, 0.0f, 39.5f });


	SetCurrentModel("Assets/Models/Props/SM_Prop_Plants_03_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 0.0f, 0.0f));

	AddModelPos({ 32.5f, 0.0f, 38.0f });
	
	//Tool Table
	SetCurrentModel("Assets/Models/Props/SM_Prop_Cart_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 0.0f, 0.0f));

	AddModelPos({ 30.0f, 0.0f, 23.0f });

	//Tools

	SetCurrentModel("Assets/Models/Props/SM_Prop_Battery_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
			glm::vec3(0.0f, 0.0f, 0.0f));

	AddModelPos({ 32.0f, 0.0f, 23.0f });
	
	SetCurrentModel("Assets/Models/Props/SM_Item_Wrench_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
			glm::vec3(-90.0f, 0.0f, 30.0f));

	AddModelPos({ 30.5f, 1.2f, 22.5f });
	
	SetCurrentModel("Assets/Models/Props/SM_Item_Hammer_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
			glm::vec3(-90.0f, 0.0f, -15.0f));

	AddModelPos({ 29.5f, 1.2f, 23.0f });


	//Tape

	SetCurrentModel("Assets/Models/Props/SM_Prop_Tape_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 0.0f, 0.0f));

	AddModelPos({ 30.0f, 0.0f, 13.0f });
	AddModelPos({ 35.0f, 0.0f, 13.0f });
	AddModelPos({ 40.0f, 0.0f, 13.0f });

	SetCurrentModel("Assets/Models/Props/SM_Prop_Tape_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 90.0f, 0.0f));

	AddModelPos({ 27.5f, 0.0f, 10.5f });
	AddModelPos({ 27.5f , 0.0f, 10.5f - 5.0f });
	

	//Lockers

	SetCurrentModel("Assets/Models/Props/SM_Prop_Lockers_02_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 0.0f, 0.0f));

	AddModelPos({ 22.5f, 0.0f, 0.5f });
	AddModelPos({ 25.0f, 0.0f, 00.5f });

	SetCurrentModel("Assets/Models/Props/SM_Prop_Lockers_04_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 0.0f, 0.0f));

	AddModelPos({ 27.5f, 0.0f, 0.5f });
	AddModelPos({ 30.0f, 0.0f, 00.5f });
	

	//Ceilig Lights
	SetCurrentModel("Assets/Models/Props/SM_Prop_Light_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 0.0f, 0.0f));
	
	for (int i = 0; i < 6; i++)
	{
		float xValue;
		if (i % 2 == 0)
		{
			xValue = 30.0f;
		}
		else
		{
			xValue = 20.0f;
		}
		AddModelPos({ xValue, 25.0f, 32.5f - ( i * 5.0f)});
	}

	//Walkway lights
	SetCurrentModel("Assets/Models/Props/SM_Env_Ceiling_Light_04_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 23.0f, 0.0f));

	AddModelPos({ 35.25f,10.0f, 20.0f });

	//Control Desk
	SetCurrentModel("Assets/Models/Props/SM_Prop_ControlDesk_03_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 90.0f, 0.0f));

	AddModelPos({ 52.0f, 0.0f, 32.5f });
	
	SetCurrentModel("Assets/Models/Props/SM_Prop_ControlDesk_02_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 90.0f, 0.0f));

	AddModelPos({ 52.0f, 0.0f, 25.0f });

	//Shuttle
	SetCurrentModel("Assets/Models/Props/SM_Prop_Shuttle_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, -90.0f, 0.0f));

	AddModelPos({ 40.0f, 0.0f, 20.0f });

	//Rocekt
	SetCurrentModel("Assets/Models/Props/SM_Prop_Rocket_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 90.0f, 0.0f));

	AddModelPos({ 20.0f, 0.0f, 10.0f });


	//Satellite
	SetCurrentModel("Assets/Models/Props/SM_Prop_Satellite_01_xyz_n_rgba_uv_flatshaded_xyz_n_uv.ply",
		glm::vec3(0.0f, 125.0f, 0.0f));

	AddModelPos({ 18.0f, 0.0f, 28.0f });




	AddToRenderers();
}
