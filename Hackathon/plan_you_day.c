#include "plan_your_day.h"

void get_outdoor_activities()
{
	int rand_num = 0;

	rand_num = rand() % 13 + 1;

	if (rand_num == 1)
	{
		printf("Go see the Pullman bears!\n");
	}
	else if (rand_num == 2)
	{
		printf("Go hiking on one of hte many trails on the Palouse!\n");
	}
	else if (rand_num == 3)
	{
		printf("Go watch the sunset on the Palouse!\n");
	}
	else if (rand_num == 4)
	{
		printf("Party on Greek Row!\n");
	}
	else if (rand_num == 5)
	{
		printf("Go golfing!\n");
	}
	else if (rand_num == 6)
	{
		printf("Visit Sunnyside Park and have a picnic!\n");
	}
	else if (rand_num == 7)
	{
		printf("Go vits the Lawson Gardens!\n");
	}
	else if (rand_num == 8)
	{
		printf("Go see the Cougar Statue!\n");
	}
	else if (rand_num == 9)
	{
		printf("Visit the UI Botanical Gardens!\n");
	}
	else if (rand_num == 10)
	{
		printf("Go swim at the Hamilton Aquatic Center!\n");
	}
	else if (rand_num == 11)
	{
		printf("Go mountain biking at Rolling Hills Bikes!\n");
	}
	else if (rand_num == 12)
	{
		printf("Go river cliff jumping!\n");
	}
	else
	{
		printf("Go cross-country skiing or snowboarding!\n");
	}
	return;
}

void get_indoor_nonedu_activitiy()
{
	int rand_num = 0;

	rand_num = rand() % 7 + 1;

	if (rand_num == 1)
	{
		printf("Go Bowling at Zeppoz!\n");
	}
	else if (rand_num == 2)
	{
		printf("Go throw a pot at the pottery studio in downtown Moscow!\n");
	}
	else if (rand_num == 3)
	{
		printf("Go see a play at the Pullman Regional Theatre!\n");
	}
	else if (rand_num == 4)
	{
		printf("Go axe-throwing!\n");
	}
	else if (rand_num == 5)
	{
		printf("Go skating at the Moscow Ice Rink!\n");
	}
	else if (rand_num == 6)
	{
		printf("Go solve a puzzle at the IQ Escape Room in Moscow!\n");
	}
	else
	{
		printf("Go jump around at the Moscow Trampoline Park!\n");
	}
	return;
}

void get_indoor_edu_activity()
{
	int rand_num = 0;

	rand_num = rand() % 7 + 1;

	if (rand_num == 1)
	{
		printf("Go to the Art Museum!\n");
	}
	else if (rand_num == 2)
	{
		printf("Go to the science center!\n");
	}
	else if (rand_num == 3)
	{
		printf("Go to the Anthropologie Museum!\n");
	}
	else if (rand_num == 4)
	{
		printf("Go to the Heritage Center!\n");
	}
	else
	{
		printf("Go to the Appaloosa Museum!\n");
	}
	return;
}

int get_activty_type()
{
	int choice = 0;
	do
	{
		printf("What type of activity would you like to do?\n1. Outdoor Activities\n2. Indoor Non-Educational Activites\n3. Indoor Educational Activities\n");
		scanf("%d", &choice);
	} while (choice < 1 || choice > 3);

	return choice;

}

void exit_message()
{
	printf("Exiting program!");
	return;
}

void rules_descriptions()
{
	printf("This program will help you plan your day on the Palouse!");
	return;
}