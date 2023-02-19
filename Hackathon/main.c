#include "plan_your_day.h"

int main(void)
{
	int choice = 0, activity_type = 0;

	srand((unsigned int)time(NULL));

	do
	{
		printf("1.Get Description\n2.Plan your day\n3.Exit\n");
		scanf("%d", &choice);
	} while (choice < 1 || choice > 3);

	if (choice == 1)
	{
		rules_descriptions();
	}
	else if (choice == 2)
	{
		activity_type = get_activty_type();

		if (activity_type == 1)
		{
			get_outdoor_activities();
		}
		else if (activity_type == 2)
		{
			get_indoor_nonedu_activitiy();
		}
		else
		{
			get_indoor_edu_activity();
		}
	}
	else
	{
		exit_message();
	}

	return 0;
}