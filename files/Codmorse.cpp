#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>

main()
{
	int		letra;
	char	c;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n\t\t\tLETRAS CODMORSE\n");
	Sleep(3000);
	
	menu:
		
	printf("\n\t\tEscolha o número da canção que você deseja ver a letra: ");
	printf("\n\t\t1 - Nuclear Fear \n\t\t2 - Sign The Hell \n\t\t3 - Chaos In The Order\n");
	scanf("%d", &letra);
	fflush(stdin);
	
	switch(letra)
	{
		case 1:
			{
				printf("\n\t\t\tNUCLEAR FEAR\n");
				
				printf("\n\t\tOn this roads everyone is afraid to die");
				printf("\n\t\tWhere the nuclear force prevents the bright sunrise");
				printf("\n\t\tA thousand suns are burning my soul");
				printf("\n\t\tWithout hope, without life, anywhere I go\n");
				
				printf("\n\t\tBurning lifes");
				printf("\n\t\tTurning the gear");
				printf("\n\t\tA thousand dies\n");
				
				printf("\n\t\tBurning lifes");
				printf("\n\t\tTurning the gear");
				printf("\n\t\tA thousand dies");
				printf("\n\t\tExpanding the nuclear fear\n");

				printf("\n\t\tAppears in the sky the mushroom of death, \"The Flower Hiroshima\"");
				printf("\n\t\tBreaking atoms, breaking the laws, we had no idea");
				printf("\n\t\tThousands of lives, thousands of dreams, now disappeared");
				printf("\n\t\tIn a blink of an eye, at the speed of light, spreading fear\n");				
				
				printf("\n\t\tBurning lifes");
				printf("\n\t\tTurning the gear");
				printf("\n\t\tA thousand dies\n");
				
				printf("\n\t\tBurning lifes");
				printf("\n\t\tTurning the gear");
				printf("\n\t\tA thousand dies");
				printf("\n\t\tExpanding the nuclear fear\n");
				getchar();
				goto menu;
				break;
			}
		case 2:
			{
				printf("\n\t\t\tSIGN THE HELL\n");
				
				printf("\n\t\tAs cold as polar night");
				printf("\n\t\tSo strong to be a knight");
				printf("\n\t\tYou’re easy to be fooled");
				printf("\n\t\tThe crusade is going to be ruled\n");
				
				printf("\n\t\tNow! Kill the king");
				printf("\n\t\tFollow and see what I bring");
				printf("\n\t\tDeath in your route");
				printf("\n\t\tMarching to the throne\n");
				
				printf("\n\t\tSign The Hell");
				printf("\n\t\tKilling the king to take his throne");
				printf("\n\t\tSign the Hell");
				printf("\n\t\tTreating everyone like they were one\n");

				printf("\n\t\tKill the king and reign with his blood");
				printf("\n\t\tA matter of time to everyone drown in the flood");
				printf("\n\t\tWho disobey me under my wrath will fall");
				printf("\n\t\tThe inquisition of the devil, will begin now\n");				
				
				printf("\n\t\tNow! I\'m your king");
				printf("\n\t\tObey my rules");
				printf("\n\t\tThere\'s no time for fools");
				printf("\n\t\tMarching to the throne\n");

				printf("\n\t\tSign The Hell");
				printf("\n\t\tKilling the king to take his head");
				printf("\n\t\tSign the Hell");
				printf("\n\t\tSpill blood and make it ground be red\n");		

				printf("\n\t\tAs cold as polar night");
				printf("\n\t\tSo strong to be a knight");
				printf("\n\t\tYou’re easy to be fooled");
				printf("\n\t\tThe crusade is going to be ruled\n");
				
				printf("\n\t\tNow! Kill the king");
				printf("\n\t\tFollow and see what I bring");
				printf("\n\t\tDeath in your route");
				printf("\n\t\tMarching to the throne\n");
				
				printf("\n\t\tSign The Hell");
				printf("\n\t\tKilling the king to take his throne");
				printf("\n\t\tSign the Hell");
				printf("\n\t\tTreating everyone like they were one\n");
				
				printf("\n\t\tSign The Hell");
				printf("\n\t\tKilling the king to take his head");
				printf("\n\t\tSign the Hell");
				printf("\n\t\tSpill blood and make it ground be red\n");
				getchar();
				goto menu;
				break;
			}
		case 3:
			{
				printf("\n\t\t\tCHAOS IN THE ORDER\n");
				
				printf("\n\t\tRevenge and disorder");
				printf("\n\t\tChaos in the Order");
				printf("\n\t\tEnded up the peace");
				printf("\n\t\tI\'m free from decease\n");
				
				printf("\n\t\tNot expect anything from others");
				printf("\n\t\tThis war will not give their rest");
				printf("\n\t\tSlow down and you can see");
				printf("\n\t\tNobody here will forget your past\n");
				
				printf("\n\t\tRevenge and disorder");
				printf("\n\t\tChaos in the Order");
				printf("\n\t\tEnded up the peace");
				printf("\n\t\tI\'m free from decease\n");
				
				printf("\n\t\tSeek it, grab it");
				printf("\n\t\tIn this crossfire");
				printf("\n\t\tHiding and dying");
				printf("\n\t\tI\'m crossing alive\n");

				printf("\n\t\tLiving and dying");
				printf("\n\t\tRunning to shell");
				printf("\n\t\tHiding in a shadow");
				printf("\n\t\tFree me of this hell\n");
				
				printf("\n\t\tWhy we can\'t see?");
				printf("\n\t\tThe world still at war");
				printf("\n\t\tThis is a New World Order");
				printf("\n\t\tI will be destroyer\n");				
				getchar();
				goto menu;
				break;
			}
		default:
			{
				return 0;
				break;
			}
	}

	c = getch;
}
