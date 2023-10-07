//Draws a pyramid of symbols of a given size
#include <stdio.h>


int main()
{
    char x = 'a';
    int y = 0, let = 1;
    printf("Input lower letter: ");
    scanf("%c", &y);
    x = y;


    for (int i = 65; i <= y; i++)
    {   
        for (int b = 0; b < y - 65 - let / 2; b++)
        {
            printf(" ");
        }
        for (int c = 0, f = let / 2; c < let; c++)
        {   
            if (let == 1){
                f = 0;
            }
            if (c > let / 2){
                f += 2;
            }
            printf("%c", i - f + c);
        }
        printf("\n");
        let += 2;

    }
   
    return 0;
}
