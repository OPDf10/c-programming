/*
Display this exact header (use printf with formatting):

========================
     STORE PRICE LIST   
========================
ITEM               PRICE
------------------------

Display 5 items with their prices using proper formatting:

Each item name in a 20-character wide column, left-aligned

Each price in a 10-character wide column, right-aligned with 2 decimal places

Items and prices (use these exact values):

Milk: 3.49

Eggs: 2.99

Bread: 1.49

Cheese: 4.99

Apples: 0.99 per pound*/

#include <stdio.h>

int main()
{
    char doubleLines = '=', singleLine = '-';
    char space = ' ';

    for (int i=1; i < 25; i++)
    {
        printf("%c", doubleLines);
    }
    printf("\n");
    
    printf("     STORE PRICE LIST   \n");
    
    for (int i=1; i < 25; i++)
    {
        printf("%c", doubleLines);
    }
    printf("\n");
    
    printf("ITEM               PRICE\n");
    
    for (int i=1; i < 25; i++)
    {
        printf("%c", singleLine);
    }
    printf("\n");

    printf("Milk:");
    printf("%19.2f\n", 3.49);

    printf("Eggs:");
    printf("%19.2f\n", 2.99);

    printf("Bread:");
    printf("%18.2f\n", 1.49);

    printf("Cheese:");
    printf("%17.2f\n", 4.99);

    printf("Apples:");
    printf("%17.2f\n", 0.99);
    
    return 0;
}