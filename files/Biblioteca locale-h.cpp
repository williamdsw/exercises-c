#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	//vari�veis
	char c;
	
	//setlocale() = m�todo que seta a lingua do programa
	setlocale(LC_ALL, "Portuguese");
	
	//printf() = exibe textos na tela
	printf("\n A � I � U �O\n");
	printf("\n � � � � � \n � � � � \n � � � � \n � � � � � \n � � � �\n");
	printf("\n a� b� c� @  $ � � � � ? ! # &");
	
	//getch() = espera o usu�rio dar um enter para fechar o sistema.
	c = getch();
}
