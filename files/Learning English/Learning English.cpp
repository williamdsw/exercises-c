#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
#include <sstream>

main()
{
	int 	num;
	char	c, res;
	
	system("color F0");
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\n\t\t\tBem vindo ao LEARNING ENGLISH!\n");
	Sleep(3000);
	
	menu:
	
	puts("\n\tEscolha uma das op��es a seguir:");
	printf("\n\t1 - Aprender verbo To Be");
	printf("\n\t2 - Aprender verbo To Be na senten�a afirmativa");
	printf("\n\t3 - Aprender verbo To Be na senten�a negativa");
	printf("\n\t4 - Aprender verbo To Be na senten�a interrogativa");
	printf("\n\t5 - Sair\n");
	scanf("%d", &num);
	fflush(stdin);
	
	switch(num)
	{
		case 1:
			{
				puts("\n\t\tO VERBO TO BE");
				Sleep(2000);
				
				puts("\n\tO verbo TO BE corresponde ao verbo \"ser/estar\" no portugu�s.");
				puts("\tEle � utilizado para descrever pessoas e identificar pessoas e objetos, \n\te nas express�es de tempo, lugar e idade.");
				puts("\tAlguns Exemplos: (os verbos est�o em CAPS LOCK) \n\t(Para cada exemplo d� ENTER para prosseguir)");
				getchar();
				
				puts("\tThis IS a Lion.");
				puts("\tPron�ncia: Dis is a laion");
				puts("\tIsso � um le�o.");
				getchar();
				
				puts("\tHelen IS 4 years old.");
				puts("\tPron�ncia: Helen is f�r iers oudi");
				puts("\tHelen TEM 4 anos de idade.");
				getchar();
				
				puts("\tIt is raining.");
				puts("\tPron�ncia: It is reinin");
				puts("\tEST� chovendo.");
				getchar();
				
				puts("\tThey ARE my parents.");
				puts("\tPron�ncia: Tei ar mai p�rentis");
				puts("\tEles S�O meus pais.");
				getchar();
				
				puts("\tI AM tall.");
				puts("\tPron�ncia: Ai em tau");
				puts("\tEu SOU alto.");
				getchar();
				
				puts("\tSujeitos: I(eu), You(voc�), He(ele), She(ela), It(ele/ela = lugares,animais,objetos), We(n�s), You(voc�s), They(Eles/Elas).");
				getchar();
				
				puts("\tVoltar ao menu? s - sim, n - n�o");
				scanf("%c", &res);
				fflush(stdin);
				
				
				if(res == 's')
				{
					goto menu;
				}
				else
					if(res == 'n')
					{
						puts("\tVolte sempre!!");
						return 0;
					}
				break;
			}
		case 2:
			{
				puts("\n\tVERBO TO BE NA SENTEN�A AFIRMATIVA");
				Sleep(2000);
				
				printf("\n\tEm portugu�s, n�s utilizamos as formas abreviadas na linguagem informal, \n\tquando nos dirigimos aos ");
				printf("nossos amigos, nossos parentes mais pr�ximos, \n\tseja por meio da fala ou por meio da escrita, \n\tcomo ");
				printf("por scraps, e-mails e etc. Nessa linguagem o objetivo � o conte�do, \n\t� passar a mensagem que");
				printf("queremos com rapidez. Entretanto, quando nos dirigimos a um desconhecido, \n\tou a pessoas que ");
				printf("devemos mostrar respeito, pois n�o temos muita conviv�ncia, \n\tou pelo lugar que essa pessoa ocupa, ");
				printf("como um cargo de presid�ncia, de dire��o, \n\tou � situa��o em que nos encontramos, como um vel�rio, ");
				printf("uma apresenta��o, utilizamos a linguagem formal.\n\tEssa � uma linguagem mais polida, mais ");
				printf("rebuscada, tanto para nos dirigir por meio da fala como por meio da escrita, \n\tatrav�s de e-mail, carta. ");
				printf("Nessa linguagem, o objetivo � transmitir a mensagem e, al�m disso, demonstrar respeito.\n");
				getchar();
				
				puts("\n\tConjuga��o do verbo no Infinitivo. \n\tExemplos: ");
				getchar();
				
				puts("\tI AM.");
				puts("\tPron�ncia: Ai em");
				puts("\tEu SOU/ESTOU.");
				getchar();
				
				puts("\tYou ARE.");
				puts("\tPron�ncia: Iu ar");
				puts("\tVoc� �/EST�.");
				getchar();
				
				puts("\tHe IS.");
				puts("\tPron�ncia: Ri is");
				puts("\tEle �/EST�.");
				getchar();
				
				puts("\tShe IS.");
				puts("\tPron�ncia: Shi is");
				puts("\tEla �/EST�.");
				getchar();
				
				puts("\tIt IS. (It � usado para animais, lugares e objetos)");
				puts("\tPron�ncia: It is");
				puts("\tEle/Ela �/ESTA.");
				getchar();
				
				puts("\tWe ARE.");
				puts("\tPron�ncia: Uii ar");
				puts("\tN�s SOMOS/ESTAMOS.");
				getchar();
				
				puts("\tYou ARE.");
				puts("\tPron�ncia: Iu ar");
				puts("\tVoc�s S�O/EST�O.");
				getchar();
				
				puts("\tThey ARE.");
				puts("\tPron�ncia: Dei ar");
				puts("\tEles/Elas S�O/EST�O.");
				getchar();
				
				puts("\tAbrevia��es: I\'m, You\'re, He\'s, She\'s, It\'s, We\'re, You\'re, They\'re");
				getchar();
				
				puts("\tExemplos de frases:");
				getchar();
				
				puts("\tI'm a teenager boy.'");
				puts("\tPron�ncia: Ai em a tineidier b�i.");
				puts("\tEu SOU um garoto adolescente.");
				getchar();
				
				puts("\tWe\'re best friends.");
				puts("\tPron�ncia: Uii ar b�st fruends.");
				puts("\tN�s SOMOS melhores amigos.");
				getchar();
				
				puts("\tHe IS a great musician.");
				puts("\tPron�ncia: Ri is a greit miuzichan.");
				puts("\tEle � um grande m�sico.");
				getchar();
				
				puts("\tShe IS an beautiful woman.");
				puts("\tPron�ncia: Shi is en biutifol uom�.");
				puts("\tEla � uma linda mulher.");
				getchar();
				
				puts("\tI have a cat.It IS Black.");
				puts("\tPron�ncia: Ai r�vi a qu�ti.It is bl�qui.");
				puts("\tEu tenho um gato. Ele � preto.");
				getchar();
				
				puts("\tThey ARE our enemies.");
				puts("\tPron�ncia: Dei ar or enemis");
				puts("\tEles S�O nossos inimigos");
				getchar();
				
				puts("\tVoltar ao menu? s - sim, n - n�o");
				scanf("%c", &res);
				fflush(stdin);
				
				if(res == 's')
				{
					goto menu;
				}
				else
					if(res == 'n')
					{
						puts("\tVolte sempre!!");
						return 0;
					}
				break;
			}
		case 3:
			{
				puts("\n\tVERBO TO BE NA SENTEN�A NEGATIVA");
				Sleep(2000);
				
				puts("\n\tAo colocar uma senten�a na negativa em portugu�s, adiciona-se a palavra N�O.");
				puts("\tEm ingl�s acontece a mesma coisa. Nesse caso, a palavra NOT tem o mesmo sentindo que o nosso N�O.");
				getchar();
				
				puts("\n\tConjuga��o do verbo no Negativo. \n\tExemplos: ");
				getchar();
				
				puts("\tI AM NOT.");
				puts("\tPron�ncia: Ai em n�t");
				puts("\tEu N�O SOU/ESTOU.");
				getchar();
				
				puts("\tYou ARE NOT.");
				puts("\tPron�ncia: Iu ar n�t");
				puts("\tVoc� N�O �/EST�.");
				getchar();
				
				puts("\tHe IS NOT.");
				puts("\tPron�ncia: Ri is n�t");
				puts("\tEle N�O �/EST�.");
				getchar();
				
				puts("\tShe IS NOT.");
				puts("\tPron�ncia: Shi is n�t");
				puts("\tEla N�O �/EST�.");
				getchar();
				
				puts("\tIt IS NOT.");
				puts("\tPron�ncia: It is n�t");
				puts("\tEle/Ela N�O �/ESTA.");
				getchar();
				
				puts("\tWe ARE NOT.");
				puts("\tPron�ncia: Uii ar n�t");
				puts("\tN�s N�O SOMOS/ESTAMOS.");
				getchar();
				
				puts("\tYou ARE NOT.");
				puts("\tPron�ncia: Iu ar n�t");
				puts("\tVoc�s N�O S�O/EST�O.");
				getchar();
				
				puts("\tThey ARE NOT.");
				puts("\tPron�ncia: Dei ar n�t");
				puts("\tEles/Elas N�O S�O/EST�O.");
				getchar();
				
				puts("\tAbrevia��es: You aren\'t, He isn\'t, She isn\'t, It isn\'t, We aren\'t, You aren\'t, They aren\'t");
				getchar();
				
				puts("\tExemplos de frases:");
				getchar();
				
				puts("\tI'm NOT tall.'");
				puts("\tPron�ncia: Ai em n�t tau.");
				puts("\tEu N�O SOU alto.");
				getchar();
				
				puts("\tThis isn\'t a Lion.");
				puts("\tPron�ncia: Dis isan a laion.");
				puts("\tIsso N�O � um le�o.");
				getchar();
				
				puts("\tWe AREN\'T friends.");
				puts("\tPron�ncia: uii arenti friendis.");
				puts("\tN�s N�O SOMOS amigos.");
				getchar();
				
				puts("\tLisa IS NOT happy.");
				puts("\tPron�ncia: Lisa is n�t r�pi.");
				puts("\tLisa N�O �ST� feliz.");
				getchar();
				
				puts("\tI have a cat.It ISN\'T Black.");
				puts("\tPron�ncia: Ai r�vi a qu�ti.It isanti bl�qui.");
				puts("\tEu tenho um gato. Ele � N�O � preto.");
				getchar();
				
				puts("\tThey AREN\'T our enemies.");
				puts("\tPron�ncia: Dei arenti or enemis");
				puts("\tEles N�O S�O nossos inimigos");
				getchar();
				
				puts("\tVoltar ao menu? s - sim, n - n�o");
				scanf("%c", &res);
				fflush(stdin);
				
				if(res == 's')
				{
					goto menu;
				}
				else
					if(res == 'n')
					{
						puts("\tVolte sempre!!");
						return 0;
					}
				break;
			}
		case 4:
			{
				puts("\n\tVERBO TO BE NA SENTEN�A INTERROGATIVA");
				Sleep(2000);
				
				puts("\n\tAo fazer uma pergunta em ingl�s trocamos o verbo to be de lugar com o sujeito.");
				puts("\tOu seja, o verbo to be fica antes do sujeito.");
				getchar();
				
				puts("\n\tConjuga��o do verbo no Interrogativo. \n\tExemplos: ");
				getchar();
				
				puts("\tAM I...?");
				puts("\tPron�ncia: Em ai?");
				puts("\tSOU/ESTOU eu...?");
				getchar();
				
				puts("\tARE you...?");
				puts("\tPron�ncia: Ar iou?");
				puts("\t�/EST� voc�...?");
				getchar();
				
				puts("\tIS he...?");
				puts("\tPron�ncia: Is ri?");
				puts("\t�/EST� ele...?");
				getchar();
				
				puts("\tIS she...?");
				puts("\tPron�ncia: Is shi?");
				puts("\t�/EST� ela...?");
				getchar();
				
				puts("\tIS it...?");
				puts("\tPron�ncia: Is it?");
				puts("\t�/EST� ele/ela...?");
				getchar();
				
				puts("\tARE we...?");
				puts("\tPron�ncia: Ar uii?");
				puts("\tSOMOS/ESTAMOS n�s...?.");
				getchar();
				
				puts("\tARE you...?.");
				puts("\tPron�ncia: Ar iu?");
				puts("\tS�O/EST�O voc�s...?");
				getchar();
				
				puts("\tARE they...?");
				puts("\tPron�ncia: Ar dei?");
				puts("\tEST�O/S�O eles/elas...?");
				getchar();
				
				puts("\tExemplos de frases:");
				getchar();
				
				puts("\tAM I tall?'");
				puts("\tPron�ncia: Em ai tau?");
				puts("\tEu ESTOU alto?");
				getchar();
				
				puts("\tIS she Lisa?");
				puts("\tPron�ncia: Is shi Lisa?");
				puts("\tEla � a Lisa?");
				getchar();
				
				puts("\tIS he your brother?");
				puts("\tPron�ncia: Is ri ior br�der?");
				puts("\tEle � seu irm�o?");
				getchar();
				
				puts("\tARE you American?");
				puts("\tPron�ncia: Ar iuu am�rican?");
				puts("\tVoc� � americano?");
				getchar();
				
				puts("\tWhere ARE You?");
				puts("\tPron�ncia: u�r ar iu?");
				puts("\tAonde EST� voc�?");
				getchar();
				
				puts("\tARE they our enemies?");
				puts("\tPron�ncia: Ar dei or enemis?");
				puts("\tS�O eles nossos inimigos?");
				getchar();
				
				puts("\tVoltar ao menu? s - sim, n - n�o");
				scanf("%c", &res);
				fflush(stdin);
				
				if(res == 's')
				{
					goto menu;
				}
				else
					if(res == 'n')
					{
						puts("\tVolte sempre!!");
						return 0;
					}
				break;
			}
		case 5:
			{
				puts("\tVolte sempre!!");
				return 0;
				break;
			}
	}
}
