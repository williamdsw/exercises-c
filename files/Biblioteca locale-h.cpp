#include <stdio.h>
#include <conio.h>
#include <locale.h>

main()
{
	//variáveis
	char c;
	
	//setlocale() = método que seta a lingua do programa
	setlocale(LC_ALL, "Portuguese");
	
	//printf() = exibe textos na tela
	printf("\n A É I Ó U ÃO\n");
	printf("\n á à ã â ä \n é è ê ë \n í ì î ï \n ó ò õ ô ö \n ú ù û ü\n");
	printf("\n a¹ b² c³ @  $ £ ¢ º ª ? ! # &");
	
	//getch() = espera o usuário dar um enter para fechar o sistema.
	c = getch();
}
