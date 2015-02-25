/* 
mario.c

Julianne Rumer
Juli.Rumer@gmail.com

makes a half-pyramid of an inputed height 
*/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;
    
    // get height
    do
    {
        printf("please give me a positive integer 1-23:\n");
        height = GetInt ( );
    }
    while ( 23 < height || height < 0 );
    
    // print each line
    for (int i = 0; i < height ; i++)
    {
        // print as many spaces as the height less one
        for (int space = 0; space < height - (i - 2) ; space++)
        {
            printf(" ");
        }
        
        // print as many sharps as the height plus two
        for (int sharp = 0; sharp < i + 2; sharp++)
        {
            printf("#");
        }
        
        // move to next line 
        printf("\n");
     }
    
}

    
    
       

