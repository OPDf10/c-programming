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

    // Used for loop as I did learn it before :)
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

    // Here I fixed the formattig strings.
    printf("%-20s%4.2f\n", "Milk:", 3.99);
    printf("%-20s%4.2f\n", "Eggs:", 2.99);
    printf("%-20s%4.2f\n", "Bread:", 1.99);
    printf("%-20s%4.2f\n", "Cheese:", 4.99);
    printf("%-20s%4.2f\n", "Apples:", 0.99);
    
    return 0;
}