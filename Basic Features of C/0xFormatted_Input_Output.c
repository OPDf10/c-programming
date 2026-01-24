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
#define tax_rate 0.085f

int main()
{
    float priceOne, priceTwo, priceThree;
    float subtotal = 0.0f;
    float tax_amount;
    float total;
    int counter = 0;

    printf("%10s", "FILL THE NEXT\n");

    printf("Item1 Price: $");
    scanf("%f", &priceOne);
    subtotal += priceOne;
    counter++;

    printf("Item2 Price: $");
    scanf("%f", &priceTwo);
    subtotal += priceTwo;
    counter++;

    printf("Item3 Price: $");
    scanf("%f", &priceThree);
    subtotal += priceThree;
    counter++;
    tax_amount = subtotal * tax_rate;
    total = tax_amount + subtotal;

    printf("\n==== Receipt ====\n");
    printf("%-20s%10d\n", "Number of items: ", counter);
    printf("%-20s%10.3f\n", "Total before tax: $", subtotal);
    printf("%-20s%10.3f\n", "Tax amount: $", tax_amount);
    printf("%-20s%10.3f\n", "Total after tax: $", total);
    printf("==== The End ====\n");


    return 0; 
}