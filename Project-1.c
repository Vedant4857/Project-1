#include <stdio.h>
#include <windows.h>

void Personal_life();
void Education();
void Hobby();
void Friends();
void start();
void back();

int main()
{
    start();
    return 0;
}

void start()
{
    while (1)
    {
        char ch;
        char P, p, H, h, F, f, E, e;
        printf("\n\nPersonal Life(P)");
        printf("          ");
        printf("Education(E)");
        printf("\n\n\n\n\nHobby(H)");
        printf("                  ");
        printf("Friends(F)");
        printf("\n\nEnter choice:");
        scanf(" %c", &ch);

        if (ch == 'P' || ch == 'p')
        {
            system("cls");
            Personal_life();
        }
        else if (ch == 'E' || ch == 'e')
        {
            system("cls");
            Education();
        }
        else if (ch == 'H' || ch == 'h')
        {
            system("cls");
            Hobby();
        }
        else if (ch == 'F' || ch == 'f')
        {
            system("cls");
            Friends();
        }
        else
        {
            system("cls");
            printf("Invalid Input\n");
        }
    }
}

void Personal_life()
{
    while (1)
    {
        system("cls");
        printf("\n\n\tMy name is vedant shekhar and i am 18 years old.\n\tI was born and live in Morbi, Gujarat I live with\n\tmy mom, dad and brother.\n\n\n");
        back();
    }
}

void Education()
{
    while (1)
    {
        system("cls");
        printf("\n\n\tI did schooling upto 10th in Saint Mary's School, Morbi.\n\tAnd did my 12th from OSEM Morbi.Currently pursuing\n\tB-tech CE-AI from Marwadi University,Rajkot.\n\n\n");
        back();
    }
}

void Hobby()
{
    while (1)
    {
        system("cls");
        printf("\n\n\tCurrently my favourite thing to do is code. I really like coding.\n\tI also like watching sports and playing it.Sports like cricket,\n\tfootball and mma are fun for me.\n\n\n");
        back();
    }
}
void Friends()
{
    while (1)
    {
        system("cls");
        printf("\n\n\tI have many friends, Some of my close ones are Aditya and Mainak.\n\tNow I have college friends like Meet, Kirtan and Shiva Reddy.\n\tI am grateful for the friends in my life\n\n\n");
        back();
    }
}

void back()
{
    char ba;
    printf("\n\n\tPress [B] to go back.\n\n");
    scanf(" %c", &ba);
    if (ba == 'B' || ba == 'b')
    {
        system("cls");
        start();
    }
}