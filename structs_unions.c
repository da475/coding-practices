#include <stdio.h>
#include <stdlib.h>


struct node {
    //int a;
    //int arr[4];
    //int arr0[0];
    char b;
};

int main() {
    void *ptr;
    int arr[4];
    int arr0[0];
    printf("size is %d %d\n", sizeof(struct node), sizeof(void*));
    printf("arr is %d\n", sizeof(arr));
    printf("arr0 is %d\n", sizeof(arr0));
    return 0;
}
