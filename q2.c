#include <stdio.h>
enum numbers{
   num1 = 5,
   num2 = 10,
   num3 = 15,
   num4 = 20,
   Boolean
};
enum strings{
   str1 = 'C',
   str2 = 'z'
};
int main(void){
    
   //additin
   printf("Addition = %d\n",num1+num2);
   //substrcation
   printf("Substraction = %c\n",str1-num4);
   //multiplication
   printf("Mutiplication = %d\n",num3*num2);
   //division
   printf("Division = %d\n",num4/num1);


   //Bitwise Operations
   printf("Bitwise AND = %d\n",num1 & num2);
   printf("Bitwise OR = %d\n",num1 | num2);
   printf("Bitwise Exculsive = %d\n",num1 ^ num2);
   //left shift
   printf("Left shift = %d\n",num1 >> 1);
   //right shift
   printf("Right shift = %d\n",num1 << 1);

   //assigning the value of enum
   enum numbers b = Boolean;
   printf("asigning a boolean = %d\n",b);


   // NUMBER1 = 11;
   return 0;
}