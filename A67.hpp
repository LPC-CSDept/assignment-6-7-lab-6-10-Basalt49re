#include <iomanip>
#include <iostream>
using namespace std;

void swap(int &num1, int &num2)
{
  int temp = num1;
  num1 = num2;
  num2 = temp;
}

void swap(int &num1, int &num2, int &num3)
{
  int max, remainder;

  if (num1 > num2 && num1 > num3)
  {
    max = num1;
  }
  else if (num2 > num3)
  {
    max = num2;
  }
  else
  {
    max = num3;
  }

  int smallest = num1;
  int min;
  if (num2 < min)
    min = num2;
  if (num3 < min)
    min = num3;

  if (num1 != min && num1 != max)
  {
    remainder = num1;
  }
  if (num2 != min && num2 != max)
  {
    remainder = num2;
  }
  if (num3 != min && num3 != max)
  {
    remainder = num3;
  }
  num1 = min;
  cout << "**************************************************" << endl;
  cout << "Test value num1 " << num1 << endl;
  cout << "**************************************************" << endl;
  num2 = remainder;
  num3 = max;

  /* make simple algorithm
      if ( n1 is min)
          if ( n3 > n2)
            n1, n2, n3 = min, n2, n3
      and so on.
    */
}

void swap(int &num1, int &num2, int &num3, int &num4)
{
  swap(num1, num2);
  swap(num2, num4);
  swap(num2, num3);
}