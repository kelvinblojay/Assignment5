#include <iostream>
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
int main(){   

   //addition
   std::cout <<"Addition = "<< num1+num2 <<"\n";
   //substrcation
   std::cout <<"Substraction = "<< str1-num4 << "\n";
   //multiplication
   std::cout <<"Mutiplication = "<< num3*num2<< "\n";
   //division
   std::cout <<"Division = "<< num4/num1<< "\n";
   //Bitwise Operations
   int bitwise1 = num1 & num2;
   std::cout <<"Bitwise AND = "<< bitwise1 << "\n";
   int bitwise2 = num1 | num2;
   std::cout <<"Bitwise OR = " << bitwise2<< "\n";
   int bitwise3 = num1 ^ num2;
   std::cout <<"Bitwise Exculsive = "<< bitwise3<<"\n";
   //left shift
   int shift1 =num1 >> 1;
   std::cout <<"Left shift = "<<shift1<<"\n" ;
   //right shift
   int shift2 =  num1 << 1;
   std::cout <<"Right shift = "<< shift2<<"\n";

   //assigning the value of enum
   enum numbers b = Boolean;
   std::cout <<"asigning a boolean = "<< b <<"\n";

   return 0;
}