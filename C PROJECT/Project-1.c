#include <stdio.h>

void Personal_life();
void Education();
void Hobby();
void Friends();
int main()
{
    char ch;
    int P, p, H, h, F, f, E, e;
    printf("\n\nPersonal Life(P)");
    printf("          ");
    printf("Education(E)");
    printf("\n\n\n\n\nHobby(H)");
    printf("                  ");
    printf("Friends(F)");
    printf("\n\nEnter choice:");
    scanf("%c", &ch);

    if (ch == 'P' || ch == 'p')
    {
        Personal_life();
    }
    else if (ch == 'E' || ch == 'e')
    {
        Education();
    }
    else if (ch == 'H' || ch == 'h')
    {
        Hobby();
    }
    else if (ch == 'F' || ch == 'f')
    {
        Friends();
    }
    else
    {
        printf("Invalid Input");
    }
}

void Personal_life()
{
    printf("\n\n\tMy name is vedant shekhar and i am 18 years old.\n\tI was born and live in Morbi, Gujarat I live with\n\tmy mom, dad and brother.\n\n\n");
}

void Education()
{
    printf("\n\n\tI did schooling upto 10th in Saint Mary's School, Morbi.\n\tAnd did my 12th from OSEM Morbi.Currently pursuing\n\tB-tech CE-AI from Marwadi University,Rajkot.\n\n\n");
}

void Hobby()
{
    printf("\n\n\tCurrently my favourite thing to do is code. I really like coding.\n\tI also like watching sports and playing it.Sports like cricket,\n\tfootball and mma are fun for me.\n\n\n");
}

void Friends()
{
    printf("\n\n\tI have many friends, Some of my close ones are Aditya and Mainak.\n\tNow i have college friends like Meet, Kirtan and Shiva Reddy.\n\tI am grateful for the friends in my life\n\n\n");
}