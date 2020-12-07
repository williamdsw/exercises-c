#include <stdio.h>
#include <conio.h>

funcaoI()
{
	//variáveis
	int a, b, c;
	
	//ponteiros = Indicam o endereço da variável na memória
	//sintaxe = *ponteiro = &variavel
	int *ptr_a = &a;
	int *ptr_b = &b;
	int *ptr_c = &c;
	
	//printf() = exibe mensagem na tela
	printf("\n\tDigite o valor de a: ");
	
	//scanf() = indica o formato do valor e variável
	scanf("%d", &a);
	
	//fflush() = limpa o buffer do teclado
	fflush(stdin);
	
	printf("\n\tDigite o valor de b: ");
	scanf("%d", &b);
	fflush(stdin);
	printf("\n\tDigite o valor de c: ");
	scanf("%d", &c);
	fflush(stdin);
	
	printf("\n\tPonteiro do \n\t a = %d \n\t b = %d \n\t c = %d\n", ptr_a, ptr_b, ptr_c);	
}

funcaoR()
{
	float p, r, s;
	float *ptr_p = &p;
	float *ptr_f = &r;
	float *ptr_s = &s;
	
	printf("\n\tDigite o valor de p: ");
	scanf("%f", &p);
	fflush(stdin);
	printf("\n\tDigite o valor de r: ");
	scanf("%f", &r);
	fflush(stdin);
	printf("\n\tDigite o valor de s: ");
	scanf("%f", &s);
	fflush(stdin);
	
	printf("\n\tPonteiro do \n\t p = %f \n\t r = %f \n\t s = %f", ptr_p, ptr_f, ptr_s);	
}


main()
{
	char d;
	
	funcaoI();
	
	funcaoR();
	
	d = getch();
}
