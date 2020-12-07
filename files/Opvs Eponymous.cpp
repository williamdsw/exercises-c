#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <sstream>
main()
{
	int		song;
	char	c;
	
	system("color F0");
	printf("\n\t\t\t\tGHOST OPVS EPONYMOUS LYRICS\n");
	Sleep(3000);
	
	menu:
	
	printf("\n\t\tChoose one of those songs to see their lyrics\n");
	printf("\n\t\t1 - DEUS CULPA \n\t\t2 - CON CLAVI CON DIO \n\t\t3 - RITUAL");
	printf("\n\t\t4 - ELIZABETH  \n\t\t5 - STAND BY HIM \n\t\t6 - SATAN PRAYER");
	printf("\n\t\t7 - DEATH KNELL \n\t\t8 - PRIME MOVER  \n\t\t9 - GENESIS");
	printf("\n\t\t10 - HERE COMES THE SUN");
	printf("\n\n\t\t...or other number to exit\n");
	scanf("%d", &song);
	fflush(stdin);
	
	switch(song)
	{
		case 1:
			{
				printf("\n\t\t\t\tDEUS CULPA\n"); 	/*title*/
				
				printf("\n\t\t[INSTRUMENTAL]\n");				
				getchar();
				goto menu;
				break;	
			}
		case 2:
			{
				printf("\n\t\t\tCON CLAVI COM DIO\n");							/*title*/
				
				printf("\n\t\tLUCIFER");										/*verse*/
				printf("\n\t\tWE ARE HERE");
				printf("\n\t\tFOR YOUR PRAISE");
				printf("\n\t\tEVIL ONE\n");
				
				printf("\n\t\tOUR CONJURATION SINGS INFERAL PSALMS");			/*pre-chorus*/
				printf("\n\t\tAND SMEAR THE SMUDGE IN BLEEDING PSALMS\n");
				
				printf("\n\t\tSIAMO CON CLAVI");								/*chorus*/				
				printf("\n\t\tSIAMO CON DIO");					
				printf("\n\t\tSIAMO CON NOSTRO DIO SCURO\n");

				printf("\n\t\tDEMIGOD");										/*verse*/
				printf("\n\t\tOUR TASK");
				printf("\n\t\tBEHIND MASK");
				printf("\n\t\tCHOSEN SON\n");
				
				printf("\n\t\tOH, YOU REBEL CHIEF, DESTROYER OF THE EARTH");	/*pre-chorus*/
				printf("\n\t\tRISE FROM PRECIPICE THORUGH BIRTH\n");
				
				printf("\n\t\tSATHANAS");										/*bridge*/
				printf("\n\t\tWE AE ONE");
				printf("\n\t\tOUT OF THREE");
				printf("\n\t\tTRINITY\n");
				
				printf("\n\t\tSIAMO CON CLAVI");								/*chorus*/				
				printf("\n\t\tSIAMO CON DIO");					
				printf("\n\t\tSIAMO CON NOSTRO DIO SCURO\n");
				getchar();
				goto menu;
				break;
			}
		case 3:
			{
				printf("\n\t\t\tRITUAL\n");										/*title*/
				
				printf("\n\t\tTONIGHT WE\'RE SUMMONED FOR A DIVINE CAUSE");		/*verse*/
				printf("\n\t\tREMEMBRANCE - NO");
				printf("\n\t\tBUT FOR THEIR FUTURE LOST\n");
				
				printf("\n\t\tTHIS CHAPEL OF RITUAL");							/*chorus*/
				printf("\n\t\tSMELLS OF DEAD HUMAN SACRIFICE");
				printf("\n\t\tFROM THE ALTAR...\n");
				
				printf("\n\t\tBEDUINS AND NOMADS");								/*verse*/
				printf("\n\t\tCARRIED THROUGH THE TIMES");
				printf("\n\t\tTHROUGH PESTILENCES AND FAMINES");
				printf("\n\t\tTHESES ANCIENT SCROLLS OF RHYMES\n");
				
				printf("\n\t\t\"OUR FALLEN ANGEL VEXED");						//pre-chorus//
				printf("\n\t\tWAS BANISHED FROM THE SKY");	
				printf("\n\t\tRECITE NOW FROM THE TEXT");
				printf("\n\t\tPRAY FOR ALL TO DIE\"\n");
				
				printf("\n\t\tTHIS CHAPEL OF RITUAL");							/*chorus*/
				printf("\n\t\tSMELLS OF DEAD HUMAN SACRIFICE");
				printf("\n\t\tFROM THE ALTAR BED");
				printf("\n\t\tON THIS NIGHT OF RITUAL");						
				printf("\n\t\tINVOKING OUR MASTER");
				printf("\n\t\tTO PROCREATE THE UNHOLY BASTARD\n");
				
				printf("\n\t\t\"OUR YOUR FATHER");								//bridge//
				printf("\n\t\tWHO ART IN HELL");
				printf("\n\t\tUNHALLOWED BE THY NAME");
				printf("\n\t\tCURSED BE THE SONS AND DAUGHTERS");
				printf("\n\t\tOF THINE NEMESIS");
				printf("\n\t\tWHOM ARE TO BLAME");
				printf("\n\t\tTHY KINGDOM COME");
				printf("\n\t\tNEMA\"\n");
				
				printf("\n\t\tTONIGHT WE SUMMONED FOR HIS UNHOLY FIEND");		/*verse*/
				printf("\n\t\tNOW CELEBRATE");
				printf("\n\t\tTHE END\n");
				
				printf("\n\t\tTHIS CHAPEL OF RITUAL");							/*chorus*/
				printf("\n\t\tSMELLS OF DEAD HUMAN SACRIFICE");
				printf("\n\t\tFROM THE ALTAR BED");
				printf("\n\t\tON THIS NIGHT OF RITUAL");						
				printf("\n\t\tINVOKING OUR MASTER");
				printf("\n\t\tTO PROCREATE THE UNHOLY BASTARD\n");
				getchar();
				goto menu;
				break;
			}
		case 4:
			{
				printf("\n\t\t\tELIZABETH\n");									/*title*/
				
				printf("\n\t\tUNDER THE MONLIGHT OF OLD HUNGERIAN SKIES");		/*verse*/
				printf("\n\t\tBURIED IN THE BLOOD-DRENCHED EARTH");
				printf("\n\t\tTHESE BARREN LANDS OF ICE");
				printf("\n\t\tSHE WAS AN EVIL WOMAN WITH AN EVIL OLD SOUL");
				printf("\n\t\tPIERCING EYES EMOTIONLESS");				
				printf("\n\t\tA HEART SO BLACK AND COLD\n");			
				
				printf("\n\t\tELIZABETH, IN THE CHASM WHERE WAS MY SOUL");		/*chorus*/
				printf("\n\t\tFOREVER YOUNG, ELIZABETH BATHORII");
				printf("\n\t\tIN THE CASTLE OF YOUR DEATH");
				printf("\n\t\tYOU\'RE STILL ALIVE, ELIZABETH");

				printf("\n\t\tHER PACT WITH SATAN");							/*bridge*/
				printf("\n\t\tHER DISPISAL OF MANKIND");
				printf("\n\t\tHER ACTS OF CRUELTY AND HER LUST FOR BLOOD");
				printf("\n\t\tMAKES HER ONE OF US\n");
				
				printf("\n\t\tOUR ACIENT COUNTESS WAS REFUSED HER DESIRES WILL");/*verse*/
				printf("\n\t\tTO BATHE IN PURE FRESH BLOOD");
				printf("\n\t\tSHE\'D PEASANT VIRGINS KILLED\n");
			
				printf("\n\t\tELIZABETH, IN THE CHASM WHERE WAS MY SOUL");		/*chorus*/
				printf("\n\t\tFOREVER YOUNG, ELIZABETH BATHORII");
				printf("\n\t\tIN THE CASTLE OF YOUR DEATH");
				printf("\n\t\tYOU\'RE STILL ALIVE, ELIZABETH");
				
				printf("\n\t\tELIZABETH, IN THE CHASM WHERE WAS MY SOUL");		/*chorus*/
				printf("\n\t\tFOREVER YOUNG, ELIZABETH BATHORII");
				printf("\n\t\tIN THE CASTLE OF YOUR DEATH");
				printf("\n\t\tYOU\'RE STILL ALIVE, ELIZABETH");
				getchar();
				goto menu;
				break;
			}
		case 5:
			{
				printf("\n\t\t\tSTAND BY HIM\n");									/*title*/
				
				printf("\n\t\tDEVIL\'S POWER IS THE GREATEST ONE");					/*verse*/
				printf("\n\t\tWHEN HIS\' AND HERS\' HOLIEST SHUNS THE SUN");
				printf("\n\t\tA TEMPTRESS SMITTEN BY THE BLACKEST FORCE");
				printf("\n\t\tA VICAR BITTEN BLIND IN INTERCOURSE\n");
				
				printf("\n\t\tTHE WITCH HAMMER");									//pre-chorus//
				printf("\n\t\tSTRUCK HER DOWN");		
				printf("\n\t\tTHROUGH OUR SABBATH");					
				printf("\n\t\tSHE IS UNBOUND\n");
						
				printf("\n\t\tIT IS THE NIGHT OF THE WITCH");						//chorus//
				printf("\n\t\tIT IS THE NIGHT OF THE WITCH TONIGHT");
				printf("\n\t\tAND THE VENGEANCE IS HERS FOR AS LONG AS SHES STANDS BY HIM\n");
				
				printf("\n\t\t\"ALL WITCHCRAFT COMES");								/*bridge*/
				printf("\n\t\tFROM CARNAL LUST");
				printf("\n\t\tWHICH IS IN WOMEN INSATIABLE\"\n");
				
				printf("\n\t\tAS MOON SHONE BRIGHT ABOVE HER TRIAL");				/*verse*/
				printf("\n\t\tAS FLAMES ATE THROUGH HER BODY DEFILED\n");
				
				printf("\n\t\tTHE WITCH HAMMER");									//pre-chorus//
				printf("\n\t\tSTRUCK HER DOWN");		
				printf("\n\t\tTHROUGH OUR SABBATH");					
				printf("\n\t\tSHE IS UNBOUND\n");
				
				printf("\n\t\tIT IS THE NIGHT OF THE WITCH");						//chorus//
				printf("\n\t\tIT IS THE NIGHT OF THE WITCH TONIGHT");
				printf("\n\t\tAND THE VENGEANCE IS HERS FOR AS LONG AS SHES STANDS BY HIM\n");
				getchar();
				goto menu;
				break;
			}
		case 6:
			{
				printf("\n\t\t\tSATAN PRAYER\n");							/*title*/
										
				printf("\n\t\tBELIEVE IN ONE GOD DO WE");					/*verse*/
				printf("\n\t\tSATAN ALMIGHTY");
				printf("\n\t\tTHE UNCREATOR OF HEAVEN AND EVIL");
				printf("\n\t\tAND THE UNVISABLE AND THE VISABLE");
				printf("\n\t\tAND IN HIS SON");
				printf("\n\t\tBEGOTTEN OF FATHER");
				printf("\n\t\tBY WHOM ALL THINGS SHALL BE UNMADE");
				printf("\n\t\tWHO FOR MAN AND HIS DAMNATION");
				printf("\n\t\tINCARNETED");
				printf("\n\t\tRISE UP FROM HELL");			
				printf("\n\t\tFROM SITTETH ON THE LEFT HAND OF HIS FATHER");
				printf("\n\t\tFROM THENSE HE SHALL COME TO JUDGE");				
				printf("\n\t\tOUT OF ONE SUBSTANCE");	
				printf("\n\t\tWITH SATAN");
				printf("\n\t\tWHOSE KINGDOM SHALL HAVETH NO END\n");
				
				printf("\n\t\tHEAR OUR SATAN PRAYER");						/*chorus*/
				printf("\n\t\tOUR ANTI NICENE CREED");
				printf("\n\t\tHEAR OUR SATAN PRAYER");
				printf("\n\t\tFOR THE CUMING OF SEED");
				printf("\n\t\tHEAR OUR SATAN PRAYER");		
				printf("\n\t\tOUR ANTI NICENE CREED");
				printf("\n\t\tHEAR OUR SATAN PRAYER");
				printf("\n\t\tFOR THE CUMING OF SEED\n");
				
				printf("\n\t\tUNHOLY GHOST");								/*bridge*/
				printf("\n\t\tOVERLORD AND TAKER OF LIFE\n");			
				
				printf("\n\t\tHEAR OUR SATAN PRAYER");						/*chorus*/
				printf("\n\t\tOUR ANTI NICENE CREED");
				printf("\n\t\tHEAR OUR SATAN PRAYER");
				printf("\n\t\tFOR THE CUMING OF SEED");
				printf("\n\t\tHEAR OUR SATAN PRAYER");		
				printf("\n\t\tOUR ANTI NICENE CREED");
				printf("\n\t\tHEAR OUR SATAN PRAYER");
				printf("\n\t\tFOR THE CUMING OF SEED\n");
				getchar();
				goto menu;
				break;
			}
		case 7:
			{
				printf("\n\t\t\tDEATH KNELL\n");						/*title*/
										
				printf("\n\t\tSAY, CAN YOU SEE THE CROSS?");			/*verse*/
				printf("\n\t\tINVERTED SOLEMNLY");
				printf("\n\t\tSYMBOL FOR THE GOAT");
				printf("\n\t\tOF A THOUSAND YOUNG");
				
				printf("\n\t\tSIX, SIX, SIX");							//chorus//
				printf("\n\t\tEVOKE THE KING OF HELL");
				printf("\n\t\tSTRIKE THE DEATH KNELL");
				printf("\n\t\tDEATH KNELL\n");

				printf("\n\t\tSAY, CAN YOU HEAR THE CHIMES?");			/*verse*/
				printf("\n\t\tTOLLS NOW FOR THE END");
				printf("\n\t\tBELLS CALL OUT THEIR DOOM");				
				printf("\n\t\tAS VICTOR REACHES WOMB\n");
				
				printf("\n\t\tSEX, SEX ,SEX");							//chorus//		
				printf("\n\t\tRECIEVE THE BEAST OF EVIL");
				printf("\n\t\tOF EVIL...\n");				
				
				printf("\n\t\tCAN YOU SAY HIS NAME?");					/*verse*/
				printf("\n\t\tCARRIER OF THE LIGHT");
				printf("\n\t\tLEGIONS OF THIS SEED");
				printf("\n\t\tA CHILD A SPOUNCE WILL FEED\n");
				
				printf("\n\t\tS-A-T-A-N");								/*chorus*/
				printf("\n\t\tUNDER SPELL");
				printf("\n\t\tOF DEATH KNELL");				
				printf("\n\t\tDEATH KNELL\n");
				getchar();
				goto menu;
				break;
			}
		case 8:
			{
				printf("\n\t\t\tPRIME MOVER\n");						/*title*/
										
				printf("\n\t\tCLAD IN CLOAK");							/*verse*/
				printf("\n\t\tA SECRETIVE RUN");
				printf("\n\t\tBEARING THE OLD ONE\'S BASTARD SON");
				printf("\n\t\tVARUCOSE PHALLOS");			
				printf("\n\t\tOBSESSED AND POISED HER");
				printf("\n\t\tCAST A VEIL OF DUSK UPON THE CLOISTER\n");

				printf("\n\t\tPRIME MOVER");							/*chorus*/
				printf("\n\t\tMATERNAL SLAVE");
				printf("\n\t\tWITH CHILD OF HER GRAVE\n");				
										
				printf("\n\t\tMOTHER");									/*bridge*/
				printf("\n\t\tFILTH IN HER WOMB");				
				printf("\n\t\tFATHER");
				printf("\n\t\tWAITING IN TOMB\n");
				
				printf("\n\t\tSELECTED HEIR");							//verse//
				printf("\n\t\tMACHINARY INSECT");
				printf("\n\t\tBLOODLINE OF THE DARK ARCHITECT");				
				printf("\n\t\tTOXIC BLOOD");	
				printf("\n\t\tOF NOT KNOWN BIRTH");
				printf("\n\t\tANTICHRIST WILL WALK THE EARTH\n");				
				
				printf("\n\t\tPRIME MOVER");							/*chorus*/
				printf("\n\t\tMATERNAL SLAVE");
				printf("\n\t\tWITH CHILD OF HER GRAVE\n");	
				getchar();
				goto menu;
				break;
			}
		case 9:
			{
				printf("\n\t\t\tGENESIS\n");						/*title*/
										
				printf("\n\t\t[INSTRUMENTAL]\n");					/*verse*/
				getchar();
				goto menu;
				break;
			}
		case 10:
			{
				printf("\n\t\t\tHERE COMES THE SUN\n");											/*title*/
										
				printf("\n\t\tLITTLE DARLING, IT\'S BEEN A LONG COLD LONELY WINTER");			/*verse*/
				printf("\n\t\tLITTLE DARLING, IT FEELS LIKE YEARS SINCE IT\'S BEEN HERE");		
				printf("\n\t\tHERE COMES THE SUN, HERE COMES THE SUN");							//chorus//
				printf("\n\t\tAND I SAY IT\'S ALL RIGHT\n");			

				printf("\n\t\tLITTLE DARLING, THE SMILES RETURNING TO THE FACES");				/*verse*/
				printf("\n\t\tLITTLE DARLING, IT FEELS LIKE YEARS SINCE IT\'S BEEN HERE");
				printf("\n\t\tHERE COMES THE SUN, HERE COMES THE SUN");							//chorus//
				printf("\n\t\tAND I SAY IT\'S ALL RIGHT\n");

				printf("\n\t\tSUN, SUN, SUN, HERE IT COMES");									/*bridge*/
				printf("\n\t\tSUN, SUN, SUN, HERE IT COMES");
				printf("\n\t\tSUN, SUN, SUN, HERE IT COMES");
				printf("\n\t\tSUN, SUN, SUN, HERE IT COMES");
				printf("\n\t\tSUN, SUN, SUN, HERE IT COMES\n");	
											
				printf("\n\t\tLITTLE DARLING, I FEEL THAT ICE IS SLOWLY MELTING");				/*verse*/
				printf("\n\t\tLITTLE DARLING, IT FEELS LIKE YEARS SINCE IT\'S BEEN CLEAR");		//chorus//
				printf("\n\t\tHERE COMES THE SUN, HERE COMES THE SUN");
				printf("\n\t\tAND I SAY IT\'S ALL RIGHT\n");
				
				printf("\n\t\tHERE COMES THE SUN, HERE COMES THE SUN");							//chorus//
				printf("\n\t\tAND I SAY IT\'S ALL RIGHT\n");
				getchar();
				goto menu;
				break;
			}
		default:
			{
				puts("\n\t\tCREATED BY A NAMELESS DEVELOPER @2015");
				return 0;
			}
	}
	c = getch();
}
