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

// #include <stdio.h>

// int main()
// {
//     char itemName[15];
//     int quantity = 0;
//     float itemPrice = 0.0f;

//     printf("Welcome to Grocery Calculator\nFill in these information plz:\n");

//     printf("Item: ");
//     // Use %s whith char arrays
//     scanf("%s", itemName); 
    
//     printf("Quantity: ");
//     scanf("%d", &quantity);
    
//     printf("Price each: $");
//     scanf("%f", &itemPrice);

//     printf("\n========= RECEIPT =========\n");
//     printf("%-10s%10s\n", "Item:", itemName);
//     printf("%-10s%10d\n", "Quantity:", quantity);
//     printf("%-10s%10.2f\n", "Price each: $", itemPrice);
//     printf("%-10s%10.2f\n", "Total: $", itemPrice*quantity);
//     printf("===========================\n");




//     return 0;
// }















/*      Create a "Smart Grocery Checkout System"
Write a program that:
1- Reads item prices using scanf
2- Calculates subtotal, tax, and total
3- Demonstrates ALL Chapter 4 concepts
5- Produces a formatted receipt


1. Arithmetic Operators (+, -, *, /, %)
- Calculate subtotal (sum of prices)
- Calculate tax (8.5% of subtotal)
- Calculate total (subtotal + tax)
- Use integer division for item count

2. Assignment Operators (=, +=, -=, *=, /=, %=)
- Use compound assignment for accumulating totals
- Use simple assignment for storing results

3. Increment/Decrement Operators (++, --)
- Count items as they're entered
- Use prefix/postfix correctly

4. Expression Evaluation & Precedence
- Show understanding of operator precedence
- Use parentheses where needed for clarity

5. Expression Statements
- Make all calculations into proper statements
- Avoid "do-nothing" expressions
*/

#include <stdio.h>

int main()
{
    char itemOne[15];
    float price = 0.0f, tax = 0.085f, subtotal = 0.0f, total = 0.0f;

    printf("Wlecome to Smart Grocery Checkout System\nPlz! Fill the next:\nItem name: ");
    scanf("%s", itemOne); // No '&' sign with arrays.

    printf("Price: $");
    scanf("%f", &price);

    subtotal = price * tax;
    total = price + subtotal;

    printf("====================\n");
    printf("%-15s%15.2f\n", "Your price before tax: $", price);
    printf("%-15s%15.2f\n", "Amount of increse: $", subtotal);
    printf("%-15s%15.2f\n", "After tax: $", total);
    printf("====================\n");


    return 0; 
}