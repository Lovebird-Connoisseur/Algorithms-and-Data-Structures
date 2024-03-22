void swap(int v[], int i1, int i2){
    int tmp = v[i1];
    v[i1] = v[i2];
    v[i2] = tmp;
}

void insertion_sort(int v[], int length){
    for(int i = 0; i < length; i++){
        int j = i;
        while(j > 0 && v[j-1] > v[j]){
            swap(v, j, j - 1);
            j--;
        }
    }
}
