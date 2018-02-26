#include <stdio.h>


void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

// insertion is in-place
void insertion_sort(int a[], int size) {
    if (size <= 0) return;
    int temp;
    for (int i=0; i<size; i++) {        // iterate over the array
        temp = a[i];

        // iterate over the sorted region and find
        // keep on comparing the a[i] with it
        for (int j=0; j<i; j++) { 
            if(a[j] > temp) {
                swap(&a[j], &temp);
            }
        }
        a[i] = temp;                    // temp is sorted final value for position 'i'
    } 
}

// selection is in-place
void selection_sort(int a[], int size) {
    if (size <= 0) return;
    int temp, min_val, min_index;
    for (int i=0; i<size; i++) {        // iterate over the array
        min_val = a[i];
        min_index = i;

        // iterate over the un-sorted region and find the minimum
        // among the sorted region, swap it with its correct position
        for (int j=i; j<size; j++) { 
            if(min_val > a[j]) {
                min_val = a[j];
                min_index = j;
            }
        }
        if(i != min_index)
            swap(&a[i], &a[min_index]);
    }

}

int main(){
    int arr[5] = {2,45,5,23,78};
    int size = (sizeof(arr) / sizeof(arr[0]));
    //insertion_sort(arr, size);
    selection_sort(arr, size);
    for (int i=0; i<size; i++)
        printf("%d ", arr[i]);

    return 0;

}


