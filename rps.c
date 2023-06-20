#include<stdio.h>
#include<conio.h>
int Computer,You;
menu()
{
    int ch;
    printf("\n1. Select Rock");
    printf("\n2. Select Paper");
    printf("\n3. Select Scissor");
    printf("\n4. Exit");
    printf("\nEnter your choice ");
    scanf("%d" ,&ch);
    return(ch);
}
int main()
{
    system("color 1e");
    while(1)
    {
    system("cls");
    setup();
    logic();
    }

    return 0;


}

void setup()
{
    label:
    Computer=rand()%4;
    if(Computer==0)
        goto label;

    You=menu();


}
void logic()
{
    switch(You)
    {
    case 1:
        if(Computer==1)//y=rock c=rock
        {
            printf("\nDraw");
            printf("\nYou=Rock\nComputer=Rock");
        }
        else if(Computer==2)//y=rock c=paper
        {
           printf("\nComputer Won");
           printf("\nYou=Rock\nComputer=Paper");

        }
        else
        {
            printf("\nYou Won");//y=rock c=scissor
            printf("\nYou=Rock\nComputer=Scissor");
        }
        break;
    case 2:
        if(Computer==1)//y=paper c=rock
        {
            printf("\nYou Won");
            printf("\nYou=Paper\nComputer=Rock");
        }
        else if(Computer==2)//y=Paper c=paper
        {
           printf("\nDraw");
           printf("\nYou=Paper\nComputer=Paper");

        }
        else
        {
            printf("\nComputer Won");//y=paper c=scissor
            printf("\nYou=Paper\nComputer=Scissor");
        }
        break;
    case 3:
        if(Computer==1)//y=scissor c=rock
        {
            printf("\nComputer Won");
            printf("\nYou=Scissor\nComputer=Rock");
        }
        else if(Computer==2)//y=scissor c=paper
        {
           printf("\nYou Won");
           printf("\nYou=Scissor\nComputer=Paper");

        }
        else
        {
            printf("\nDraw");//y=scissor c=scissor
            printf("\nYou=Scissor\nComputer=Scissor");
        }
        break;
    case 4:
        exit(0);
    default:
        printf("\nInvalid Choice");


    }
    getch();
}
