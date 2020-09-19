#include<stdio.h>
#include<conio.h>

void main()
{
   int a, b, c; // int - data type ; a, b- variables
   clrscr();

   printf("Enter any value for a:");
   scanf("%d", &a); // %d-Format Specifier //&- Address of operator
   //Scanf(): is used to take user input

   printf("Enter any value for b:");
   scanf("%d", &b);

   c = a + b;

   printf("Addition is: %d", c);

   getch();
}