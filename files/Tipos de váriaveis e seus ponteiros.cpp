#include <stdio.h>
#include <conio.h>

funcaoC()
{
	//variável char
	char carac, *ptr_c = &carac;
	
	//ponteiro da variável
	//char *ptr_c = &carac;
	
	printf("\n\tDigite um caracter: ");
	scanf("%c", &carac);
	
	printf("\n\tPonteiro do caracter = %c", ptr_c);
	
	//puts() = coloca uma string na tela
	puts("\n");
}

funcaoS()
{
	char string;
	char *ptr_s = &string;
	
	puts("\n\tDigite uma string: ");
	scanf("%s", &string);
	
	printf("\tPonteiro da string = %s", ptr_s);
	puts("\n");
}

funcaoI()
{
	int inteiro;
	int *ptr_i = &inteiro;
	
	printf("\n\tDigite um No. inteiro: ");
	scanf("%d", &inteiro);
	fflush(stdin);
	
	printf("\tPonteiro do No. inteiro = %d", ptr_i);
	puts("n");
}

funcaoR()
{
	float real;
	float *ptr_r = &real;
	
	printf("\n\tDigite um No. real: ");
	scanf("%f", &real);
	fflush(stdin);
	
	printf("\tPonteiro do No. real = %f", ptr_r);
	puts("\n");
}

main()
{
	char c;
	
	funcaoC();
	
	funcaoS();
	
	funcaoI();
	
	funcaoR();
	
	c = getch();
}
