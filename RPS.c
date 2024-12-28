#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(){
	while (1) {
		

		char rps[20];
		const char* GameOptions[] = { "Rock", "Paper", "Scissors" };
		printf("Welcome Rock Paper Scissors, choose one: \n ");
		printf("Type 'exit' to quit the game \n" );

		printf("(Type Rock, Paper, or Scissors) \n ");
		scanf_s("%19s", rps, (unsigned)_countof(rps));


		int length = sizeof(GameOptions) / sizeof(GameOptions[0]);

		srand(time(0));

		int random_selection = rand() % length;

		if (_stricmp(rps, "exit") == 0) {
			printf("Leaving the game");
			break;
		}
		const char* SelectedOption = GameOptions[random_selection];
		printf("The Computer has chose %s: ", SelectedOption);


		int Compare = strcmp(rps, SelectedOption);

		if (Compare == 0) {
			printf("It's a tie \n");
		}
		else if (
			(_stricmp(rps, "Rock") == 0 && _stricmp(SelectedOption, "Scissors") == 0) ||
			(_stricmp(rps, "Paper") == 0 && _stricmp(SelectedOption, "Rock") == 0) ||
			(_stricmp(rps, "Scissors") == 0 && _stricmp(SelectedOption, "Paper") == 0)
			) {
			printf("You win!\n");
		}
		else {
			printf("Computer wins!\n");
		}
		
		



		
	}
}