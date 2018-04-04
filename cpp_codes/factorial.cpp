#include <iostream>

int factorial(int n)
{

  if (n == 1)
    return 1;

  return factorial(n-1) * n;

}

long factorial_long(long n)
{

  if (n == 1)
    return 1;

  return factorial(n-1) * n;

}


long long factorial_d(long long n)
{

  if (n == 1)
    return 1;

  return factorial(n-1) * n;

}

int main()
{

  int number = 20;
  int fact = factorial(20);
  long fact_long = factorial_long(20);
  long long fact_d = factorial_d(100);
  printf("%d %ld %lld \n\n", fact, fact_long, fact_d);
  //printf("%d %d \n\n", sizeof(int), sizeof(long));
  //std::cout << "Hello World, fac is %d \n\n\n\n, fact";

}
