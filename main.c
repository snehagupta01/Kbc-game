#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include<ctype.h>
#include <windows.h>
#include <process.h>
#include <time.h>

void start();
void detail();
void gotoxy(int x, int y);
void rule();
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();
int n;
char str[100];
char *set1[]={"Which two of these are essentials of analytical skills ?","Which pair of analytical skills are critical at work","Which of the following are success Mantras?","How can one improve analytical thinking?","What are the common analytical tools?","A person applies for a job,but need to improve his skills that are required for CS job. Choose the correct skills he need to improve.","What is the correct apprach for analytical thinking?"};
char *set2[]={"Which of these is true about brainstorming?","What are advantages of reading books?","Which of the following are correct steps to streamline?","What are the types of troubleshooting?","What does confidence as a success mantra lead to?","What are two of the 7S's?","What does SWOT analysis include?"};
char *set3[]={"What are these is one of the 7Ss?","How does being observant helps to improve analytical thinking skills?","What type of mathematics is the most important for pursuing CSE job?","Which of these success mantras helps create positive bonds among people?","What does SWOT analysis include?","Which two of these are essentials of analytical skills ?","Which pair of analytical skills are critical at work?"};
char *set4[]={"Which of these are creative thinking skills?","What does playing brain games improve?","Which two systems deal with hardware part of a computer system in CSE?","Which of these cannot be counted as common analytic tools?","What does a streamlined process indicates?","Which two of these are essentials of analytical skills ?","What are these is one of the 7Ss?"};
int main()
{
    time_t t;
    srand((unsigned) time(&t));
    detail();
    start();

    system("cls");
    int randomnumber,i,price=0;
    unsigned long long total_price=0;
    randomnumber=rand()%5;
    //randomnumber=0;
    //printf("\n%d\n",randomnumber);
    rule();
    FILE *fp=fopen("record.txt","a+");
    char ch1,ch2,ch3;
    switch(randomnumber)
    {
        case 0://set1
        //printf("1");
        gotoxy(38,10);
        printf("So here comes the question 1");
        //ans-a and d
        f1();
        gotoxy(38,11);
        printf("---------------------------------------------------------");
        gotoxy(38,12);
        SetColor(14);
        printf("%s",set1[0]);
        gotoxy(38,13);
        printf("---------------------------------------------------------");
        gotoxy(38,14);
        //textcolor(RED);
        SetColor(15);
        printf("(a) Creativity ");
        gotoxy(38,15);
        printf("(b) Determination ");
        gotoxy(38,16);
        printf("(c) Logic ");
        gotoxy(38,17);
        printf("(d) Research ");
        gotoxy(38,18);
        printf("---------------------------------------------------------");
        gotoxy(38,19);
        printf("Enter your answer : ");
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,20);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=10000;
                total_price=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();

                    gotoxy(38,10);
        printf("So here comes the question 2");
        f2();//ans-b,c
        gotoxy(38,11);
        printf("---------------------------------------------------------");
        gotoxy(38,12);
        SetColor(14);
        printf("%s",set1[1]);
        gotoxy(38,13);
        printf("---------------------------------------------------------");
        gotoxy(38,14);
        SetColor(15);
        printf("(a) Identifying trends and communication ");
        gotoxy(38,15);
        printf("(b) Solving complex problems and streamlining process ");
        gotoxy(38,16);
        printf("(c) Gathering information and reporting ");
        gotoxy(38,17);
        printf("(d) Bird eye view and applying program ");
        gotoxy(38,18);
        printf("---------------------------------------------------------");
        gotoxy(38,19);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,20);
        printf("---------------------------------------------------------");
        if((ch1=='c'&&ch2=='b')||(ch1=='b'&&ch2=='c'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                total_price*=10;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                rule();
                    gotoxy(38,10);
                    SetColor(14);
        printf("So here comes the question 3");
        f3();//ans-b,c
         gotoxy(38,11);
        printf("---------------------------------------------------------");
        gotoxy(38,12);
        printf("%s",set1[2]);
        gotoxy(38,13);
        printf("---------------------------------------------------------");
        gotoxy(38,14);
        SetColor(15);
        printf("(a) Communication ");
        gotoxy(38,15);
        printf("(b) Laughter ");
        gotoxy(38,16);
        printf("(c) Respect ");
        gotoxy(38,17);
        printf("(d) Creativity ");
        gotoxy(38,18);
        printf("---------------------------------------------------------");
        gotoxy(38,19);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,20);
        printf("---------------------------------------------------------");
        if((ch1=='c'&& ch2=='b')||(ch1=='b'&&ch2=='c'))
            {
               gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                //price=10000;
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,10);
        printf("So here comes the question 4");//ans--a,d
        f4();
         gotoxy(38,11);
        printf("---------------------------------------------------------");
        gotoxy(38,12);
        SetColor(14);
        printf("%s",set1[3]);
        gotoxy(38,13);
        printf("---------------------------------------------------------");
        gotoxy(38,14);
        SetColor(15);
        printf("(a) Reading books  ");
        gotoxy(38,15);
        printf("(b) By solving complex problems ");
        gotoxy(38,16);
        printf("(c) By playing sports  ");
        gotoxy(38,17);
        printf("(d) By playing brain games ");
        gotoxy(38,18);
        printf("---------------------------------------------------------");
        gotoxy(38,19);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,20);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,10);
        printf("So here comes the question 5");//ans--b,c
        f5();
         gotoxy(38,11);
        printf("---------------------------------------------------------");
        gotoxy(38,12);
        SetColor(14);
        printf("%s",set1[4]);
        gotoxy(38,13);
        printf("---------------------------------------------------------");
        gotoxy(38,14);
        SetColor(15);
        printf("(a) Skeletal diagram   ");
        gotoxy(38,15);
        printf("(b) Benchmarking ");
        gotoxy(38,16);
        printf("(c) Affinity diagram  ");
        gotoxy(38,17);
        printf("(d) Flowchart ");
        gotoxy(38,18);
        printf("---------------------------------------------------------");
        gotoxy(38,19);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,20);
        printf("---------------------------------------------------------");
        if((ch1=='b'&& ch2=='c')||(ch1=='b'&&ch2=='c'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,10);
        printf("So here comes the question 6");//ans-a,d
        f6();
         gotoxy(38,11);
        printf("---------------------------------------------------------");
        gotoxy(38,12);
        SetColor(14);
        printf("%s",set1[5]);
        gotoxy(38,13);
        printf("---------------------------------------------------------");
        gotoxy(38,14);
        SetColor(15);
        printf("(a) Management   ");
        gotoxy(38,15);
        printf("(b) Data-analysis ");
        gotoxy(38,16);
        printf("(c) Deductive Reasoning  ");
        gotoxy(38,17);
        printf("(d) Troubleshooting ");
        gotoxy(38,18);
        printf("---------------------------------------------------------");
        gotoxy(38,19);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,20);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,10);
        printf("So here comes the question 7");//ans-b,c
        f7();
         gotoxy(38,11);
        printf("---------------------------------------------------------");
        gotoxy(38,12);
        SetColor(14);
        printf("%s",set1[0]);
        gotoxy(38,13);
        printf("---------------------------------------------------------");
        gotoxy(38,14);
        SetColor(15);
        printf("(a) Gathering information ");
        gotoxy(38,15);
        printf("(b) Bird eye view to problems ");
        gotoxy(38,16);
        printf("(c) Applying concepts ");
        gotoxy(38,17);
        printf("(d) Summarising statistical data ");
        gotoxy(38,18);
        printf("---------------------------------------------------------");
        gotoxy(38,19);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,20);
        printf("---------------------------------------------------------");
                    if((ch1=='b'&& ch2=='c')||(ch1=='c'&&ch2=='b'))
                    {
                        price=total_price;
                total_price*=10;
                total_price+=price;
                        //answering question 7 correctly
                        gotoxy(38,22);
                        printf("CONGRATULATIONS YOU ANSWERED ALL THE QUESTIONS CORRECTLY");
                        gotoxy(38,23);
                        printf("Your current amount is : %llu \n",total_price);
                        gotoxy(38,24);
                    printf("THANKS FOR PLAYING");
                    break;
                    }
                    else{
                        //after answering question 7 incorrectly
                        system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                    }

                }

                else
                {//after answering question 6 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else{
                //after answering question6 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering question5 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
                else{
                    //after answering question5 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                }
                }

                else
                {//after answering question4 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");

                    break;
                }

            }
                else{
                    //after answering question 4 incorrectly
                     system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                }
                }

                else
                {
                    //after answering question3 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;

                }

            }
            else{
                //after answering question3 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering question2 correctly he/she quits..
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else{//when question2 answer goes wrong
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering 1st question he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else
            {//when 1st quest answer goes wrong
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("SORRY YOUR PRIZE MONEY IS : 0 ");
                break;
            }
            break;

            case 1://set2
            //printf("2");
        gotoxy(38,11);
        printf("So here comes the question 1");
        f1();//ans--a,c
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set2[0]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a)It is a group creativity technique. ");
        gotoxy(38,16);
        printf("(b) It focusses on applying programing");
        gotoxy(38,17);
        printf("(c) It is an individual skill development technique");
        gotoxy(38,18);
        printf("(d) Conclusion is focussed by gathering list of ideas ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='c')||(ch1=='c'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=10000;
                total_price=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,11);
        printf("So here comes the question 2");
        f2();//ans-a,d
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set2[1]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Helps articulate thoughts");
        gotoxy(38,16);
        printf("(b) Enhance leadership skills ");
        gotoxy(38,17);
        printf("(c) Help building one's concept");
        gotoxy(38,18);
        printf("(d) Increase verbal skills ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&&ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");

                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 3");//ans-a,d
        f3();
        gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set2[2]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Prioritize work");
        gotoxy(38,16);
        printf("(b) Analytical errors ");
        gotoxy(38,17);
        printf("(c) Searching ");
        gotoxy(38,18);
        printf("(d) Be ready to adjust ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 4");//ans-c,d
        f4();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set2[3]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Telnet");
        gotoxy(38,16);
        printf("(b) Nmap ");
        gotoxy(38,17);
        printf("(c) Netstat ");
        gotoxy(38,18);
        printf("(d) Subnet ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='c'&& ch2=='d')||(ch1=='d'&&ch2=='c'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");

                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 5");
        f5();//ans-b,c
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set2[4]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Enhancing writing skills");
        gotoxy(38,16);
        printf("(b) Development of organization ");
        gotoxy(38,17);
        printf("(c) Perform basic functions of management");
        gotoxy(38,18);
        printf("(d) Showcasing inactivity  ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='b'&& ch2=='c')||(ch1=='c'&&ch2=='b'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,11);
        printf("So here comes the question 6");//ans-a,b
        f6();
        gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set2[5]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Strategy");
        gotoxy(38,16);
        printf("(b) Staff");
        gotoxy(38,17);
        printf("(c) Symbol ");
        gotoxy(38,18);
        printf("(d) Stream ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='b')||(ch1=='b'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");

                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 7");//ans--a,c
        f7();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set2[6]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Weakness");
        gotoxy(38,16);
        printf("(b) Socialising ");
        gotoxy(38,17);
        printf("(c) Threats");
        gotoxy(38,18);
        printf("(d) Thinking ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
                    if((ch1=='a'&& ch2=='c')||(ch1=='c'&&ch2=='a'))
                    {
                        price=total_price;
                total_price*=10;
                total_price+=price;
                        //answering question 7 correctly
                        gotoxy(38,16);
                        printf("CONGRATULATIONS YOU ANSWERED ALL THE QUESTIONS CORRECTLY");
                        gotoxy(38,17);
                        printf("Your current amount is : %llu \n",total_price);
                        gotoxy(38,18);
                    printf("THANKS FOR PLAYING");
                    break;
                    }
                    else{
                        //after answering question 7 incorrectly
                        system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                    }

                }

                else
                {//after answering question 6 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else{
                //after answering question6 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering question5 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
                else{
                    //after answering question5 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                }
                }

                else
                {//after answering question4 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");

                    break;
                }

            }
                else{
                    //after answering question 4 incorrectly
                     system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                }
                }

                else
                {
                    //after answering question3 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;

                }

            }
            else{
                //after answering question3 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering question2 correctly he/she quits..
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else{//when question2 answer goes wrong
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering 1st question he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else
            {//when 1st quest answer goes wrong
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("SORRY YOUR PRIZE MONEY IS : 0 ");
                break;
            }
            break;

            case 2://set3
            //printf("3");
        gotoxy(38,11);
        printf("So here comes the question 1");
        f1();//ans-c,d
        gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set3[0]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Strategy");
        gotoxy(38,16);
        printf("(b) Staff ");
        gotoxy(38,17);
        printf("(c) Symbol");
        gotoxy(38,18);
        printf("(d) Stream");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='c'&& ch2=='d')||(ch1=='d'&&ch2=='c'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=10000;
                total_price=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,11);
        printf("So here comes the question 2");//ans-b,d
        f2();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set3[1]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Improves speaking skills");
        gotoxy(38,16);
        printf("(b) Flexibility of thinking ");
        gotoxy(38,17);
        printf("(c) Smarter decision making");
        gotoxy(38,18);
        printf("(d) Enhanced listening skills ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='b'&&ch2=='d')||(ch1=='d'&&ch2=='b'))
            {
               gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");

                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 3");//ans-a,d
        f3();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set3[2]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Discrete Maths");
        gotoxy(38,16);
        printf("(b) Partial differentiation");
        gotoxy(38,17);
        printf("(c) Data Handling");
        gotoxy(38,18);
        printf("(d) Statistics");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 4");//ans-b,c
        f4();
        gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set3[3]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Confidence");
        gotoxy(38,16);
        printf("(b) Laughter ");
        gotoxy(38,17);
        printf("(c) Respect");
        gotoxy(38,18);
        printf("(d) Logic ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='b'&& ch2=='c')||(ch1=='c'&&ch2=='b'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 5");//ans-a,c
        f5();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set3[4]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Weaknesses");
        gotoxy(38,16);
        printf("(b) Socialising");
        gotoxy(38,17);
        printf("(c) Threats");
        gotoxy(38,18);
        printf("(d) Thinking");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='c')||(ch1=='c'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);

                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,11);
        printf("So here comes the question 6");
        f6();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set3[5]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Creativity ");
        gotoxy(38,16);
        printf("(b) Determination ");
        gotoxy(38,17);
        printf("(c) Logic ");
        gotoxy(38,18);
        printf("(d) Research ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a')||(ch1!=ch2))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 7");//ans-b,c
        f7();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set3[6]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Identifying trends and communication ");
        gotoxy(38,16);
        printf("(b) Solving complex problems and streamlining process ");
        gotoxy(38,17);
        printf("(c) Gathering information and reporting ");
        gotoxy(38,18);
        printf("(d) Bird eye view and applying program ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
                    if((ch1=='b'&& ch2=='c')||(ch1=='c'&&ch2=='b'))
                    {
                        price=total_price;
                total_price*=10;
                total_price+=price;
                        //answering question 7 correctly
                        gotoxy(38,23);
                        printf("CONGRATULATIONS YOU ANSWERED ALL THE QUESTIONS CORRECTLY");
                        gotoxy(38,24);
                        printf("Your current amount is : %llu \n",total_price);
                        gotoxy(38,25);
                    printf("THANKS FOR PLAYING");
                    break;
                    }
                    else{
                        //after answering question 7 incorrectly
                        system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                    }

                }

                else
                {//after answering question 6 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else{
                //after answering question6 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering question5 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
                else{
                    //after answering question5 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                }
                }

                else
                {//after answering question4 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");

                    break;
                }

            }
                else{
                    //after answering question 4 incorrectly
                     system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                }
                }

                else
                {
                    //after answering question3 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;

                }

            }
            else{
                //after answering question3 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering question2 correctly he/she quits..
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else{//when question2 answer goes wrong
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering 1st question he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else
            {//when 1st quest answer goes wrong
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("SORRY YOUR PRIZE MONEY IS : 0 ");
                break;
            }
            break;

            case 3://set4
               // printf("4");
        gotoxy(38,11);
        printf("So here comes the question 1");//ans-a,c
        f1();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set4[0]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Open minded");
        gotoxy(38,16);
        printf("(b) Management ");
        gotoxy(38,17);
        printf("(c) Artistic Creativity");
        gotoxy(38,18);
        printf("(d) Canvas skills ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='c')||(ch1=='c'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=10000;
                total_price=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,11);
        printf("So here comes the question 2");//ans-a,d
        f2();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set4[1]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Executive functions");
        gotoxy(38,16);
        printf("(b) Physical health");
        gotoxy(38,17);
        printf("(c) Vocabulary");
        gotoxy(38,18);
        printf("(d) Processing speed");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&&ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");

                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %d \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 3");//ans-b,c
        f3();
        gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set4[2]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Pre-processors");
        gotoxy(38,16);
        printf("(b) Computer Organisation");
        gotoxy(38,17);
        printf("(c) Digital Logic Design");
        gotoxy(38,18);
        printf("(d) USB cable ports");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='b'&& ch2=='c')||(ch1=='c'&&ch2=='b'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");

                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 4");//ans-a,d
        f4();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set4[3]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Flow charts	");
        gotoxy(38,16);
        printf("(b) Affinity Diagrams");
        gotoxy(38,17);
        printf("(c) Benchmarking");
        gotoxy(38,18);
        printf("(d) Troubleshooting");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                total_price*=10;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 5");//ans-a,b
        f5();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set4[4]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Fewer errors");
        gotoxy(38,16);
        printf("(b) Less delays	");
        gotoxy(38,17);
        printf("(c) More creativity");
        gotoxy(38,18);
        printf("(d) Less problem solving skills ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='b')||(ch1=='b'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
               price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);

                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,11);
        printf("So here comes the question 6");//ans-a,d
        f6();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set4[5]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Creativity ");
        gotoxy(38,16);
        printf("(b) Determination ");
        gotoxy(38,17);
        printf("(c) Logic ");
        gotoxy(38,18);
        printf("(d) Research ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                total_price*=10;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 7");//ans-c,d
        f7();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set4[6]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Strategy");
        gotoxy(38,16);
        printf("(b) Staff ");
        gotoxy(38,17);
        printf("(c) Symbol");
        gotoxy(38,18);
        printf("(d) Stream");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
                    if((ch1=='b'&& ch2=='a')||(ch1=='a'&&ch2=='b'))
                    {
                        price=total_price;
                total_price*=10;
                total_price+=price;
                        //answering question 7 correctly
                        gotoxy(38,16);
                        printf("CONGRATULATIONS YOU ANSWERED ALL THE QUESTIONS CORRECTLY");
                        gotoxy(38,17);
                        printf("Your current amount is : %llu \n",total_price);
                        gotoxy(38,18);
                    printf("THANKS FOR PLAYING");
                    break;
                    }
                    else{
                        //after answering question 7 incorrectly
                        system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                    }

                }

                else
                {//after answering question 6 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else{
                //after answering question6 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering question5 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
                else{
                    //after answering question5 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                }
                }

                else
                {//after answering question4 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");

                    break;
                }

            }
                else{
                    //after answering question 4 incorrectly
                     system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                }
                }

                else
                {
                    //after answering question3 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;

                }

            }
            else{
                //after answering question3 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering question2 correctly he/she quits..
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else{//when question2 answer goes wrong
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering 1st question he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else
            {//when 1st quest answer goes wrong
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("SORRY YOUR PRIZE MONEY IS : 0 ");
                break;
            }
            break;

            case 4://set5
                gotoxy(38,11);
        printf("So here comes the question 1");//ans-a and d
        f1();
        gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set1[0]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        //textcolor(RED);
        SetColor(15);
        printf("(a) Creativity ");
        gotoxy(38,16);
        printf("(b) Determination ");
        gotoxy(38,17);
        printf("(c) Logic ");
        gotoxy(38,18);
        printf("(d) Research ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=10000;
                total_price=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,11);
        printf("So here comes the question 2");//ans-b,c
        f2();
        gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set1[1]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Identifying trends and communication ");
        gotoxy(38,16);
        printf("(b) Solving complex problems and streamlining process ");
        gotoxy(38,17);
        printf("(c) Gathering information and reporting ");
        gotoxy(38,18);
        printf("(d) Bird eye view and applying program ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='c'&&ch2=='b')||(ch1=='b'&&ch2=='c'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 3");//ans-b,c
        f3();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set1[2]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Communication ");
        gotoxy(38,16);
        printf("(b) Laughter ");
        gotoxy(38,17);
        printf("(c) Respect ");
        gotoxy(38,18);
        printf("(d) Creativity ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='c'&& ch2=='b')||(ch1=='b'&&ch2=='c'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 4");//ans--a,d
        f4();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set1[3]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Reading books  ");
        gotoxy(38,16);
        printf("(b) By solving complex problems ");
        gotoxy(38,17);
        printf("(c) By playing sports  ");
        gotoxy(38,18);
        printf("(d) By playing brain games ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a'))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 5");//ans--b,c
        f5();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set1[4]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Skeletal diagram   ");
        gotoxy(38,16);
        printf("(b) Benchmarking ");
        gotoxy(38,17);
        printf("(c) Affinity diagram  ");
        gotoxy(38,18);
        printf("(d) Flowchart ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='b'&& ch2=='c')||(ch1=='b'&&ch2=='c'))
            {
               gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
               price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu\n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);

                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
                    rule();
                    gotoxy(38,11);
        printf("So here comes the question 6");//ans-a,d
        f6();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set1[5]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Management   ");
        gotoxy(38,16);
        printf("(b) Data-analysis ");
        gotoxy(38,17);
        printf("(c) Deductive Reasoning  ");
        gotoxy(38,18);
        printf("(d) Troubleshooting ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
        if((ch1=='a'&& ch2=='d')||(ch1=='d'&&ch2=='a')||(ch1!=ch2))
            {
                gotoxy(38,22);
                printf("So you got the correct answer .. Congratulations..");
                price=total_price;
                total_price*=10;
                total_price+=price;
                gotoxy(38,23);
                printf("==================================================");
                gotoxy(38,24);
                printf("Your current amount is : %llu \n",total_price);
                gotoxy(38,25);
                printf("==================================================");
                gotoxy(38,26);
                printf("Do you want to continue ? (Press y/Y to continue)\n");
                gotoxy(38,28);
                fflush(stdin);
                scanf("%c",&ch3);
                if(ch3=='y'||ch3=='Y')
                {
                    system("cls");
rule();
                    gotoxy(38,11);
        printf("So here comes the question 7");//ans-b,c
        f7();
         gotoxy(38,12);
        printf("---------------------------------------------------------");
        gotoxy(38,13);
        SetColor(14);
        printf("%s",set1[0]);
        gotoxy(38,14);
        printf("---------------------------------------------------------");
        gotoxy(38,15);
        SetColor(15);
        printf("(a) Gathering information ");
        gotoxy(38,16);
        printf("(b) Bird eye view to problems ");
        gotoxy(38,17);
        printf("(c) Applying concepts ");
        gotoxy(38,18);
        printf("(d) Summarising statistical data ");
        gotoxy(38,19);
        printf("---------------------------------------------------------");
        gotoxy(38,20);
        printf("Enter your answer : ");
        fflush(stdin);
        scanf("%c %c",&ch1,&ch2);
        gotoxy(38,21);
        printf("---------------------------------------------------------");
                    if((ch1=='b'&& ch2=='c')||(ch1=='c'&&ch2=='b'))
                    {
                        price=total_price;
                total_price*=10;
                total_price+=price;
                        //answering question 7 correctly
                        gotoxy(38,23);
                        printf("CONGRATULATIONS YOU ANSWERED ALL THE QUESTIONS CORRECTLY");
                        gotoxy(38,24);
                        printf("Your current amount is : %llu \n",total_price);
                        gotoxy(38,25);
                    printf("THANKS FOR PLAYING");
                    break;
                    }
                    else{
                        //after answering question 7 incorrectly
                        system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                    }

                }

                else
                {//after answering question 6 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else{
                //after answering question6 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering question5 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
                else{
                    //after answering question5 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                }
                }

                else
                {//after answering question4 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");

                    break;
                }

            }
                else{
                    //after answering question 4 incorrectly
                     system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
                }
                }

                else
                {
                    //after answering question3 correctly he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;

                }

            }
            else{
                //after answering question3 incorrectly
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering question2 correctly he/she quits..
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else{//when question2 answer goes wrong
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("YOUR PRIZE MONEY IS : %llu ",total_price);
                gotoxy(38,10);
                printf("THANKS FOR PLAYING");
                    break;
            }
                }

                else
                {//after answering 1st question he/she quits
                    system("cls");
                    gotoxy(38,6);
                    printf("CONGRATULATIONS YOU WIN %llu RUPEES",total_price);
                    gotoxy(38,8);
                    printf("THANKS FOR PLAYING");
                    break;
                }

            }
            else
            {//when 1st quest answer goes wrong
                system("cls");
                gotoxy(38,6);
                printf("OOPS...WRONG ANSWER...");
                gotoxy(38,8);
                printf("SORRY YOUR PRIZE MONEY IS : 0 ");
                break;
            }
            break;

    }
    fprintf(fp," %s                             %llu\n",str,total_price);
    fclose(fp);
}
void rule(){
    system("cls");
    SetColor(11);
gotoxy(0,2);
printf("---------------------------------------------------------------------------------------------------------------------------------------");
gotoxy(0,3);
printf("---------------------------------------------------------------------------------------------------------------------------------------");
gotoxy(0,6);
printf("---------------------------------------------------------------------------------------------------------------------------------------");
gotoxy(0,7);
printf("---------------------------------------------------------------------------------------------------------------------------------------");
gotoxy(38,5);
printf("<<<<<  KBC - 2019 >>>>> ");
gotoxy(80,5);
printf("USER NAME : %s ",str);
SetColor(8);
gotoxy(32,8);
printf("|");
gotoxy(32,9);
printf("|");
gotoxy(32,10);
printf("|");
gotoxy(32,11);
printf("|");
gotoxy(32,12);
printf("|");
gotoxy(32,13);
printf("|");
gotoxy(32,14);
printf("|");
gotoxy(32,15);
printf("|");
gotoxy(32,16);
printf("|");
gotoxy(32,17);
printf("|");
gotoxy(32,18);
printf("|");
gotoxy(32,19);
printf("|");
gotoxy(32,20);
printf("|");
gotoxy(32,21);
printf("|");
gotoxy(32,22);
printf("|");
gotoxy(32,23);
printf("|");
gotoxy(32,24);
printf("|");
gotoxy(32,25);
printf("|");
gotoxy(32,26);
printf("|");
gotoxy(32,27);
printf("|");
gotoxy(32,28);
printf("|");
gotoxy(32,29);
printf("|");

gotoxy(1,8);
SetColor(3);
printf(" << RULES AND REGULATIONS >>");
gotoxy(1,9);
printf("-------------------------------");
gotoxy(1,10);
printf("-------------------------------");
gotoxy(1,11);
SetColor(1);
printf("RULE 1 : ");
gotoxy(1,12);
printf("TOTAL - 7 QUESTIONS");
gotoxy(1,13);
printf("-------------------------------");
gotoxy(1,14);
SetColor(13);
printf("RULE 2 : ");
gotoxy(1,15);
printf("First question is of Rs 10000.");
gotoxy(1,16);
printf("-------------------------------");
gotoxy(1,17);
SetColor(3);
printf("RULE 3 : ");
gotoxy(1,18);
printf("Each correct answer will * your");
gotoxy(1,19);
printf("current amount by 10");
gotoxy(1,20);
printf("-------------------------------");
gotoxy(1,21);
SetColor(14);
printf("RULE 4 : ");
gotoxy(1,22);
printf("Wrong answer will take you out");
gotoxy(1,23);
printf("of the game");
gotoxy(1,24);
printf("-------------------------------");
gotoxy(1,25);
printf("Questions in the game include");
gotoxy(1,26);
printf("the following topics : ");
gotoxy(1,27);
SetColor(10);
printf("Common Analytic Tools");
gotoxy(1,28);
SetColor(11);
printf("Essentials of Analytic Tools");
gotoxy(1,29);
SetColor(12);
printf("Analytical approach steps");
gotoxy(1,30);
printf("-------------------------------");
gotoxy(1,35);
return;
}
void f1()
{
SetColor(15);
gotoxy(109,10);
printf("==========================");
gotoxy(110,11);
printf("** LEVEL REACHED **");
gotoxy(110,12);
printf("=========================");
gotoxy(109,11);
printf("|");
gotoxy(109,12);
printf("|");
gotoxy(109,13);
printf("|");
gotoxy(109,14);
printf("|");
gotoxy(109,15);
printf("|");
gotoxy(109,16);
printf("|");
gotoxy(109,17);
printf("|");
gotoxy(109,18);
printf("|");
gotoxy(109,19);
printf("|");
gotoxy(109,20);
printf("|");
gotoxy(109,21);
printf("|");
gotoxy(109,22);
printf("|");
gotoxy(109,23);
printf("|");
gotoxy(109,24);
printf("|");
gotoxy(109,25);
printf("|");
gotoxy(109,26);
printf("|");
gotoxy(110,14);
printf("10,00,00,00,000");//1
gotoxy(110,15);
printf("-------------------------");
gotoxy(110,16);
printf("1,00,00,00,000");//2
gotoxy(110,17);
printf("-------------------------");
gotoxy(110,18);
printf("10,00,00,000");//3
gotoxy(110,19);
printf("-------------------------");
gotoxy(110,20);
printf("1,00,00,000");//4
gotoxy(110,21);
printf("-------------------------");
gotoxy(110,22);
printf("10,00,000");//5
gotoxy(110,23);
printf("-------------------------");
gotoxy(110,24);
printf("1,00,000");//6
gotoxy(110,25);
printf("-------------------------");
gotoxy(110,26);
SetColor(5);
printf("10,000");
SetColor(15);
gotoxy(110,27);
printf("--------------------------");
}
void f2()
{
SetColor(15);
gotoxy(109,10);
printf("==========================");
gotoxy(110,11);
printf("** LEVEL REACHED **");
gotoxy(110,12);
printf("=========================");
gotoxy(109,11);
printf("|");
gotoxy(109,12);
printf("|");
gotoxy(109,13);
printf("|");
gotoxy(109,14);
printf("|");
gotoxy(109,15);
printf("|");
gotoxy(109,16);
printf("|");
gotoxy(109,17);
printf("|");
gotoxy(109,18);
printf("|");
gotoxy(109,19);
printf("|");
gotoxy(109,20);
printf("|");
gotoxy(109,21);
printf("|");
gotoxy(109,22);
printf("|");
gotoxy(109,23);
printf("|");
gotoxy(109,24);
printf("|");
gotoxy(109,25);
printf("|");
gotoxy(110,14);
printf("10,00,00,00,000");//1
gotoxy(110,15);
printf("-------------------------");
gotoxy(110,16);
printf("1,00,00,00,000");//2
gotoxy(110,17);
printf("-------------------------");
gotoxy(110,18);
printf("10,00,00,000");//3
gotoxy(110,19);
printf("-------------------------");
gotoxy(110,20);
printf("1,00,00,000");//4
gotoxy(110,21);
printf("-------------------------");
gotoxy(110,22);
printf("10,00,000");//5
gotoxy(110,23);
printf("-------------------------");
gotoxy(110,24);
SetColor(5);
printf("1,00,000");//6
gotoxy(110,25);
printf("-------------------------");
gotoxy(110,26);
SetColor(15);
printf("10,000");
gotoxy(109,27);
printf("--------------------------");
}
void f3()
{
SetColor(15);
gotoxy(109,10);
printf("==========================");
gotoxy(110,11);
printf("** LEVEL REACHED **");
gotoxy(110,12);
printf("=========================");
gotoxy(109,11);
printf("|");
gotoxy(109,12);
printf("|");
gotoxy(109,13);
printf("|");
gotoxy(109,14);
printf("|");
gotoxy(109,15);
printf("|");
gotoxy(109,16);
printf("|");
gotoxy(109,17);
printf("|");
gotoxy(109,18);
printf("|");
gotoxy(109,19);
printf("|");
gotoxy(109,20);
printf("|");
gotoxy(109,21);
printf("|");
gotoxy(109,22);
printf("|");
gotoxy(109,23);
printf("|");
gotoxy(109,24);
printf("|");
gotoxy(109,25);
printf("|");
gotoxy(110,14);
printf("10,00,00,00,000");//1
gotoxy(110,15);
printf("-------------------------");
gotoxy(110,16);
printf("1,00,00,00,000");//2
gotoxy(110,17);
printf("-------------------------");
gotoxy(110,18);
printf("10,00,00,000");//3
gotoxy(110,19);
printf("-------------------------");
gotoxy(110,20);
printf("1,00,00,000");//4
gotoxy(110,21);
printf("-------------------------");
gotoxy(110,22);
SetColor(5);
printf("10,00,000");//5
gotoxy(110,23);
printf("-------------------------");
gotoxy(110,24);
SetColor(15);
printf("1,00,000");//6
gotoxy(110,25);
printf("-------------------------");
gotoxy(110,26);
printf("10,000");
gotoxy(109,27);
printf("--------------------------");
}
void f4()
{
SetColor(15);
gotoxy(109,10);
printf("==========================");
gotoxy(110,11);
printf("** LEVEL REACHED **");
gotoxy(110,12);
printf("=========================");
gotoxy(109,11);
printf("|");
gotoxy(109,12);
printf("|");
gotoxy(109,13);
printf("|");
gotoxy(109,14);
printf("|");
gotoxy(109,15);
printf("|");
gotoxy(109,16);
printf("|");
gotoxy(109,17);
printf("|");
gotoxy(109,18);
printf("|");
gotoxy(109,19);
printf("|");
gotoxy(109,20);
printf("|");
gotoxy(109,21);
printf("|");
gotoxy(109,22);
printf("|");
gotoxy(109,23);
printf("|");
gotoxy(109,24);
printf("|");
gotoxy(109,25);
printf("|");
gotoxy(110,14);
printf("10,00,00,00,000");//1
gotoxy(110,15);
printf("-------------------------");
gotoxy(110,16);
printf("1,00,00,00,000");//2
gotoxy(110,17);
printf("-------------------------");
gotoxy(110,18);
printf("10,00,00,000");//3
gotoxy(110,19);
printf("-------------------------");
gotoxy(110,20);
SetColor(5);
printf("1,00,00,000");//4
gotoxy(110,21);
printf("-------------------------");
gotoxy(110,22);
SetColor(15);
printf("10,00,000");//5
gotoxy(110,23);
printf("-------------------------");
gotoxy(110,24);
printf("1,00,000");//6
gotoxy(110,25);
printf("-------------------------");
gotoxy(110,26);
printf("10,000");
gotoxy(109,27);
printf("--------------------------");
}
void f5()
{
SetColor(15);
gotoxy(109,10);
printf("==========================");
gotoxy(110,11);
printf("** LEVEL REACHED **");
gotoxy(110,12);
printf("=========================");
gotoxy(109,11);
printf("|");
gotoxy(109,12);
printf("|");
gotoxy(109,13);
printf("|");
gotoxy(109,14);
printf("|");
gotoxy(109,15);
printf("|");
gotoxy(109,16);
printf("|");
gotoxy(109,17);
printf("|");
gotoxy(109,18);
printf("|");
gotoxy(109,19);
printf("|");
gotoxy(109,20);
printf("|");
gotoxy(109,21);
printf("|");
gotoxy(109,22);
printf("|");
gotoxy(109,23);
printf("|");
gotoxy(109,24);
printf("|");
gotoxy(109,25);
printf("|");
gotoxy(110,14);
printf("10,00,00,00,000");//1
gotoxy(110,15);
printf("-------------------------");
gotoxy(110,16);
printf("1,00,00,00,000");//2
gotoxy(110,17);
printf("-------------------------");
gotoxy(110,18);
SetColor(5);
printf("10,00,00,000");//3
gotoxy(110,19);
printf("-------------------------");
gotoxy(110,20);
SetColor(15);
printf("1,00,00,000");//4
gotoxy(110,21);
printf("-------------------------");
gotoxy(110,22);
printf("10,00,000");//5
gotoxy(110,23);
printf("-------------------------");
gotoxy(110,24);
printf("1,00,000");//6
gotoxy(110,25);
printf("-------------------------");
gotoxy(110,26);
printf("10,000");
gotoxy(109,27);
printf("--------------------------");
}
void f6()
{
SetColor(15);
gotoxy(109,10);
printf("==========================");
gotoxy(110,11);
printf("** LEVEL REACHED **");
gotoxy(110,12);
printf("=========================");
gotoxy(109,11);
printf("|");
gotoxy(109,12);
printf("|");
gotoxy(109,13);
printf("|");
gotoxy(109,14);
printf("|");
gotoxy(109,15);
printf("|");
gotoxy(109,16);
printf("|");
gotoxy(109,17);
printf("|");
gotoxy(109,18);
printf("|");
gotoxy(109,19);
printf("|");
gotoxy(109,20);
printf("|");
gotoxy(109,21);
printf("|");
gotoxy(109,22);
printf("|");
gotoxy(109,23);
printf("|");
gotoxy(109,24);
printf("|");
gotoxy(109,25);
printf("|");
gotoxy(110,14);
printf("10,00,00,00,000");//1
gotoxy(110,15);
printf("-------------------------");
gotoxy(110,16);
SetColor(5);
printf("1,00,00,00,000");//2
gotoxy(110,17);
printf("-------------------------");
gotoxy(110,18);
SetColor(15);
printf("10,00,00,000");//3
gotoxy(110,19);
printf("-------------------------");
gotoxy(110,20);
printf("1,00,00,000");//4
gotoxy(110,21);
printf("-------------------------");
gotoxy(110,22);
printf("10,00,000");//5
gotoxy(110,23);
printf("-------------------------");
gotoxy(110,24);
printf("1,00,000");//6
gotoxy(110,25);
printf("-------------------------");
gotoxy(110,26);
printf("10,000");
gotoxy(109,27);
printf("--------------------------");
}
void f7()
{
SetColor(15);
gotoxy(109,10);
printf("==========================");
gotoxy(110,11);
printf("** LEVEL REACHED **");
gotoxy(110,12);
printf("=========================");
gotoxy(109,11);
printf("|");
gotoxy(109,12);
printf("|");
gotoxy(109,13);
printf("|");
gotoxy(109,14);
printf("|");
gotoxy(109,15);
printf("|");
gotoxy(109,16);
printf("|");
gotoxy(109,17);
printf("|");
gotoxy(109,18);
printf("|");
gotoxy(109,19);
printf("|");
gotoxy(109,20);
printf("|");
gotoxy(109,21);
printf("|");
gotoxy(109,22);
printf("|");
gotoxy(109,23);
printf("|");
gotoxy(109,24);
printf("|");
gotoxy(109,25);
printf("|");
gotoxy(110,14);
SetColor(5);
printf("10,00,00,00,000");//1
gotoxy(110,15);
printf("-------------------------");
gotoxy(110,16);
SetColor(15);
printf("1,00,00,00,000");//2
gotoxy(110,17);
printf("-------------------------");
gotoxy(110,18);
printf("10,00,00,000");//3
gotoxy(110,19);
printf("-------------------------");
gotoxy(110,20);
printf("1,00,00,000");//4
gotoxy(110,21);
printf("-------------------------");
gotoxy(110,22);
printf("10,00,000");//5
gotoxy(110,23);
printf("-------------------------");
gotoxy(110,24);
printf("1,00,000");//6
gotoxy(110,25);
printf("-------------------------");
gotoxy(110,26);
printf("10,000");
gotoxy(109,27);
printf("--------------------------");
}
void start(){
    system("cls");
    SetColor(10);
    int row,col,r,c,q;
gotoxy(0,6);
printf("---------------------------------------------------------------------------------------------------------------------------------------");
gotoxy(0,7);
printf("---------------------------------------------------------------------------------------------------------------------------------------");
gotoxy(0,11);
printf("---------------------------------------------------------------------------------------------------------------------------------------");
gotoxy(0,12);
printf("---------------------------------------------------------------------------------------------------------------------------------------");
gotoxy(38,9.5);
printf("<<<<< WELCOME TO KBC - 2019 >>>>> ");
gotoxy(80,9.5);
printf("USER NAME : %s ",str);


        gotoxy(42,18);
        SetColor(11);
    printf("LOADING.........");
    gotoxy(40,20);
    for(r=1; r<=30; r++)
    {
        for(q=0; q<=100000000; q++); //to display the character slowly
        printf("%c",177);
    }
//getchar();

}
void gotoxy(int x, int y)
{

    COORD coord;

    coord.X = x;

    coord.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
void detail(){
gotoxy(0,10);
SetColor(14);
printf("--------------------------------------------------<<<<< WELCOME TO KBC - 2019 >>>>>---------------------------------------------------");
gotoxy(51,14);
printf("User , Please Enter Your Lucky Name : ");
gotoxy(50,16);
printf("--------------------------------------");
gotoxy(50,17);
printf("|");
gotoxy(50,18);
printf("|");
gotoxy(87,17);
printf("|");
gotoxy(87,18);
printf("|");
gotoxy(50,18);
printf("--------------------------------------");
gotoxy(52,17);
gets(str);
}
void SetColor(int ForgC)
 {
 WORD wColor;

  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
 if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
 {
                 //Mask out all but the background attribute, and add in the forgournd color
      wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
      SetConsoleTextAttribute(hStdOut, wColor);
 }
 return;
}
