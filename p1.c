int find_second_smallest(int arr[], int n){
    int first = INT_MAX , second = INT_MAX;
    for(int i = 0; i<n; i++){
        if(arr[i]<first){
            second = first;
            first = arr[i];
        }
        else if(arr[i]<second && arr[i] != first){
            second = arr[i];
        }
    }
    return second;
}

