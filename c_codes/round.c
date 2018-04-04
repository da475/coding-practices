#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

  double b[5] = {155, 152, 15.7, 150, 160};

  float i = 0.0;
  for (int j=0; j<180; j++) {
    i = (float)j;
    printf ("%f rounded to %d\n", i, (int)(round(i/10) * 10));
  }

  //printf ("%d rounded to %d\n", b2, (int)(round(b2/10) * 10));
  //printf ("%d rounded to %d\n", b3, (int)(round(b3/10) * 10));
  //printf ("%d rounded to %d\n", b4, (int)(round(b4/10) * 10));


}
