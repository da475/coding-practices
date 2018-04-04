#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

// 1 - static partition
// merge sort is not in-place
int merge_sort(int a[], int start, int end) {
    int pivot = a[end];

    // initialise the pivot index to end
    int pivot_index = start-1;

    for(int i=start; i<end; i++) {
        if(a[i] <= pivot) {
            pivot_index++;
            swap(&a[i], &a[pivot_index]);
        }
    }
    return pivot_index;
    
}

int main(){
    int arr[6] = {2,45,5,23,78,15};
    int size = (sizeof(arr) / sizeof(arr[0]));
    //insertion_sort(arr, size);
    int ind = partition_ele(arr, 0, size-1);
    printf("%d\n", ind);
    for (int i=0; i<size; i++)
        printf("%d ", arr[i]);

    return 0;

}


