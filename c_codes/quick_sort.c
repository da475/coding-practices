#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

// 1 - partial order
// 2 - dynamic partition
// 3 - can be randomized
// 4 - divide and conquer algo


int partition_ele(int a[], int start, int end) {
    int pivot = a[end];

    // initialise the pivot index to end
    int pivot_index = start-1;

    for(int i=start; i<end; i++) {
        if(a[i] <= pivot) {
            pivot_index++;
            swap(&a[i], &a[pivot_index]);
            //pivot_index = i;
        }
    }

    pivot_index++;
    swap(&a[end], &a[pivot_index]);
    return pivot_index;
    
}

void quick_sort(int a[], int start, int end) {
    if (start >= end) return;

    int pivot_index = partition_ele(a, start, end);

    partition_ele(a, start, pivot_index-1);
    partition_ele(a, pivot_index+1, end);
    return;
}

int main(){
    int arr[6] = {2,45,5,23,78,15};
    int size = (sizeof(arr) / sizeof(arr[0]));
    quick_sort(arr, 0, size-1);
//    int ind = partition_ele(arr, 0, size-1);
//    printf("%d\n", ind);
    for (int i=0; i<size; i++)
        printf("%d ", arr[i]);

    return 0;

}


