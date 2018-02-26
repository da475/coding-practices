#include <stdio.h>
#include <stdlib.h>


int main()
{

  int a = 4;
  int b = 15;
  int *p = &a;
  int *q = &b;

  float f=4.3;
  //printf("%f\n", f&1);

  printf("a = %d, b = %d, p = %p, q = %p, *p = %d, *q = %d\n", a, b, p, q, *p, *q);

  *q++ = *p++;

  printf("a = %d, b = %d, p = %p, q = %p, *p = %d, *q = %d\n", a, b, p, q, *p, *q);


}
