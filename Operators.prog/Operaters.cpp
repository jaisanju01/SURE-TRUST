#include <stdio.h>
int main()
{
   char Operator;
   float A, B, C = 0;
   printf("Enter any one operator like +, -, *, / : ");
   scanf("%c", &Operator);
   printf("Enter the values of Operands A and B: ");
   scanf("%f%f", &A, &B);
   switch(Operator)
   {
      case '+': C = A + B;
         break;
      case '-': C = A - B;
         break;
      case '*': C= A* B;
         break;
      case '/': C= A/ B;
         break;
      default: printf("Invalid Operator ");
   }
   printf("The value = %f", C);
   return 0;
}
