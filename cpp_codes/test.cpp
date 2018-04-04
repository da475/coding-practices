#include <iostream>

int main()
{

  int number = 20;
  int fact = factorial(20);
  long fact_long = factorial_long(20);
  long long fact_d = factorial_d(100);
  printf("%d %ld %lld \n\n", fact, fact_long, fact_d);
  //printf("%d %d \n\n", sizeof(int), sizeof(long));
  //std::cout << "Hello World, fac is %d \n\n\n\n, fact";


  float a, b, c;
  float x1, x2;

  

  x1 = ((-1*b) + sqrt(b*b - 4*a*c)) / 2*a;
  
  x2 = (-2*c) / (-1*b + sqrt(b*b - 4*a*c));

  printf("%f %f", x1, x2);
  

}
