//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the Overloading function swap( )
// swap ( ) function has the difference number of parameters from 2 to 4
// For example, swap(10, 20); swap(10, 20, 30); swap(10, 20, 30, 40)
void swap(int &num1,int &num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

void swap(int &num1,int &num2, int &num3)
{
  int max,remainder;
 
   if (num1>num2 && num1>num3) {
      max = num1;
   } else if (num2>num3) {
      max = num2;
   } else {
      max = num3;
   }

}