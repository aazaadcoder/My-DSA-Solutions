void insertionSort(vector<int>& arr) {
    /* 1. in insertion sort we first assume the first element 
    to be sorted part of the array and rest part as unsorted
    2. now we loop the unsorted part and insert each unsorted element
    in the right position in th sorted path by swaping or shifting 
    using a inner loop
    3. and with each iteration the sorted part increase and finally
    the whole array is sorted 
    
    */
    
    
    // looping the unsorted part
    for( int  i = 1  ; i < arr.size() ; i++){
        // current num that has to be inserted into the sorted part
        int j = i ;
        
        // here we loop from the right of the sorted array and shift the currentnum to 
        // left if it is less than the num to its right 
        
        int currentNum = arr[i];
        while(j > 0 && currentNum < arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
        
        
        
        
        
    }
    
    
    
    
}