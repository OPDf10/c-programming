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

// #include <stdio.h>
// #define tax_rate 0.085f

// int main()
// {
//     float priceOne, priceTwo, priceThree;
//     float subtotal = 0.0f;
//     float tax_amount;
//     float total;
//     int counter = 0;

//     printf("%10s", "FILL THE NEXT\n");

//     printf("Item1 Price: $");
//     scanf("%f", &priceOne);
//     subtotal += priceOne;
//     counter++;

//     printf("Item2 Price: $");
//     scanf("%f", &priceTwo);
//     subtotal += priceTwo;
//     counter++;

//     printf("Item3 Price: $");
//     scanf("%f", &priceThree);
//     subtotal += priceThree;
//     counter++;
//     tax_amount = subtotal * tax_rate;
//     total = tax_amount + subtotal;

//     printf("\n==== Receipt ====\n");
//     printf("%-20s%10d\n", "Number of items: ", counter);
//     printf("%-20s%10.3f\n", "Total before tax: $", subtotal);
//     printf("%-20s%10.3f\n", "Tax amount: $", tax_amount);
//     printf("%-20s%10.3f\n", "Total after tax: $", total);
//     printf("==== The End ====\n");


//     return 0; 
// }














/*      Intelligent Home Security System
Handle different security modes (Home, Away, Sleep, Vacation)

Output example:


=== HOME SECURITY SYSTEM ===

SENSOR READINGS:
Door: CLOSED
Window: OPEN  
Motion: DETECTED
Smoke: NONE
Temperature: 72°F
Time: 14:30 (Daytime)

SYSTEM STATUS: AWAY mode
SECURITY LEVEL: HIGH Alert - Intrusion detected!
ACTIONS: Sound alarm, Notify police, Lights ON

Detailed analysis...


*/


#include <stdio.h>
#include <stdbool.h>

int main()
{
    int userInput;

    //Starting by user mode - Getting data
    printf("%5s", "===== Welcom to IHSS =====\n");
    printf("%5s", "USER mode");
    printf("\nWhich status are you in sir/ma'am ?\n1- Home\n2- Away\n3- Sleep\n4- Vacation\n");

    scanf("%d", &userInput);

    switch (userInput)
    {
        case 1:
            printf("Updated! User is in home.");
            break;
        case 2:
            printf("Updated! User is away.");
            break;
        case 3:
            printf("Updated! User is a sleep.");
            break;
        case 4:
            printf("Updated! User is in vacation.");
            break;
        default:
            printf("Your input is wrong, try again!\n");
            break;
    }

    // Now, system mode and detection. '0' is open.
    // Getting data
    bool door = 1, window = 1, motion = 1, smoke = 1;
    float temp = 0.0f;
    int input = 0, hours = 0, mins = 0;

    printf("%5s", "\n\nMACHINE mode");
    printf("%5s", "\nSelect 1 for (Closed) or 0 for (Open):\n");
    
    printf("Door is: ");
    scanf("%d", &input);
    door = input;

    printf("Window is: ");
    scanf("%d", &input);
    window = input;

    printf("Motion is: ");
    scanf("%d", &input); // 1 for safe, 0 for danger!
    motion = input;

    printf("Smoke is: ");
    scanf("%d", &input);  // 1 for safe, 0 for danger!
    smoke = input;

    printf("%s", "What is the temprature? ");
    scanf("%f", &temp);

    printf("What is the time now? (Write in form: hours:mins) ");
    scanf("%d:%d", &hours, &mins);


    // Now comes the report
    printf("%5s", "\n\n=== Report Of Your Security Status ===\n");
    printf("SENSOR READINGS:\n");
    if (door == 0)
        printf("Door is: Open!\n");
    else
        printf("Door is: closed!\n");
    
    if (window == 0)
        printf("Window is: Open!\n");
    else
        printf("Window is: closed!\n");

    if (motion == 0)
        printf("Motion: DANGER! strange object in move!\n");
    else
        printf("Motion: It's all good..\n");

    if (smoke == 0)
        printf("Smoke: DANGER! HOUSE ON FIRE!\n");
    else
        printf("Smoke: It's all good..\n");

    printf("Temperature: %.2f°C\n", temp);
    printf("Time: %d:%d (Daytime)\n", hours, mins);

    printf("\n1-Home 2-Away 3-Sleep 4-Vacation");
    printf("\nUSER STATUS: %d\n", userInput);
    
    if (motion == 1 && smoke == 1)
    {
        if (door == 0 && window == 0)
        {
            printf("SECURITY LEVEL: MID Alert - The entrances to the house are not secure!\n");
        } else if (door == 0 || window == 0) {
            printf("SECURITY LEVEL: LOW Alert - one of entrances to the house are not secure!\n");
        } else {
            printf("Everything is excellent, the house is safe:)\n");
        }
    
    } else {
        printf("SECURITY LEVEL: HIGH Alert - Intrusion detected!\n");
    }
    



    return 0;
}


