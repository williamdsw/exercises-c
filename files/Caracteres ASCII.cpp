#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
main()
{
	//setlocale() = m�todo que seta a lingua do programa
	setlocale(LC_ALL, "Portuguese");
	
	//c�digos ASCII
	printf("\n\t\tAlguns c�digos ASCII\n");
	
	//Sleep() = m�todo que faz um "delay" no programa
	Sleep(2000);
	
	//printf() = m�todo que exibe texto na tela
	printf("\n %c = sorriso\n ", 1);
	printf("\n %c = sorriso\n ", 2);
	printf("\n %c = naipe de copas cora��o\n ", 3);
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
	printf("\n %c = exclama��o dupla\n ", 19);
	printf("\n %c = inicio de um par�grafo\n ", 20);
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
