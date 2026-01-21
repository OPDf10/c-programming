/*
Display this exact header (use printf with formatting):

========================
     STORE PRICE LIST   
========================
ITEM               PRICE
------------------------

Display 5 items with their prices using proper formatting:
1- Each item name in a 20-character wide column, left-aligned
2- Each price in a 10-character wide column, right-aligned with 2 decimal places

Items and prices (use these exact values):
Milk: 3.49
Eggs: 2.99
Bread: 1.49
Cheese: 4.99
Apples: 0.99 per pound*/

// #include <stdio.h>

// int main()
// {
//     char doubleLines = '=', singleLine = '-';
//     char space = ' ';

//     // Used for loop as I did learn it before :)
//     for (int i=1; i < 25; i++)
//     {
//         printf("%c", doubleLines);
//     }
//     printf("\n");
    
//     printf("     STORE PRICE LIST   \n");
    
//     for (int i=1; i < 25; i++)
//     {
//         printf("%c", doubleLines);
//     }
//     printf("\n");
    
//     printf("ITEM               PRICE\n");
    
//     for (int i=1; i < 25; i++)
//     {
//         printf("%c", singleLine);
//     }
//     printf("\n");

//     // Here I fixed the formattig strings.
//     printf("%-20s%4.2f\n", "Milk:", 3.99);
//     printf("%-20s%4.2f\n", "Eggs:", 2.99);
//     printf("%-20s%4.2f\n", "Bread:", 1.99);
//     printf("%-20s%4.2f\n", "Cheese:", 4.99);
//     printf("%-20s%4.2f\n", "Apples:", 0.99);

    
//     return 0;
// }





/*
Create an Interactive Grocery Calculator

Write a program that:
1- Asks for item name (single word), quantity, and price
2- Calculates total cost (quantity × price)
3- Displays a formatted receipt

Output should look like:
========= RECEIPT =========
Item: Milk
Quantity: 2
Price each: $3.49
Total: $6.98
===========================*/

#include <stdio.h>

int main()
{
    char itemName[15];
    int quantity = 0;
    float itemPrice = 0.0f;

    printf("Welcome to Grocery Calculator\nFill in these information plz:\n");

    printf("Item: ");
    scanf("%s", itemName);
    
    printf("Quantity: ");
    scanf("%d", &quantity);
    
    printf("Price each: $");
    scanf("%f", &itemPrice);

    printf("\n========= RECEIPT =========\n");
    printf("%-10s%10s\n", "Item:", itemName);
    printf("%-10s%10d\n", "Quantity:", quantity);
    printf("%-10s%10.2f\n", "Price each: $", itemPrice);
    printf("%-10s%10.2f\n", "Total: $", itemPrice*quantity);
    printf("===========================\n");




    return 0;
}