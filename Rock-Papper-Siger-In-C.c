#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
//Dont Enter Special Chr If You Enter Program Will Automatically Executed
char *Name;
int Rand;
void Namme()
{
	Name = (char *)malloc(1 * sizeof(char));
	printf("Enter Your Name : ");
	scanf("%s", &Name[1]);
	free(Name);
}
int Random()
{
	srand(time(NULL));
	Rand = rand() % 3;
	return Rand;
}

int main()
{
	static int Prople_Win_Round = 0;
	static int Computar_Win_Round = 0;
	int func;
	Namme();
	Random();
	for (int i = 0; i < 3; i++)
	{
		printf("%s Its Your Time To Choose\n", &Name[1]);
		printf("0 For Rock\n1 For Papper\n2 For Segar\n");
		printf("Enter : ");
		scanf("%d", &func);
		if (func > 2)
		{
			printf("%d Is Not Defined Program Exited ReRun Please", func);
			
			
			_exit(0);
		}
		printf("Computar Was Chossing....\n\n");
		sleep(2);
		if (func == 1 && Rand == 0 || func == 2 && Rand == 1)
		{
			printf("%s Win Round\n\n", &Name[1]);
			Prople_Win_Round++;
		}
		else
		{
			printf("Computar Win This Round\n\n");
			Computar_Win_Round++;
		}
	}
	if (Computar_Win_Round > Prople_Win_Round)
	{
		printf("Computar Won The Whole Matched\n");
	}
	else if (Computar_Win_Round == Prople_Win_Round)
	{
		printf("Mated Is Draw \n\n");
	}
	else if (Prople_Win_Round > Computar_Win_Round){
		printf("%s Win\n\n" , &Name[1]);
   free(Name);
	}

	return 0;
}