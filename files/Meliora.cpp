#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <sstream>
#include <locale.h>

line()
{
	int i;
	
	for(i = 1; i <= 80; i++)
		putchar('_');

}

main()
{
	int		song;
	char	c;
	
	setlocale(LC_ALL, "Swedish");
	
	system("color F0");
	
	line();
	
	printf("\n\t\t\t\tGHOST MELIORA LYRICS\n");
	
	line();
	Sleep(3000);
	
	menu:
	
	printf("\n\t\tChoose one of those songs to see their lyrics\n");
	printf("\n\t1 - SPIRIT \n\t2 - FROM THE PINNACLE TO THE PIT \n\t3 - CIRICE");
	printf("\n\t4 - SPÖKSONAT \n\t5 - HE IS \n\t6 - MUMMY DUST");
	printf("\n\t7 - MAJESTY \n\t8 - DEVIL CHURCH  \n\t9 - ABSOLUTION");
	printf("\n\t10 - DEUS IN ABSENTIA \n\n\t...or other number to exit\n");
	scanf("%d", &song);
	fflush(stdin);
	
	switch(song)
	{
		case 1:
			{
				printf("\n\t\t\tSPIRIT\n"); 	
				
				printf("\n\t\tTHROW YOURSELF");									
				printf("\n\t\tINTO THE VESSEL OF POSSIBILITIES");
				printf("\n\t\tYOUR GREEN MUSE");
				printf("\n\t\tTHE APPARATUS FOR SOUL MOBILITY");
				printf("\n\t\tA GATEWAY TO SECRECY\n");
				
				printf("\n\t\tSPIRIT ABSINTHE");
				printf("\n\t\tSPIRIT ABSINTHE\n");
				
				printf("\n\t\tSEVEN SEALS");										
				printf("\n\t\tDEVILISH CREATURES TRUMPETS THE END OF TIME");					
				printf("\n\t\tCLOVEN HOOVES");
				printf("\n\t\tANTI SAINT WORMWOOD CATAPULTING YOUR MIND");									
				printf("\n\t\tINTO THE JAWS OF DEATH\n");

				printf("\n\t\tSPIRIT ABSINTHE");
				printf("\n\t\tSPIRIT ABSINTHE\n");
				
				printf("\n\t\tTHERE IS NO RETURN");	
				printf("\n\t\tFROM THIS EXCURSION OF POSSIBILITIES");				
				printf("\n\t\tYOU ARE AT THE SEVENTH GATE");	
												
				printf("\n\t\tSPIRIT ABSINTHE");
				printf("\n\t\tSPIRIT ABSINTHE\n");
				
				printf("\n\t\t\"LET NONE OF THIS EARTH INHERIT");										
				printf("\n\t\tTHIS VISION OF MY SPIRIT\"\n");								
				getchar();
				goto menu;
				break;	
			}
		case 2:
			{
				printf("\n\t\t\tFROM THE PINNACLE TO THE PIT\n");						
				
				printf("\n\t\tYOU HAVE THE POWER");										
				printf("\n\t\tYOU WEAR THE CROWN");
				printf("\n\t\tFROM THE PINNACLE TO THE PIT");
				printf("\n\t\tIT IS A LONG WAY DOWN\n");
				
				printf("\n\t\tYOU WIELD THE SCEPTER");			
				printf("\n\t\tYOU WEAR THE GOWN");
				printf("\n\t\tFROM THE PINNACLE TO THE PIT");
				printf("\n\t\tIT IS A LONG WAY DOWN\n");
				
				printf("\n\t\tIN YOUR EMPIRE");											
				printf("\n\t\tTHEY STARE IN FROWN");					
				printf("\n\t\tFROM THE PINNACLE TO THE PIT");
				printf("\n\t\tIT IS A LONG WAY DOWN\n");

				printf("\n\t\tYOU ARE CAST OUT FROM THE HEAVENS TO THE GROUND");									
				printf("\n\t\tBLACKENED FEATHERS FALLING DOWN");
				printf("\n\t\tYOU ARE CAST OUT FROM THE HEAVENS TO THE GROUND");									
				printf("\n\t\tBLACKENED FEATHERS FALLING DOWN");
				printf("\n\t\tYOU WILL WEAR YOUR INDEPENDENCE LIKE A CROWN\n");
				
				printf("\n\t\tCRUCIGER GLOBUS");	
				printf("\n\t\tYOU STAND YOUR GROUND");
				printf("\n\t\tTHE ORB DISFIGURED");									
				printf("\n\t\tWHAT IS FLAT LOOKS ROUND");
				printf("\n\t\tFROM THE PINNACLE TO THE PIT");
				printf("\n\t\tIT IS A LONG WAY DOWN\n");
				
				printf("\n\t\tYOU ARE CAST OUT FROM THE HEAVENS TO THE GROUND");									
				printf("\n\t\tBLACKENED FEATHERS FALLING DOWN");
				printf("\n\t\tYOU ARE CAST OUT FROM THE HEAVENS TO THE GROUND");									
				printf("\n\t\tBLACKENED FEATHERS FALLING DOWN");
				printf("\n\t\tYOU WILL WEAR YOUR INDEPENDENCE LIKE A CROWN\n");
				getchar();
				goto menu;
				break;
			}
		case 3:
			{
				printf("\n\t\t\tCIRICE\n");									
				
				printf("\n\t\tI FEEL YOUR PRESENCE AMONGST US");	
				printf("\n\t\tYOU CANNOT HIDE IN THE DARKNESS");
				printf("\n\t\tCAN YOU HEAR THE RUMBLE\?");
				printf("\n\t\tCAN YOU HEAR THE RUMBLE THAT\'S CALLING\?\n");
				
				printf("\n\t\tI KNOW YOUR SOUL IS NOT TAINTED");	
				printf("\n\t\tEVEN THOUGH YOU\'VE BEEN TOLD SO");
				printf("\n\t\tCAN YOU HEAR THE RUMBLE\?");
				printf("\n\t\tCAN YOU HEAR THE RUMBLE THAT\'S CALLING\?\n");
				
				printf("\n\t\tI CAN FEEL THE THUNDER THAT\'S BREAKING IN YOUR HEART");						
				printf("\n\t\tI CAN SEE THROUGH THE SCARS INSIDE YOU");
				printf("\n\t\tI CAN FEEL THE THUNDER THAT\'S BREAKING IN YOUR HEART");						
				printf("\n\t\tI CAN SEE THROUGH THE SCARS INSIDE YOU\n");
				
				printf("\n\t\tA CANDLE CASTING A FAINT GLOW");	
				printf("\n\t\tYOU AND I SEE EYE TO EYE");
				printf("\n\t\tCAN YOU HEAR THE THUNDER\?");
				printf("\n\t\tHOW CAN YOU HEAR THE THUNDER THAT\'S BREAKING\?");
				printf("\n\t\tNOW THERE IS NOTHING BETWEEN US");	
				printf("\n\t\tFROM NOW OUR MERGE IS ETERNAL\n");
				
				printf("\n\t\tCAN\'T' YOU SEE THAT YOU\'RE LOST\?");
				printf("\n\t\tCAN\'T' YOU SEE THAT YOU\'RE LOST WITHOUT ME\?\n");
				
				printf("\n\t\tI CAN FEEL THE THUNDER THAT\'S BREAKING IN YOUR HEART");						
				printf("\n\t\tI CAN SEE THROUGH THE SCARS INSIDE YOU");
				printf("\n\t\tI CAN FEEL THE THUNDER THAT\'S BREAKING IN YOUR HEART");						
				printf("\n\t\tI CAN SEE THROUGH THE SCARS INSIDE YOU\n");
				
				printf("\n\t\tCAN\'T' YOU SEE THAT YOU\'RE LOST\?");
				printf("\n\t\tCAN\'T' YOU SEE THAT YOU\'RE LOST WITHOUT ME\?\n");
				
				printf("\n\t\tI CAN FEEL THE THUNDER THAT\'S BREAKING IN YOUR HEART");						
				printf("\n\t\tI CAN SEE THROUGH THE SCARS INSIDE YOU");
				printf("\n\t\tI CAN FEEL THE THUNDER THAT\'S BREAKING IN YOUR HEART");						
				printf("\n\t\tI CAN SEE THROUGH THE SCARS INSIDE YOU\n");
				getchar();
				goto menu;
				break;
			}
		case 4:
			{
				printf("\n\t\t\tSPÖKSONAT\n");								
				
				printf("\n\t\t[INSTRUMENTAL]\n");	
				getchar();
				goto menu;
				break;
			}
		case 5:
			{
				printf("\n\t\t\tHE IS\n");								
				
				printf("\n\t\tWE\'RE STANDING HERE BY THE ABYSS");				
				printf("\n\t\tAND THE WORLD");
				printf("\n\t\tIS IN FLAMES\n");
				
				printf("\n\t\tTWO STAR-CROSSED LOVERS REACHING OUT");								
				printf("\n\t\tTO THE BEAST");		
				printf("\n\t\tWITH MANY NAMES\n");					
						
				printf("\n\t\tHE IS");					
				printf("\n\t\tHE\'S THE SHINING IN THE LIGHT");
				printf("\n\t\tWITHOUT WHOM I CANNOT SEE");
				printf("\n\t\tAND HE IS");							
				printf("\n\t\tINSSURECTION, HE IS SPITE");
				printf("\n\t\tHE\'S THE FORCE THAT MADE ME BE");
				printf("\n\t\tHE IS");			
				printf("\n\t\tNOSTRO DISPATER");
				printf("\n\t\tNOSTR\'ALMA MATER");								
				printf("\n\t\tHE IS\n");

				printf("\n\t\tWE\'RE HIDING HERE INSIDE A DREAM");				
				printf("\n\t\tAND ALL OUR DOUBTS");
				printf("\n\t\tARE NOW DESTROYED\n");
				
				printf("\n\t\tTHE GUIDANCE OF THE MORNING STAR");								
				printf("\n\t\tWILL LEAD THE WAY");		
				printf("\n\t\tINTO THE VOID\n");

				printf("\n\t\tHE IS");					
				printf("\n\t\tHE\'S THE SHINING IN THE LIGHT");
				printf("\n\t\tWITHOUT WHOM I CANNOT SEE");
				printf("\n\t\tAND HE IS");							
				printf("\n\t\tINSSURECTION, HE IS SPITE");
				printf("\n\t\tHE\'S THE FORCE THAT MADE ME BE");
				printf("\n\t\tHE IS");			
				printf("\n\t\tNOSTRO DISPATER");
				printf("\n\t\tNOSTR\'ALMA MATER");								
				printf("\n\t\tHE IS\n");

				printf("\n\t\tHE IS");					
				printf("\n\t\tHE\'S THE SHINING IN THE LIGHT");
				printf("\n\t\tWITHOUT WHOM I CANNOT SEE");
				printf("\n\t\tAND HE IS");							
				printf("\n\t\tINSSURECTION, HE IS SPITE");
				printf("\n\t\tHE\'S THE FORCE THAT MADE ME BE");
				printf("\n\t\tHE IS");
				printf("\n\t\tHE\'S THE SHINING IN THE LIGHT");
				printf("\n\t\tWITHOUT WHOM I CANNOT SEE");
				printf("\n\t\tAND HE IS");							
				printf("\n\t\tTHE DISOBEDIENCE THAT HOLDS US TOGETHER");
				printf("\n\t\tHE IS");			
				printf("\n\t\tNOSTRO DISPATER");
				printf("\n\t\tNOSTR\'ALMA MATER");								
				printf("\n\t\tAND WE ARE FALLING");
				printf("\n\t\tOVER THE PRECIPICE\n");
				getchar();
				goto menu;
				break;
			}
		case 6:
			{
				printf("\n\t\t\tMUMMY DUST\n");						
										
				printf("\n\t\tI WAS CARRIED ON A WOLF\'S BACK");			
				printf("\n\t\tHERE TO CORRUPT HUMANITY");
				printf("\n\t\tI WILL PUMMEL IT WITH OPULENCE");
				printf("\n\t\tAND CORPULENCE AND GREED");
				printf("\n\t\tIN GOD YOU TRUST\n");
				
				printf("\n\t\tMY MUMMY DUST");
				printf("\n\t\tMY MUMMY DUST\n");
				
				printf("\n\t\tYOUR CAVALIER OF CRAPULENCE");			
				printf("\n\t\tTO THIS FEAST OF RAPACITY");
				printf("\n\t\tI WILL BURY YOU IN TREASURES");
				printf("\n\t\tJUST TO FEED YOUR INCAPACITY");
				printf("\n\t\tIN GOD YOU TRUST\n");
				
				printf("\n\t\tMY MUMMY DUST");
				printf("\n\t\tMY MUMMY DUST\n");

				printf("\n\t\tYOU ARE THE POSSESSÉE OF AVARICE");			
				printf("\n\t\tI AM THE RULER OF THE EARTH");
				printf("\n\t\tI WILL SMOTHER YOU IN RICHES");
				printf("\n\t\tUNTIL YOU CHOKE ON SORDID MIRTH\n");

				printf("\n\t\tYOU ARE SUMMONED IN CUPIDITY");			
				printf("\n\t\tPURULENCE AND LUST");
				printf("\n\t\tI AM THE MAGNET FOR STUPIDITY");
				printf("\n\t\tDIVINE YOU FEEL MY THRUST");
				printf("\n\t\tIN GOD YOU TRUST\n");
				
				printf("\n\t\tMY MUMMY DUST");
				printf("\n\t\tMY MUMMY DUST\n");
				
				printf("\n\t\tIN GOD YOU TRUST\n");
				getchar();
				goto menu;
				break;
			}
		case 7:
			{
				printf("\n\t\t\tMAJESTY\n");					
										
				printf("\n\t\tA HIGHER POWER UNDERGROUND");		
				printf("\n\t\tFROM SERAPH SKIES AND NOW TO CHAOS BOUND");
				printf("\n\t\tHE IS SITTING SACRED AND PROFOUND");
				printf("\n\t\tIN MIDST OF SINNERS LICKING UP TO KISS HIS CROWN\n");
				
				printf("\n\t\tPATHETIC HUMANS IN DESPAIR");				
				printf("\n\t\tDEFACED, DEFLOWERED, NOW THE DEATH DEVOUT");
				printf("\n\t\tA FALLEN ANGEL IN HIS GLARE");
				printf("\n\t\tIN MIDST OF SINNERS KNEELING DOWN BEFORE HIS CLOUT\n");

				printf("\n\t\tOLD ONE, MASTER");			
				printf("\n\t\tALL BEAUTY LIES WITHIN");
				printf("\n\t\tOLD ONE, MASTER");				
				printf("\n\t\tALL BEAUTY LIES WITHIN YOU\n");
				
				printf("\n\t\tTHIS OASIS IS A POISONED WELL");				
				printf("\n\t\tOF ROTTEN CARCASSES THAT CLOG THE DEEP");
				printf("\n\t\tA PRINCE IN EXILE HERE IN HELL");
				printf("\n\t\tIN MIDST OF SINNERS FLOCKING UP LIKE SOULLESS SHEEP\n");
				
				printf("\n\t\tOLD ONE, MASTER");			
				printf("\n\t\tALL BEAUTY LIES WITHIN");
				printf("\n\t\tOLD ONE, MASTER");				
				printf("\n\t\tALL BEAUTY LIES WITHIN YOU\n");

				printf("\n\t\tOLD ONE, MASTER");			
				printf("\n\t\tALL BEAUTY LIES WITHIN");
				printf("\n\t\tOLD ONE, MASTER");				
				printf("\n\t\tALL BEAUTY LIES WITHIN YOU\n");
				
				printf("\n\t\tYOUR INFERNAL MAJESTY\n");
				getchar();
				goto menu;
				break;
			}
		case 8:
			{
				printf("\n\t\t\tDEVIL CHURCH\n");					
										
				printf("\n\t\t[INSTRUMENTAL]\n");						
				getchar();
				goto menu;
				break;
			}
		case 9:				
			{
				printf("\n\t\t\tABSOLUTION\n");						
										
				printf("\n\t\tEVER SINCE YOU WERE BORN YOU\'VE BEEN DYING");		
				printf("\n\t\tEVERY DAY A LITTLE MORE YOU\'VE BEEN DYING");
				printf("\n\t\tDYING TO REACH THE SETTING SUN\n");
				
				printf("\n\t\tAS A CHILD, WITH YOUR MIND ON THE HORIZON");				
				printf("\n\t\tOVER CORPSES, TO THE PRIZE YOU KEPT YOUR EYES ON\n");
				
				printf("\n\t\tTRYING TO BE THE CHOSEN ONE\n");
				
				printf("\n\t\tALL THOSE THINGS THAT YOU DESIRE");
				printf("\n\t\tYOU WILL FIND THERE IN THE FIRE\n");
							
				printf("\n\t\tPUT YOUR HANDS UP AND REACH TO THE SKY");
				printf("\n\t\tCRY FOR ABSOLUTION");				
				printf("\n\t\tYOU\'LL BE DOWN ON YOUR KNEES AND YOU\'LL CRY\n");
				printf("\n\t\tCRY FOR ABSOLUTION\n");
				
				printf("\n\t\tEVEN NOW WHEN YOU\'RE HERE YOU ARE MOVING");		
				printf("\n\t\tHYSTERICALLY SEEKING OUT WHAT NEEDS IMPROVING");
				printf("\n\t\tAND YOU\'RE STILL ASKING FOR THE SUN\n");

				printf("\n\t\tALL THOSE THINGS THAT YOU DESIRE");
				printf("\n\t\tYOU WILL FIND THERE IN THE FIRE\n");
							
				printf("\n\t\tPUT YOUR HANDS UP AND REACH TO THE SKY");
				printf("\n\t\tCRY FOR ABSOLUTION");				
				printf("\n\t\tYOU\'LL BE DOWN ON YOUR KNEES AND YOU\'LL CRY\n");
				printf("\n\t\tCRY FOR ABSOLUTION\n");
				
				printf("\n\t\tYOU\'LL CRY");	
				printf("\n\t\tYOU\'LL CRY");
				printf("\n\t\tYOU\'LL CRY");
				printf("\n\t\tYOU\'LL CRY");
				printf("\n\t\tYOU\'LL CRY");
				printf("\n\t\tYOU\'LL CRY");

				printf("\n\t\tPUT YOUR HANDS UP AND REACH TO THE SKY");
				printf("\n\t\tCRY FOR ABSOLUTION");				
				printf("\n\t\tYOU\'LL BE DOWN ON YOUR KNEES AND YOU\'LL CRY\n");
				printf("\n\t\tCRY FOR ABSOLUTION\n");

				printf("\n\t\tPUT YOUR HANDS UP AND REACH TO THE SKY");
				printf("\n\t\tCRY FOR ABSOLUTION");				
				printf("\n\t\tYOU\'LL BE DOWN ON YOUR KNEES AND YOU\'LL CRY\n");
				printf("\n\t\tCRY FOR ABSOLUTION\n");					
				getchar();
				goto menu;
				break;
			}
		case 10:
			{
				printf("\n\t\t\tDEUS IN ABSENTIA\n");										
										
				printf("\n\t\tAIN\'T THIS TIME OF NEED?");	
				printf("\n\t\tYOU\'RE TURNING TO THE LIGHT");		
				printf("\n\t\tYOU HAVE JUST BEGUN TO EXPLORE THE DARK");							
				printf("\n\t\tIN THE URBAN LIGHT\n");			

				printf("\n\t\tTHE WORLD IS ON FIRE");				
				printf("\n\t\tAND YOU ARE HERE TO STAY AND BURN WITH ME");
				printf("\n\t\tA FUNERAL PYRE");							
				printf("\n\t\tAND WE ARE HERE TO REVEL FOREVERMORE\n");

				printf("\n\t\tYOU\'RE SO GODDAMN FRAIL");									
				printf("\n\t\tFALLING FOR A CHANGE");
				printf("\n\t\tYOU JUST HAD TO KNOW ALL ABOUT THE WORLD");
				printf("\n\t\tBUT YOU NEVER KNOW");
				printf("\n\t\t\'CAUSE NO ONE EVER TOLD YOU HOW\n");	
				
				printf("\n\t\tTHE WORLD IS ON FIRE");				
				printf("\n\t\tAND YOU ARE HERE TO STAY AND BURN WITH ME");
				printf("\n\t\tA FUNERAL PYRE");							
				printf("\n\t\tAND WE ARE HERE TO REVEL FOREVER\n");
				
				printf("\n\t\tTHE WORLD IS ON FIRE");				
				printf("\n\t\tAND YOU ARE HERE TO STAY AND BURN WITH ME");
				printf("\n\t\tA FUNERAL PYRE");							
				printf("\n\t\tAND WE ARE HERE TO REVEL FOREVERMORE\n");
											
				printf("\n\t\tDEUS, DEUS\n");				
				
				printf("\n\t\tALL OF YOUR IMAGINATIONS");		
				printf("\n\t\tARE NOW RUNNING DOWN YOUR FACE");
				printf("\n\t\tALL OF YOUR IMAGINATIONS");		
				printf("\n\t\tARE NOW RUNNING DOWN YOUR FACE\n");
				
				printf("\n\t\tOH ARE YOU LOOKING GOOD");
				printf("\n\t\tPAYBACK IN DISGRACE");							
				printf("\n\t\tAND YOU\'RE DOING FINE WORSHIPPING YOUR LORD");
				printf("\n\t\tSTANDING IS HIS GRAVE");							
				printf("\n\t\t\'CAUSE NO ONE EVER TOLD YOU HOW\n");	
				
				printf("\n\t\tTHE WORLD IS ON FIRE");				
				printf("\n\t\tAND YOU ARE HERE TO STAY AND BURN WITH ME");
				printf("\n\t\tA FUNERAL PYRE");							
				printf("\n\t\tAND WE ARE HERE TO REVEL FOREVER\n");
				
				printf("\n\t\tTHE WORLD IS ON FIRE");				
				printf("\n\t\tAND YOU ARE HERE TO STAY AND BURN WITH ME");
				printf("\n\t\tA FUNERAL PYRE");							
				printf("\n\t\tAND WE ARE HERE TO REVEL FOREVERMORE\n");
				
				printf("\n\t\tDEUS, DEUS\n");
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
