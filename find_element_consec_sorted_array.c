#include <stdio.h>

int find_bin(int *arr, int start, int end){
    int len = end - start + 1;
    if(len == 1) {
        if(arr[0] + start + 1 == arr[start]) return (arr[start] - 1);
    }

    if(len == 2) {
        if(arr[0] + start + 1 == arr[start]) return (arr[start] - 1);
        if(arr[0] + end + 1 == arr[end]) return (arr[end] - 1);
    }

    int mid = start + (len/2);
    if(arr[0] + mid == arr[mid]) {
        return find_bin(arr, mid+1, end);
    }
    else
        return find_bin(arr, start, mid);
        
}

int main()
{

    int size = 9;
    int arr[20] = {3,4,5,6,7,8,9,10,12};
    //offset = arr[0];   
    //printf("missing element is %d\n", find(arr, 8));

    int element = find_bin(arr, 0, size-1);
    printf("and missing element is %d\n", element);
    return 0;
}


