#include <stdio.h>

//método para escrever 'p' na vertical
linhaAp()
{
	//variável
	int i;
	
	//enquanto i for menor ou igual a 8, ele irá escrever a letra 'p'
	for(i = 1; i <= 8; i++)
	{
		//puthcar() = escreve um caracter na tela, tipo um printf()s
		putchar('p');
	}
	
	//dá uma nova linha
	putchar('\n');
}

//método para escrever 'p' na vertical e horizontal
linhaBp()
{
	int i;
	
	//enquanto i for menor ou igual a 2, ele irá escrever a letra 'p'
	for(i = 1; i <= 2; i++)
	{
		putchar('p');
	}
	
	//dá um tabulador
	putchar('\t');
	
	for(i = 1; i <= 2; i++)
	{
		putchar('p');
	}
	
	//dá uma nova linha
	putchar('\n');
}

//método para escrever 'p' na vertical e horizontal com espaçamento
linhaCp()
{
	int i;
	
	for(i = 1; i <= 2; i++)
	{
		putchar('p');
	}
	
	//dá um tabulador
	putchar('\t');
	
	//escreve algo em branco
	putchar(' ');
	
	for(i = 1; i <= 2; i++)
	{
		putchar('p');
	}
	
	//dá uma nova linha
	putchar('\n');
}

//método para escrever 'p' na vertical
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
