#include "header.h"

void g_p(void)
{
	int first_choice = 0;

	first_choice = menu();

	process_choice1(first_choice);
}

int menu(void)
{
	int first_choice = 0;

	do
	{
		printf("\n***********************************\n");
		printf("\n***********MENU SELECTION**********\n");
		printf("\n***********************************\n");

		printf("1. See Descriptions\n");
		printf("2. Play the game!\n");
		printf("3. Exit ):\n");

		scanf("%d", &first_choice);

	} while ((first_choice < 1) || (first_choice > 3));

	return first_choice;

}

void process_choice1(first_choice)
{
	if (first_choice == 1)
	{
		print_rules();
	}
	if (first_choice == 2)
	{
		g_p2();
	}
	if (first_choice == 3)
	{
		goodbye();
	}
	
}

void print_rules()
{
	printf("This is an activity generator for activities in the Pullman - Moscow Regional area.\n");
	printf("You will be asked to select either option 1, 2 or 3. The descriptions of these options are stated below.\n");
	printf("1. Outdoor acitvities\n");
	printf("2. Indoor non-educational activities\n");
	printf("3. Indoor educational activities\n");



}

void goodbye()
{
	printf("Thanks for playing!");
	exit(process_choice1);
}

void g_p2(void)
{
	int choice_2 = 0;
	choice_2 = select_option();



}

int select_option(void)
{
	int choice = 0;

	if (choice == 1)
	{
		print_rules();
	}
	if (choice == 2)
	{
		g_p2();
	}
	if (choice == 3)
	{
		goodbye();
	}
}