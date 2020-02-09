#include<iostream>
using namespace std;

int x = 2, y = 5, z;

int foo(int a, int b)
{
  int result = 1, i;
  for (i = 0; i < b; ++i)
    {
      result *= a
    }
  return result;
}

int main()
{
  z = foo(x, y);

  cout << z << endl;

  return 0;
}
