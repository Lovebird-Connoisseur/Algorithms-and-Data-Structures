int binary_search(int v[], int low, int high, int value){
    if(low > high){
        return -1;
    }
    int pivot = (high + low)/2;
    if(value == v[pivot]){
        return pivot;
    }
    if(value > v[pivot]){
        return binary_search(v, pivot + 1, high, value);
    }
    return binary_search(v, low, pivot, value);
}
