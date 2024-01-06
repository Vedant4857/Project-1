#include<stdio.h>
int main()
{
    FILE *file;
    char word;

    file = fopen("vedant.txt","r");

    if(file == NULL)
    {
      printf("File not found");
      return 1;
    }

    while ((word = fgetc(file)) != EOF) 
    {
        printf("%c", word);  
    }
    
    fclose(file);


}