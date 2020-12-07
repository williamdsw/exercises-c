#include <stdio.h>

//m�todo para escrever 'p' na vertical
linhaAp()
{
	//vari�vel
	int i;
	
	//enquanto i for menor ou igual a 8, ele ir� escrever a letra 'p'
	for(i = 1; i <= 8; i++)
	{
		//puthcar() = escreve um caracter na tela, tipo um printf()s
		putchar('p');
	}
	
	//d� uma nova linha
	putchar('\n');
}

//m�todo para escrever 'p' na vertical e horizontal
linhaBp()
{
	int i;
	
	//enquanto i for menor ou igual a 2, ele ir� escrever a letra 'p'
	for(i = 1; i <= 2; i++)
	{
		putchar('p');
	}
	
	//d� um tabulador
	putchar('\t');
	
	for(i = 1; i <= 2; i++)
	{
		putchar('p');
	}
	
	//d� uma nova linha
	putchar('\n');
}

//m�todo para escrever 'p' na vertical e horizontal com espa�amento
linhaCp()
{
	int i;
	
	for(i = 1; i <= 2; i++)
	{
		putchar('p');
	}
	
	//d� um tabulador
	putchar('\t');
	
	//escreve algo em branco
	putchar(' ');
	
	for(i = 1; i <= 2; i++)
	{
		putchar('p');
	}
	
	//d� uma nova linha
	putchar('\n');
}

//m�todo para escrever 'p' na vertical
linhaDp()
{
	int i;
	
	for(i  = 1; i <= 2; i++)
	{
		putchar('p');
	}
	
	putchar('\n');
}

main()
{
	linhaAp();
	
	linhaBp();
	
	linhaCp();
	
	linhaBp();
	
	linhaAp();
	
	linhaDp();
	
	linhaDp();
	
	linhaDp();
	
	linhaDp();		
}
