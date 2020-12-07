#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
main()
{
	//setlocale() = método que seta a lingua do programa
	setlocale(LC_ALL, "Portuguese");
	
	//códigos ASCII
	printf("\n\t\tAlguns códigos ASCII\n");
	
	//Sleep() = método que faz um "delay" no programa
	Sleep(2000);
	
	//printf() = método que exibe texto na tela
	printf("\n %c = sorriso\n ", 1);
	printf("\n %c = sorriso\n ", 2);
	printf("\n %c = naipe de copas coração\n ", 3);
	printf("\n %c = naipe de ouros\n ", 4);
	printf("\n %c = naipe de de paus\n ", 5);
	printf("\n %c = naipe de espadas\n ", 6);
	printf("\n %c = masculino\n ", 11);
	printf("\n %c = feminino\n ", 12);
	printf("\n %c = nota musical\n ", 14);
	printf("\n %c = sol\n ", 15);
	printf("\n %c = play\n ", 16);
	printf("\n %c = play\n ", 17);
	printf("\n %c = seta dupla\n ", 18);
	printf("\n %c = exclamação dupla\n ", 19);
	printf("\n %c = inicio de um parágrafo\n ", 20);
	printf("\n %c = section sign\n ", 21);
	printf("\n %c = retangulo\n ", 22);
	printf("\n %c = seta dupla\n ", 23);
	printf("\n %c = seta para cima\n ", 24);
	printf("\n %c = seta para baixo\n ", 25);
	printf("\n %c = seta para direita\n ", 26);
	printf("\n %c = seta para esquerda\n ", 27);
	printf("\n %c = longo L\n ", 28);
	printf("\n %c = seta dupla \n ", 29);
	printf("\n %c = triangulo \n ", 30);
	printf("\n %c = triangulo \n ", 31);
}
