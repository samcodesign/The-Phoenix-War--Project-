/* The stdio.h header defines three variable types, several macros, and various functions for performing input and output. */
#include <stdio.h>
/* The conio.h is a C header file used mostly by MS-DOS compilers to provide console input/output. It is not part of the C standard library or ISO C, nor is it defined by POSIX. */
#include <conio.h>
/* The stdlib.h header defines four variable types, several macros, and various functions for performing general functions. */
#include<stdlib.h>
/* The windows.h is a Windows-specific header file for the C and C++ programming languages which contains declarations for all of the functions in the Windows API, all the common macros used by Windows programmers, and all the data types used by the various functions and subsystems. */
#include<windows.h>


/* Editing the help section (function) */
void help()
{
    system("cls"); /* Clearing the previous screen */
    system("COLOR 09"); /* Changing the syntax/Background color */
    printf("\n _______________________________ The Pheonix War _______________________________ ");
    printf("\n\n                        A Prophecy says that: ");
    Sleep(1000); /* Makes the program sleep for X(ms) */
    printf("\n\n >> RUNETERRA will know two Wars, Training & Gore War.");
    Sleep(1000);
    printf("\n\n >> In Training War you will be asked a total of 3 General Knowledge Questions. ");
    printf("\n    You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you will be quartered by the other race. ");
    Sleep(1000);
    printf("\n\n >> The real challenge will be in Gore War. You will be asked");
    printf("\n    total 10 questions each right answer will be awarded with a spell");
    printf("\n    By this way you can win The Phoenix Flames easily... or harder. xD");
    Sleep(1000);
    printf("\n\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option. ");
    Sleep(1000);
    printf("\n\n >> You will be asked questions continuously if you keep giving the right answers.");
    Sleep(1000);
    printf("\n\n >> No negative marking for wrong answers. It's easy you get wrong you perish. ");
    Sleep(1000);
	printf("\n\n\t ************ May the FLAMES OF THE PHOENIX be in your possession ************ ");
	printf("\n\n\t        _______ The Pheonix War is developed By: _______");
    printf("\n\t          - Samy Benmahrez (CP1 A) \n\t          - Aimen Mohamed Zenoune  (CP1 B)");
    }
/* Editing the record screen (showing the scrore...) reading the score of the txt file and showing it on the screen... */
void show_record()
    {system("cls");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t______________________________________________________________");
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);
	printf("\n\n\t\t______________________________________________________________");
	fclose(f);
	getch();}

/* Editing the reset score setting (function) */
void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}

/* Editing the edit score setting (function) */
void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}



