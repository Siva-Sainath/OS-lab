int countDuplicates(int arr[]; int n){
    int count = 0;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }
            else if(arr[i] != arr[j]){
                continue;
            }
        }
    }
    printf("%d", count);
}
