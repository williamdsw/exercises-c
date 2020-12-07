//�rea da circunfer�ncia 2

#include <stdio.h>
#include <conio.h>
#include <windows.h>

main1()
{
	//variaveis
	float raio, area;
	char c;
	
	//constantes
	const float pi = 3.14;
        	
	printf("Informe o raio da circunferencia : ");
	scanf("%f", &raio);
	
	fflush(stdin);
	
	area = pi * (raio * raio);
	
	putchar('\n');
	printf("O valor da area da circunferencia eh : %5.2f", area);
	
	c = getch();
}