/* The main prog */
int main(){

     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     char role[20];

     mainhome: /* Our mainhome game-page */
     system("cls");/* Clearing the terminal screen */
     PlaySound(TEXT("sound.wav"),NULL,SND_ASYNC | SND_LOOP | SND_FILENAME);/* playing a background music while the game is running */
     printf("\t\t\t  << THE PHOENIX WAR >> \n");
     printf("\n\t\t____________________________________________");
     printf("\n\t\t\t      WELCOME SUMMONER\n ");
     printf("\n\t\t\t             to\n ");
     printf("\n\t\t\t         RUNNETERRA ");
     printf("\n\t\t");
     printf("\n\t\t---------------------------------------------------");
     printf("\n\t\t| Help your race to win THE FLAMES OF THE PHOENIX |");
     printf("\n\t\t---------------------------------------------------");
     Sleep(2000);
     printf("\n\t\t > Press S to start the game");
     Sleep(1000);
     printf("\n\t\t > Press V to view the highest score  ");
     Sleep(1000);
     printf("\n\t\t > Press R to reset the score");
     Sleep(1000);
     printf("\n\t\t > press H for help            ");
     Sleep(1000);
     printf("\n\t\t > press Q to quit the game             ");
     printf("\n\t\t________________________________________\n\n");
     choice=toupper(getch());/* analyse the the charactere that has been typed by the user */

     if(choice=='V')
	 {
         system("cls");
         show_record();
         system("cls");
         goto mainhome;
	 }

     else if(choice=='H')
	 {
         system("cls");
         help();
         getch();
         system("cls");
	     goto mainhome;
	 }

     else if(choice=='R')
	 {
         system("cls");
         reset_score();
	     getch();
	     goto mainhome;
      }

     else if (choice=='Q')
	 {
         exit(1);
     }

    else if(choice=='S') /* Start the game... */
    {
        system("cls");
        Sleep(1000);
        printf("\n   DRAGONOIDS & GREMLINS, two races at war since time,");
        printf("\n the reason: They seek to have the magic power of ");
        printf("\n <<PHOENIX'S FLAMES>> and the legends say that it is the power of eternity!");
        Sleep(1500);
        printf("\n\n   ... The day expected for 100 years is approaching, this is the day");
        printf("\n when its Magical power can be activated, so the two races");
        printf("\n decided to train Warriors to obtain the MAGIC OF THE PHOENIX");
        Sleep(2000);
        printf("\n\n\t Press ANY key to Continue");
        getch();
        system("cls");
        printf("\n\n\n\t\t\t   Welcome to RUNETERRA!");
        printf("\n\n\n\n\n\n\n\n\t\t\t Summoner, Enter Your Name: ");
        gets(playername);/* The prog reads (what the User wrote) = the Playername */
        system("cls");
        printf("\n\n %s, want to fight beside?",playername);
		printf("\n\nA. DRAGONOIDS\tor\tB. GREMLINS\n\t"); /* Choosing a camp to fight with */

     if (toupper(getch())=='A'){/* Dragonoids choice */
            system("cls");
            printf("\n Eum... Nice choice %s!",playername);
            printf("\n\n They are well-known for their intelligence and other things that I don't care");
            printf("\n\n\nOk. Now you must choose a Hero: Wizard or Elve \n\t");
            gets(role);/* The prog reads (what the User wrote) = the role */

        if (strcmp(role,"Wizard")==0 || strcmp(role,"wizard")==0 || strcmp(role,"WIZARD")==0)/* comparing between two strings using (strcmp) */
        {
            system("cls");
            printf("\n\n Witches and wizards are people thought to possess magical powers or to command supernatural forces.");
            printf("\n  Emm, %s you seems strong... I feel that you can make the world better and stop the Phoenix War",playername);
            printf("\n So... I'll give you a chance answer a simple question and i'll give you the FLAMES OF THE PHOENIX");
            system("cls");
            printf("\n\n\nWho is the founder of pixar animation?");
		    printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");

		    if(toupper(getch())=='C'){
                printf("\n\nCorrect!! Awesome you have THE FLAMES OF THE PHOENIX");
                printf("\nbut the game won't register your score... Because I don't like wizards!");
                getch();
                goto mainhome;/* when the user prees any key the prog will automatically go to the "mainhome" page */}
		    else{
		        printf("\n\nWrong!!!");
                printf("\n Ahh forgot to tell you... if you lose you DIE; Yep like NOW!\n\t Bye!");
		        getch();
	            goto mainhome;}
        }/* Wizard choice if statement end */
        else if (strcmp(role,"Elve")==0 || strcmp(role,"ELVE")==0 || strcmp(role,"elve")==0){
         system("cls");
         printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
         printf("\n\n\n Press Y  to start the game!\n");
         printf("\n Press any other key to return to the main menu!");

       if (toupper(getch())=='Y')
		{
            system("cls");
		    goto home;}
       else
		{
            system("cls");
            goto mainhome;}


     home:/* Home page section: score count + questions... */
     system("cls");
     count=0;/* init the count --> each correct answer = count++*/

     for(i=1;i<=3;i++)/* Training questions i=Nmbr of questions  */
     {
        r1=i;
        switch(r1)
        {
        case 1:
		  printf("\n\nA collecion of 8 bits are called?");
		  printf("\n\nA.bit\t\tB.word\n\nC.byte\t\tD.record");
		  if (toupper(getch())=='C'){
	          printf("\n\nCorrect!!!");
              count++;
			  getch();
			  system("cls");
			  break;}

        else{
	        printf("\n\nWrong!!! The correct answer is C.byte");
		    getch();
		    system("cls");
		    break;}

        case 2:
		  printf("\n\nWhich of the following is a Palindrome number?");
		  printf("\n\nA.42042\t\tB.101010\n\nC.45454\t\tD.01234");
		  if (toupper(getch())=='C'){
			    printf("\n\nCorrect!!!");
                count++;
			    getch();
			    system("cls");
			    break;}

        else{
	        printf("\n\nWrong!!! The correct answer is C.45454");
		    getch();
		    system("cls");
		    break;}

        system("cls");

        case 3:
		printf("\n\n\nWhich of the following is most oriented toward scientific programming ?");
		printf("\n\nA.Cobol\t\tB.Fortran\n\nC.c++\t\tD.Basic");

        if (toupper(getch())=='B'){
         printf("\n\nCorrect!!!");
         count++;
	  	 getch();
		 system("cls");
         break;}


        else{
           printf("\n\nWrong!!! The correct answer is B.Fortran");
	       getch();
	       system("cls");
           break;}
      }/* switch end statement */
     }/* for loop end statement */

     if(count>=2){
        goto test;}

     else{
    	system("cls");
    	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
    	getch();
    	goto mainhome;}

     test:/* eligibility 'congrat' page */
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
     {
      goto game;
     }


     game:/* game page section */
     countr=0;
     for(i=1;i<=10;i++)
     {
       system("cls");
       r=i;

     switch(r)/* here are all the real questions */
     {
		case 1:
		printf("\n\nAll are the example of input devices Except a:");
		printf("\n\nA.Scanner\t\tB.Mouse\n\nC.Printer\t\tD.Keyboard");
		if (toupper(getch())=='C')
		{
          printf("\n\nCorrect!!!");countr++;getch();
		  break;
          getch();}

        else{
          printf("\n\nWrong!!! The correct answer is C.Printer");
          getch();
		  goto score;
		  break;}


    	case 2:
		printf("\n\n\nWhat kind of file extension .mpg?,");
		printf("\n\nA.Movie file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A'){
        printf("\n\nCorrect!!!");
        countr++;
        getch();
	    break;}

    	else{
            printf("\n\nWrong!!! The correct answer is A.Movie file");
            getch();
	        goto score;
		    break;}

        case 3:
		printf("\n\n\nA DVD is an example of a/an.. ");
		printf("\n\nA.Magnetic disk\t\tB.Hard disk\n\nC.Output device\t\tD.Optical disk");
		if (toupper(getch())=='D'){
         printf("\n\nCorrect!!!");
         countr++;
         getch();
	     break;}

		else{
            printf("\n\nWrong!!! The correct answer is D.Optical disk");
            getch();
		    goto score;
		    break;}

        case 4:
		printf("\n\n\nWho is he founder of facebook?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if (toupper(getch())=='A'){
          printf("\n\nCorrect!!!");
          countr++;
          getch();
		  break;}

        else{
            printf("\n\nWrong!!! The correct answer is A.Mark zuckerburg");
            getch();
       	    goto score;
		    break;}


        case 5:
		printf("\n\n\nWhich of he following is a web browser?");
		printf("\n\nA.Dreamweaver\tB.Netscape navigator\n\nC.Maya\t\tD.Flash");
		if(toupper(getch())=='B'){
         printf("\n\nCorrect!!!");
         countr++;
         getch();
         break;}

		else{
		   printf("\n\nWrong!!! The correct answer is B.Netscape navigator");
		   getch();
		   goto score;
		   break;}

        case 6:
		printf("\n\n\nWhat kind of file extension .bak?,");
		printf("\n\nA.Backup file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A'){
         printf("\n\nCorrect!!!");
         countr++;
         getch();
         break;}

		else{
		   printf("\n\nWrong!!! The correct answer is A.Backup file");
		   getch();
		   goto score;
		   break;}

		case 7:
		printf("\n\n\nwhich of he following is a read only memory storage device ");
		printf("\n\nA.Flash drive\t\tB.Hard disk\n\nC.Floppy disk\t\tD.CDROM");
		if(toupper(getch())=='D'){
         printf("\n\nCorrect!!!");
         countr++;
         getch();
         break;}

		else
        {
		   printf("\n\nWrong!!! The correct answer is D.CDROM");
		   getch();
		   goto score;
		   break;}

        case 8:
		printf("\n\n\nThe _____ shows all the web sites any pages that you have visited one of recent time ");
		printf("\n\nA.Hisory list\t\tB.Status bar \n\nC.task bar\t\tD.record");
		if(toupper(getch())=='A'){
         printf("\n\nCorrect!!!");
         countr++;
         getch();
         break;}

		else{
		   printf("\n\nWrong!!! The correct answer is A.Hisory list");
		   getch();
		   goto score;
		   break;}

        case 9:
		printf("\n\n\nA 32 bit word computer can access ____ bytes at a time ");
		printf("\n\nA.32\t\tB.16\n\nC.8\t\tD.4");
		if(toupper(getch())=='C'){
         printf("\n\nCorrect!!!");
         countr++;
         getch();
         break;}

		else{
		   printf("\n\nWrong!!! The correct answer is C.8");
		   getch();
		   goto score;
		   break;}

        case 10:
         printf("\n\n\nWho is the founder of pixar animation?");
         printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
        if (toupper(getch()) == 'C'){
            printf("\n\nCorrect!!!");
            countr++;
            getch();
            break;}

        else{
         printf("\n\nWrong!!! The correct answer is C.Steve jobs");
         getch();
         goto score;
         break;}

		}/* switch case end */
  }/* for loop end statement */
        }/* Elve end choice statement */

    else{
         system("cls");
         printf("\n\n  Eum... I think that there is a error somewhere, please make sure that you didn't make a mistake!");
         printf("\n\t Press ANY key to restart the game\n");
         getch();
         goto mainhome;}/* neither of the two choices wizard/elve */
 } /* Dragonoids end... */

     else if (toupper(getch())=='B'){
        system("cls");
        printf("\n Eum... Nice choice %s!",playername);
        printf("\n\n They are well-known for their strength, stupidity and other stuffs");
        printf("\n\n\nOk. Now you should choose a Hero: Orc or Dwarf \n\n\t");
        gets(role);

     if (strcmp(role,"Orc")==0 || strcmp(role,"orc")==0 || strcmp(role,"ORC")==0){
         system("cls");
         printf("\n\n\tsorry... you died before the begining of the war");
         printf("\n It's not an Action Game... Orcs don't have a big brain to think, they are Evils so they don't");
         printf("\n deserve the power of THE FLAMES OF THE PHOENIX");
         printf("\n\n\t Press any other key to return to the main menu!");
         getch();
         system("cls");
         goto mainhome;}/* Orc choice end game */

     else if (strcmp(role,"dwarf")==0 || strcmp(role,"Dwarf")==0 || strcmp(role,"DWARF")==0){
        system("cls");
        printf("\n Eum... Nice choice %s!",playername);
        printf("\n\n\t Let's save RUNETERRA!!!");
        getch();
        goto home;}/* Dwarf choice end game */
     else{
            system("cls");
            printf("\n\n  Eum... I think that there is a error somewhere, please make sure that you didn't make a mistake!");
            printf("\n\t Press ANY key to restart the game\n");
            getch();
            goto mainhome;}/* neither of the two choices Dwarf/Orc*/

     }/* Gremlins end statement */
    else
    {
        system("cls");
        printf("\n\n  Eum... I think that there is a error somewhere, please Choose between A and B!");
        printf("\n\t Press ANY key to restart the game\n");
        getch();
        goto mainhome;}/* neither of the two choices A/B */


  score:/* The score page section */
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<10000)
	{
	   printf("\n\n\t\t____________________ CONGRATULATION ____________________ ");
	     printf("\n\t You won %.2f points!",score);goto go;}

	 else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t____________________ CONGRATULATION ____________________");
	    printf("\n\t\t\t\t YOU ARE A GENIUS!!!!!!!!!");
	    printf("\n\t\t You won %.2f",score);
	    printf("\t\t Thank You!!");
	}
	 else{
	    printf("\n\n\t******** SORRY YOU DIDN'T WIN ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        goto go;}

	go:/* go page section */
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}/* pressing (s) game end statements */

} /* main's end */

















