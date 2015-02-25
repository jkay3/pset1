#include <stdio.h>
#include <cs50.h>

int main(void)
{
float change;
    do 
    {
        printf("please give me the ammount of change: \n");
        change = GetFloat();
    }
    while (change <= 0);
    
    float quart = 0;
    if(change > .25)
    {
        quart = change/.25; 
        printf("%i quarters\n",(int)quart);
    }
    
    float lessquart = change - (int)quart * .25;
   
    float dime = 0;
    if(lessquart > .09)
    {
        dime = lessquart / .10;
        printf("%i dimes \n", (int)dime);
    }
    
    float lessdime = change - (int)dime * .1 - (int)quart;
    printf("%f\n",lessdime);
    
    float nickle = 0;
    if (lessdime > .5)
    {
    nickle = lessdime / .05; 
    printf("%i nickles \n", (int)nickle);   
    }

}

