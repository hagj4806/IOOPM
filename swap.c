#include <stdio.h>

void swap(int *a, int *b)
{
  int tmp = *a;
  a = b;
  b = tmp;
}

int main(void)
{

  a = &x;
  b = &y; 
  int x = 7;
  int y = 42;
  swap(x, y);
  printf("%d, %d\n", x, y);
  return 0;
}
