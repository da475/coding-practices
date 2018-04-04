#include <stdio.h>

int main() {
    int a = 6;
    int arr[30] = {18};
    int b = 34;
    int *p = &a;
    int *r = arr;
    int *q = &b;
    printf("%p %p %p\n", &a, arr, &b);
    printf("p %d, q %d\n", *p, *q);
    printf("p %p, q %p\n\n", p, q);
    //*p++ = *q++;

    q++;
    p++;
    p = q;

    printf("p %d, q %d\n", *p, *q);
    printf("p %p, q %p\n\n", p, q);
    return 0;
}
