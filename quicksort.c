#include <stdio.h>

/* 
To even know I struggled so much with this algorithm on my 1st year
only for it to work 1st try after writing it on a paper during class...
*/

void swap(int v[], int i1, int i2){
    int tmp = v[i1];
    v[i1] = v[i2];
    v[i2] = tmp;
}

void quicksort(int v[], int low, int high){

    if(high <= low || high - low < 2) return;

    int pivot = high;
    for(int i = low; i < pivot && i < high; ){
        while(v[i] < v[pivot]) i++;
        swap(v, pivot - 1, i);
        swap(v, pivot, pivot - 1);
        pivot--;
    }

    quicksort(v, low, pivot);
    quicksort(v, pivot + 1, high);
}
