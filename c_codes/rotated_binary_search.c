#include <stdio.h>
#include <stdlib.h>

//int arr[10] = {7,8,9,10,11,12,3,4,5,6};
int arr[10] = {3,4,5,6,7,8,9,10,11,12};
int found = -1;

int binary_search(int val, int start, int end) {

    if(start > end) return -1;

    if(start == end) {
        if(arr[start] == val) return start;
        else return -1;
    }

    int mid = (start + end)/2;

    if(arr[mid] == val) return mid;
    if(arr[mid] > val) return binary_search(val, start, mid);
    else return binary_search(val, mid+1, end);
    
}

// Finding the pivot is the key idea of rotated array
// binary search. It finds it in log(n) time.
// It returns when previous element is larger than current
// Or when current element is larger than next element
int find_pivot(int start, int end) {

    if(start == end)
        return start;

    int mid = (end + start) / 2;

    if (arr[mid] > arr[mid+1]) return mid;
    if (arr[mid-1] > arr[mid]) return mid-1;

    if(start < mid && arr[start] > arr[mid]) return find_pivot(start, mid-1);
    if(mid < end  && arr[mid] > arr[end]) return find_pivot(mid+1, end);

    return -1;
}

int main() {
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 0;
    printf("enter number\n");
    scanf("%d", &num);
    int index = 0;

    //printf("res is %d\n", binary_search(4, 0, 5));
    //printf("res is %d\n", binary_search(4, 6, 9));

    index = binary_search(num, 0, size-1);

    int pivot_index = find_pivot(0, 9);
    printf("pivot found at %d\n", pivot_index);
    int r1 = binary_search(num, 0, pivot_index);
    int r2 = binary_search(num, pivot_index+1, size-1);
    index = -1;
    if(r1 != -1) index = r1;
    if(r2 != -1) index = r2;
    printf("search found at index %d\n", index);

    return 0;
}


