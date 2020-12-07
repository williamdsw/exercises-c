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
	
	puts("\n\tEscolha uma das opções a seguir:");
	printf("\n\t1 - Aprender verbo To Be");
	printf("\n\t2 - Aprender verbo To Be na sentença afirmativa");
	printf("\n\t3 - Aprender verbo To Be na sentença negativa");
	printf("\n\t4 - Aprender verbo To Be na sentença interrogativa");
	printf("\n\t5 - Sair\n");
	scanf("%d", &num);
	fflush(stdin);
	
	switch(num)
	{
		case 1:
			{
				puts("\n\t\tO VERBO TO BE");
				Sleep(2000);
				
				puts("\n\tO verbo TO BE corresponde ao verbo \"ser/estar\" no português.");
				puts("\tEle é utilizado para descrever pessoas e identificar pessoas e objetos, \n\te nas expressões de tempo, lugar e idade.");
				puts("\tAlguns Exemplos: (os verbos estão em CAPS LOCK) \n\t(Para cada exemplo dê ENTER para prosseguir)");
				getchar();
				
				puts("\tThis IS a Lion.");
				puts("\tPronúncia: Dis is a laion");
				puts("\tIsso É um leão.");
				getchar();
				
				puts("\tHelen IS 4 years old.");
				puts("\tPronúncia: Helen is fór iers oudi");
				puts("\tHelen TEM 4 anos de idade.");
				getchar();
				
				puts("\tIt is raining.");
				puts("\tPronúncia: It is reinin");
				puts("\tESTÁ chovendo.");
				getchar();
				
				puts("\tThey ARE my parents.");
				puts("\tPronúncia: Tei ar mai pérentis");
				puts("\tEles SÃO meus pais.");
				getchar();
				
				puts("\tI AM tall.");
				puts("\tPronúncia: Ai em tau");
				puts("\tEu SOU alto.");
				getchar();
				
				puts("\tSujeitos: I(eu), You(você), He(ele), She(ela), It(ele/ela = lugares,animais,objetos), We(nós), You(vocês), They(Eles/Elas).");
				getchar();
				
				puts("\tVoltar ao menu? s - sim, n - não");
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
				puts("\n\tVERBO TO BE NA SENTENÇA AFIRMATIVA");
				Sleep(2000);
				
				printf("\n\tEm português, nós utilizamos as formas abreviadas na linguagem informal, \n\tquando nos dirigimos aos ");
				printf("nossos amigos, nossos parentes mais próximos, \n\tseja por meio da fala ou por meio da escrita, \n\tcomo ");
				printf("por scraps, e-mails e etc. Nessa linguagem o objetivo é o conteúdo, \n\té passar a mensagem que");
				printf("queremos com rapidez. Entretanto, quando nos dirigimos a um desconhecido, \n\tou a pessoas que ");
				printf("devemos mostrar respeito, pois não temos muita convivência, \n\tou pelo lugar que essa pessoa ocupa, ");
				printf("como um cargo de presidência, de direção, \n\tou à situação em que nos encontramos, como um velório, ");
				printf("uma apresentação, utilizamos a linguagem formal.\n\tEssa é uma linguagem mais polida, mais ");
				printf("rebuscada, tanto para nos dirigir por meio da fala como por meio da escrita, \n\tatravés de e-mail, carta. ");
				printf("Nessa linguagem, o objetivo é transmitir a mensagem e, além disso, demonstrar respeito.\n");
				getchar();
				
				puts("\n\tConjugação do verbo no Infinitivo. \n\tExemplos: ");
				getchar();
				
				puts("\tI AM.");
				puts("\tPronúncia: Ai em");
				puts("\tEu SOU/ESTOU.");
				getchar();
				
				puts("\tYou ARE.");
				puts("\tPronúncia: Iu ar");
				puts("\tVocê É/ESTÁ.");
				getchar();
				
				puts("\tHe IS.");
				puts("\tPronúncia: Ri is");
				puts("\tEle É/ESTÁ.");
				getchar();
				
				puts("\tShe IS.");
				puts("\tPronúncia: Shi is");
				puts("\tEla É/ESTÁ.");
				getchar();
				
				puts("\tIt IS. (It é usado para animais, lugares e objetos)");
				puts("\tPronúncia: It is");
				puts("\tEle/Ela É/ESTA.");
				getchar();
				
				puts("\tWe ARE.");
				puts("\tPronúncia: Uii ar");
				puts("\tNós SOMOS/ESTAMOS.");
				getchar();
				
				puts("\tYou ARE.");
				puts("\tPronúncia: Iu ar");
				puts("\tVocês SÃO/ESTÃO.");
				getchar();
				
				puts("\tThey ARE.");
				puts("\tPronúncia: Dei ar");
				puts("\tEles/Elas SÃO/ESTÃO.");
				getchar();
				
				puts("\tAbreviações: I\'m, You\'re, He\'s, She\'s, It\'s, We\'re, You\'re, They\'re");
				getchar();
				
				puts("\tExemplos de frases:");
				getchar();
				
				puts("\tI'm a teenager boy.'");
				puts("\tPronúncia: Ai em a tineidier bói.");
				puts("\tEu SOU um garoto adolescente.");
				getchar();
				
				puts("\tWe\'re best friends.");
				puts("\tPronúncia: Uii ar bést fruends.");
				puts("\tNós SOMOS melhores amigos.");
				getchar();
				
				puts("\tHe IS a great musician.");
				puts("\tPronúncia: Ri is a greit miuzichan.");
				puts("\tEle É um grande músico.");
				getchar();
				
				puts("\tShe IS an beautiful woman.");
				puts("\tPronúncia: Shi is en biutifol uomã.");
				puts("\tEla É uma linda mulher.");
				getchar();
				
				puts("\tI have a cat.It IS Black.");
				puts("\tPronúncia: Ai révi a quéti.It is bléqui.");
				puts("\tEu tenho um gato. Ele é preto.");
				getchar();
				
				puts("\tThey ARE our enemies.");
				puts("\tPronúncia: Dei ar or enemis");
				puts("\tEles SÃO nossos inimigos");
				getchar();
				
				puts("\tVoltar ao menu? s - sim, n - não");
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
				puts("\n\tVERBO TO BE NA SENTENÇA NEGATIVA");
				Sleep(2000);
				
				puts("\n\tAo colocar uma sentença na negativa em português, adiciona-se a palavra NÃO.");
				puts("\tEm inglês acontece a mesma coisa. Nesse caso, a palavra NOT tem o mesmo sentindo que o nosso NÃO.");
				getchar();
				
				puts("\n\tConjugação do verbo no Negativo. \n\tExemplos: ");
				getchar();
				
				puts("\tI AM NOT.");
				puts("\tPronúncia: Ai em nót");
				puts("\tEu NÃO SOU/ESTOU.");
				getchar();
				
				puts("\tYou ARE NOT.");
				puts("\tPronúncia: Iu ar nót");
				puts("\tVocê NÃO É/ESTÁ.");
				getchar();
				
				puts("\tHe IS NOT.");
				puts("\tPronúncia: Ri is nót");
				puts("\tEle NÃO É/ESTÁ.");
				getchar();
				
				puts("\tShe IS NOT.");
				puts("\tPronúncia: Shi is nót");
				puts("\tEla NÃO É/ESTÁ.");
				getchar();
				
				puts("\tIt IS NOT.");
				puts("\tPronúncia: It is nót");
				puts("\tEle/Ela NÃO É/ESTA.");
				getchar();
				
				puts("\tWe ARE NOT.");
				puts("\tPronúncia: Uii ar nót");
				puts("\tNós NÃO SOMOS/ESTAMOS.");
				getchar();
				
				puts("\tYou ARE NOT.");
				puts("\tPronúncia: Iu ar nót");
				puts("\tVocês NÃO SÃO/ESTÃO.");
				getchar();
				
				puts("\tThey ARE NOT.");
				puts("\tPronúncia: Dei ar nót");
				puts("\tEles/Elas NÃO SÃO/ESTÃO.");
				getchar();
				
				puts("\tAbreviações: You aren\'t, He isn\'t, She isn\'t, It isn\'t, We aren\'t, You aren\'t, They aren\'t");
				getchar();
				
				puts("\tExemplos de frases:");
				getchar();
				
				puts("\tI'm NOT tall.'");
				puts("\tPronúncia: Ai em nót tau.");
				puts("\tEu NÃO SOU alto.");
				getchar();
				
				puts("\tThis isn\'t a Lion.");
				puts("\tPronúncia: Dis isan a laion.");
				puts("\tIsso NÃO É um leão.");
				getchar();
				
				puts("\tWe AREN\'T friends.");
				puts("\tPronúncia: uii arenti friendis.");
				puts("\tNós NÃO SOMOS amigos.");
				getchar();
				
				puts("\tLisa IS NOT happy.");
				puts("\tPronúncia: Lisa is nót répi.");
				puts("\tLisa NÃO ÉSTÁ feliz.");
				getchar();
				
				puts("\tI have a cat.It ISN\'T Black.");
				puts("\tPronúncia: Ai révi a quéti.It isanti bléqui.");
				puts("\tEu tenho um gato. Ele é NÃO É preto.");
				getchar();
				
				puts("\tThey AREN\'T our enemies.");
				puts("\tPronúncia: Dei arenti or enemis");
				puts("\tEles NÃO SÃO nossos inimigos");
				getchar();
				
				puts("\tVoltar ao menu? s - sim, n - não");
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
				puts("\n\tVERBO TO BE NA SENTENÇA INTERROGATIVA");
				Sleep(2000);
				
				puts("\n\tAo fazer uma pergunta em inglês trocamos o verbo to be de lugar com o sujeito.");
				puts("\tOu seja, o verbo to be fica antes do sujeito.");
				getchar();
				
				puts("\n\tConjugação do verbo no Interrogativo. \n\tExemplos: ");
				getchar();
				
				puts("\tAM I...?");
				puts("\tPronúncia: Em ai?");
				puts("\tSOU/ESTOU eu...?");
				getchar();
				
				puts("\tARE you...?");
				puts("\tPronúncia: Ar iou?");
				puts("\tÉ/ESTÁ você...?");
				getchar();
				
				puts("\tIS he...?");
				puts("\tPronúncia: Is ri?");
				puts("\tÉ/ESTÁ ele...?");
				getchar();
				
				puts("\tIS she...?");
				puts("\tPronúncia: Is shi?");
				puts("\tÉ/ESTÁ ela...?");
				getchar();
				
				puts("\tIS it...?");
				puts("\tPronúncia: Is it?");
				puts("\tÉ/ESTÁ ele/ela...?");
				getchar();
				
				puts("\tARE we...?");
				puts("\tPronúncia: Ar uii?");
				puts("\tSOMOS/ESTAMOS nós...?.");
				getchar();
				
				puts("\tARE you...?.");
				puts("\tPronúncia: Ar iu?");
				puts("\tSÃO/ESTÃO vocês...?");
				getchar();
				
				puts("\tARE they...?");
				puts("\tPronúncia: Ar dei?");
				puts("\tESTÃO/SÃO eles/elas...?");
				getchar();
				
				puts("\tExemplos de frases:");
				getchar();
				
				puts("\tAM I tall?'");
				puts("\tPronúncia: Em ai tau?");
				puts("\tEu ESTOU alto?");
				getchar();
				
				puts("\tIS she Lisa?");
				puts("\tPronúncia: Is shi Lisa?");
				puts("\tEla É a Lisa?");
				getchar();
				
				puts("\tIS he your brother?");
				puts("\tPronúncia: Is ri ior bróder?");
				puts("\tEle É seu irmão?");
				getchar();
				
				puts("\tARE you American?");
				puts("\tPronúncia: Ar iuu américan?");
				puts("\tVocê É americano?");
				getchar();
				
				puts("\tWhere ARE You?");
				puts("\tPronúncia: uér ar iu?");
				puts("\tAonde ESTÁ você?");
				getchar();
				
				puts("\tARE they our enemies?");
				puts("\tPronúncia: Ar dei or enemis?");
				puts("\tSÃO eles nossos inimigos?");
				getchar();
				
				puts("\tVoltar ao menu? s - sim, n - não");
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
