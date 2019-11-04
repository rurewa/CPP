#include<iostream>
using namespace std;

int main()
{
  int i, y, x;
  for(i = 1; i <= 5; ++i) {
    for(y = i; y < 5; ++y) {
      printf(" ");
    }
    for(x = 1; x < (i*2); ++x) {
      printf("*");
    }
      printf("\n");
  }
  return 0;
}

/*
 * | |1|2|3|4|5|6|7|8|9|  x
 * |1| | | | |*| | | | | y
 * |2| | | |*|*|*| | | |
 * |3| | |*|*|*|*|*| | |
 * |4| |*|*|*|*|*|*|*| |
 * |5|*|*|*|*|*|*|*|*|*|
*/
