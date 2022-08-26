#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void hotseat();
void padaav_one();
void padaav_two();
void padaavaftertwo();
void correct(int);
void quit(int);
int main()
{
    int ttr,i,choice;
    unsigned int t;
    char name[20];
    system("cls");
    printf("\033[0;31m");
    printf("\n\n\t\t--------------------------------");
    printf("\n\n\t\t\t WELCOME TO\n");
    printf("\033[0;35m");
    printf("\n\t\t-------------------------------");
    printf("\n\t\t-------------------------------");
    printf("\n\t\t\t   KAUN ");
    printf("\n\t\t\t   BANEGA ");
    printf("\n\t\t\t   CROREPATI ");
    printf("\n\t\t--------------------------------");
    printf("\n\t\t--------------------------------");
    printf("\033[0;32m");
    printf("\n\n\t\t\t    GYAAN KA BHANDAAR  ") ;
    printf("\n\t\t-------------------------------------------");
    for(t=0;t<1999999999;t++);
    printf("\033[0;30m");
    system("cls");
    printf("\n\n\t\t General Instructions");
    printf("\n\n\t1.There will a TRIPLE TEST.");
    printf("\n\t2.Three questions will be asked in TRIPLE TEST.");
    printf("\n\t3.You will be eligible for hotseat round ");
    printf("only when you clear the TRIPLE TEST.");
    printf("\n\t4.You need to answer all three questions correctly.");
    printf("\n\n\tBEST OF LUCK !!!!");
    printf("\n\n\t Press S to start the game...");
    choice=toupper(getch());
    if(choice=='S')
    {
    	system("cls");
        printf("\n\n\tBe calm and take a deep breadth...");
        printf("\n\tThe game is going to be started!!!!");
        printf("\n\n\n\n\n\n\n\t\t\tEnter your name: ");
        gets(name);
        system("cls");   
        for(i=1;i<=3;i++)
        {
        	system("cls");
            ttr=i;
            switch(ttr)
		    {
		    	case 1:
		    		printf("\n\n\n\n\n\n\n");
		            printf("\t\t\tFirst question for TRIPLE TEST is on your screen now!!!");
		            for(t=0;t<1888888888;t++);
                    system("cls");
	             	printf("\n\n Which of the following is not a programming language?");
	             	printf("\n\n A.C\t\tB.Cobra\n\n C.Python\t D.Java");
	             	if(toupper(getch())=='B')
		         	{
		         		printf("\n\nYour answer is Correct!!!");
		                printf("\n\nPress any key to continue....");
		                getch();
			            break;
                    }
	            	else
	       	        {
	       	        	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		                printf("\n\n Correct answer is B.Cobra... ");
		                hotseat();
		            }
                case 2:
                	printf("\n\n\n\n\n\n\n");
		            printf("\t\t\tSecond question for TRIPLE TEST is on your screen now!!!");
		            for(t=0;t<1888888888;t++);
                    system("cls");
	               	printf("\n\n\n How many medals did INDIA won at Tokyo Olympics 2020?");
	             	printf("\n\n A.7\t\tB.6\n\n C.8\t\tD.5");
	             	if (toupper(getch())=='A')
		         	{
		         		printf("\n\nYour answer is Correct!!!");
		                printf("\n\nPress any key to continue....");
		                getch();
			            break;
		        	}
		            else
		            {
		            	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		                printf("\n\n Correct answer is A.7... ");
		                hotseat();
			        }
                case 3:
                	printf("\n\n\n\n\n\n\n");
		            printf("\t\t\tThird question for TRIPLE TEST is on your screen now!!!");
	             	for(t=0;t<1888888888;t++);
                    system("cls");
		            printf("\n\n\n In which year did second world war end?");
		            printf("\n\n A.1944\t\tB.1939\n\n C.1940\t\tD.1945");
		            if (toupper(getch())=='D')
		         	{
		         		printf("\n\nYour answer is Correct!!!");
		                printf("\n\nPress any key to continue....");
		                getch();
			            break;
			        }
		            else
		            {
		            	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		                printf("\n\n Correct answer is D.1945... ");
		                hotseat();
			        }
		    }
        }    
    }
	else
	{
		printf("\n\n\n\t INVALID CHOICE!!!!\n\n");
		exit(0);
	}
	system("cls");  
    printf("\n\n\t\tCongratulations!!!");
	printf("\n\n\t  You have cleared the TRIPPLE TEST...");
	printf("\n\n\t  You are eligible for the hotseat round");
	for(t=0;t<1888889999;t++);
	system("cls");
	printf("\n\n\tInstructions for the HOTSEAT ROUND\n");
	printf("\n 1. There will be 15 questions ranging from Rs.1000 to Rs.20000000");
	printf("\n 2. Once you answer all 15 questions correctly, ");
	printf("you will be eligible to play 'JACKPOT question'.");
	printf("\n 3. The amount for jackpot question is Rs.70000000");
	printf("\n 4. There are two padaav's in the game.");
	printf("\n 5. First padaav is on 5th ques., for Rs.16000");
	printf("\n 6. Second padaav is on 10th ques., for Rs.512000");
	printf("\n 7. You need to clear both padaav's for minimum amount of Rs.512000");
	printf("\n\n Click any key for some more important instructions...");
	getch();
	system("cls");
	printf("\n\n\tSome more important instructions\n");
	printf("\n 1. If you answer incorrectly between ques. 1 to 5, ");
	printf("you will fall down to amount zero.");
	printf("\n 2. If you answer incorrectly between ques. 6 to 10, ");
	printf("you will fall down to amount Rs.16000.");
	printf("\n 3. If you answer incorrectly between ques. 11 to 16, ");
	printf("you will fall down to amount Rs.512000.");
	printf("\n 4. You can quit the game anytime.");
	printf("\n\n  BEST OF LUCK FOR THE GAME!!!");
	printf("\n\n Press any key to start the HOTSEAT round...");
	getch();
	system("cls");
	for(i=1;i<=16;i++)
	{
		ttr=i;
		switch(i)
		{
			case 1:
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tFirst question for Rs.1000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n Durand Cup is associated with the game of?");
	           	printf("\n\n A.Cricket\t\tB.Basketball\n\n C.Football\t\tD.Hockey");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='C')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                {
                	system("cls");
                	printf("\n\n\n\tSorry you haven't won any amount!!!\n\n");
                	exit(0);
				}  
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is C.Football... ");
		            padaav_one();
				}
			case 2:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tSecond question for Rs.2000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n Which festival is known as festival of flowers?");
	           	printf("\n\n A.Onam\t\tB.Pongal\n\n C.Holi\t\tD.Makar Sankranti");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='A')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is A.Onam... ");
		            padaav_one();
				}
			case 3:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tThird question for Rs.4000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n Which continent is known as 'Dark' continent?");
	           	printf("\n\n A.Asia\t\tB.Africa\n\n C.Australia\t D.North America");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='B')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is B.Africa... ");
		            padaav_one();
				}
			case 4:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tFourth question for Rs.8000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n What is the currency of China?");
	           	printf("\n\n A.Yen\t\tB.Euro\n\n C.Taka\t\tD.Renminbi");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='D')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
				else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is D.Renminbi... ");
		            padaav_one();
				}	
			case 5:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tFifth question for Rs.16000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n The working principle of a washing machine is");
	           	printf("\n\n A.Reverse osmosis\t\tB.Diffusion\n\n C.Centrifugation\t\tD.Dialysis");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='C')
		       	{
		       		correct(i);
		       		system("cls");
		       		printf("\n\n\n\tYou have cleared first padaav...\n\n");
		       		printf("  You will surely takeaway Rs.16000 with you !!!");
		       		for(t=0;t<1888888888;t++);
                    system("cls");
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is C.Centrifugation... ");
		            padaav_one();
				}
			case 6:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tSixth question for Rs.32000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n In Banking terminology, NPA means");
	           	printf("\n\n A.Non-Promise Account\t\tB.Non-Personal Account");
				printf("\n\n C.Non-Performing Asset\t\tD.Net-performing Asset");
				printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='C')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is C.Non-Performing Asset... ");
		            padaav_two();
				}
			case 7:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tSeventh question for Rs.64000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n Who was the first Asian winner of Nobel Prize?");
	           	printf("\n\n A.Rabindranath Tagore\t\tB.C.V Raman\n\n C.Mother Teresa\t\tD.Rajiv Gandhi");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='A')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is A.Rabindranath Tagore... ");
		            padaav_two();
				}
			case 8:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tEighth question for Rs.128000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n 'Machintosh' an operating system is a product of");
	           	printf("\n\n A.Google\t\tB.Intel\n\n C.Microsoft\t\tD.Apple");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='D')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is D.Apple... ");
		            padaav_two();
				}
			case 9:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tNinth question for Rs.256000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n In India, the National Voter's Day is celebrated on");
	           	printf("\n\n A.December 17\t\tB.March 8\n\n C.January 17\t\tD.January 25");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='D')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is D.January 25... ");
		            padaav_two();
				}
			case 10:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tTenth question for Rs.512000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n Which is the largest producer and exporter of Rubber in the world?");
	           	printf("\n\n A.Thailand\t\tB.India\n\n C.Sri Lanka\t\tD.China");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='A')
		       	{
		       		correct(i);
		       		system("cls");
		       		printf("\n\n\n\tYou have cleared second padaav...\n\n");
		       		printf("  You will surely takeaway Rs.512000 with you !!!");
		       		for(t=0;t<1888888888;t++);
                    system("cls");
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is A.Thailand... ");
		            padaav_two();
				}
			case 11:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tEleventh question for Rs.1024000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n Which Indian State was earlier known as 'Magadha'?");
	           	printf("\n\n A.Madhya Pradesh\t\tB.Bihar\n\n C.Uttar Pradesh\t\tD.Maharastra");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='B')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is B.Bihar... ");
		            padaavaftertwo();
				}
			case 12:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tTwelfth question for Rs.2048000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n The first Indian Satellite 'Aryabhatta' was launched in");
	           	printf("\n\n A.1974\t\tB.1975\n\n C.1976\t\tD.1977");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='B')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is B.1975... ");
		            padaavaftertwo();
				}
			case 13:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tThirteenth question for Rs.4096000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n Which one is the first avatar of Lord Vishnu from his Dashavatar?");
	           	printf("\n\n A.Matsya\t\tB.Kurma\n\n C.Varaha\t\tD.Narasimbha");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='A')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is A.Matsya... ");
		            padaavaftertwo();
				}
			case 14:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tFourteenth question for Rs.8192000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n The 'Great Victoria Desert' is located in");
	           	printf("\n\n A.Canada\t\tB.West Africa\n\n C.Australia\t\tD.North America");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='C')
		       	{
		       		correct(i);
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is C.Australia... ");
		            padaavaftertwo();
				}
			case 15:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tFifteenth question for Rs.20000000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n Dr.APJ Abdul Kalam became the __ President of India");
	           	printf("\n\n A.9th\t\tB.10th\n\n C.11th\t\tD.12th");
	           	printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='C')
		       	{
		       		printf("\n\nCongratulations...Your answer is Correct!!!");
		       		printf("\n\nYou have won Rs.20000000!!");
		            printf("\n\nPress any key to continue....");
		            getch();
			        break;
                }
                else if(toupper(getch())=='Q')
                    quit(i);
				else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is C.11th... ");
		            padaavaftertwo();
				}	
			case 16:
				system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\tHold on! Take a deep breadth.");
				printf("\n\n\tYou are about to play the 'Jackpot Question'.");
				printf("\n\n  Press any key to continue....");
		        getch();
		        system("cls");
				printf("\n\n\n\n\n\n\n");
				printf("\t\t\tJackpot question for Rs.70000000 is on your screen now!!!");
				for(t=0;t<1888888888;t++);
                system("cls");
	            printf("\n\n Who invented the mathematical symbol for 'infinity'?");
	           	printf("\n\n A.Srinivasa Ramanujan\t\tB.Carl Friedrich Gauss");
				printf("\n\n C.John Wallis\t\t\tD.Pierre de Fermat");
				printf("\n\n If you want to quit, press Q!!");
	           	if(toupper(getch())=='C')
		       	{
		       		printf("\n\nCongratulations...Your answer is Correct!!!");
		       		printf("\n\nYou have won Rs.70000000!!");
		       		for(t=0;t<1888888888;t++);
                    system("cls");
                    printf("\n\n\n\n\n");
                    printf("\033[0;31m");
                    printf("\tYou are our new crorepati!!\n\n");
                    printf("  Congratulations for the amazing game you played today...\n\n");
		            exit(0);
			        break;
                }
                else if(toupper(getch())=='Q')
                {
                	system("cls");
                	printf("\n\n\n\t You have quit the game...\n\n");
                	printf("  Congratulations!! You have won Rs.20000000...\n\n");
                	exit(0);
				}
                else
                {
                	printf("\n\n  Ohh!!! That's INCORRECT!!!'");
		            printf("\n\n Correct answer is C.John Wallis... ");
		            padaavaftertwo();
				}
		}	
	}
	return 0;
}
void hotseat()
{
	unsigned int t;
	for(t=0;t<1888888888;t++);
	system("cls");
    printf("\n\n\n\n");
    printf("\t Sorry You are not eligible for the hotseat round !!!\n\n");
    exit(0);
}
void padaav_one()
{
	unsigned int t;
	for(t=0;t<1888888888;t++);
	system("cls");
	printf("\n\n\n\n");
	printf(" Sorry!! You fall down to amount zero...\n");
	printf("But we wish you best of luck for your future endeavors!!\n\n");
	exit(0);
}
void padaav_two()
{
	unsigned int t;
	for(t=0;t<1888888888;t++);
	system("cls");
	printf("\n\n\n\n");
	printf(" Sorry!! You fall down to amount 16000...\n\n");
	printf("But we wish you best of luck for your future endeavors!!\n\n");
	exit(0);
}
void padaavaftertwo()
{
	unsigned int t;
	for(t=0;t<1888888888;t++);
	system("cls");
	printf("\n\n\n\n");
	printf("\tSorry!! You fall down to amount 512000...\n\n");
	printf("\tThat's quite painful!!!\n\n");
	printf("  But we wish you best of luck for your future endeavors!!\n\n");
	exit(0);
}
void correct(int n)
{
	int z=pow(2,n-1);
	printf("\n\nCongratulations...Your answer is Correct!!!");
	printf("\n\nYou have won Rs.%d000!!",z);
	printf("\n\nPress any key to continue....");
    getch();
}
void quit(int n)
{
	system("cls");
	int z=pow(2,n-2);
	printf("\n\n\n\t You have quit the game...\n\n");
    printf("  Congratulations!! You have won Rs.%d000...\n\n",z);
    exit(0);
}
