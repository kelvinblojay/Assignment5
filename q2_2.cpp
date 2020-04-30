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
int main(void){
    //changing the value of enum is illegal
   num1 = 2;
   return 0;
}