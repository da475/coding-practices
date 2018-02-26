#include <stdio.h>
#include <stdlib.h>

void merges (int *dest, int *src1, int *src2, int size1, int size2)
{

  int dst_size = size1 + size2;
  int index1 = 0;  
  int index2 = 0;

  for (int i = 0; i < dst_size; i++)
  {

    if(index1 == size1)
    {
      printf("src1 over \n");
      for (int j=index2; j<size2; j++)
        dest[i] = src2[j];
    }

    if(index2 == size2)
    {
      printf("src2 over \n");
      for (int j=index1; j<size1; j++)
        dest[i] = src1[j];
    }

    // compare the two elements
    if(src1[index1] < src2[index2])
    {
      dest[i] = src1[index1];
      index1++;
    }
    else
    {
      dest[i] = src2[index2];
      index2++;
    }

  }  

}


int main()
{

  int s1size, s2size, dsize;
  s1size = 5;
  s2size = 5;
  dsize = 10;

  int s2[5] = {1, 1, 1, 1, 1};
  int s1[5] = {1, 1, 1, 1, 1};
  //int s1[5] = {-1, -19, 19, 19, 26};

  int dest[10] = { 0 };

  merges(dest, s1, s2, 5, 5);

  for (int i = 0; i<dsize; i++ )
    printf(" %d ", dest[i]);

  printf("\n");
  return 0;

}



