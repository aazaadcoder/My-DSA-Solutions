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
        int currentNum = arr[i];
        
        // to store previous number while shifting sorted part to insert currentnum 
        int prevNum = 0 ;
        // looping the sorted part
        for( int j = 0  ; j < i+1 ; j++){
            if(arr[j] < currentNum) {
                continue;
            } else {
                // if current num is smaller than arr[j] insert current num 
                // at j
                
                prevNum = arr[j];
                arr[j] = currentNum;
                
                // shift all other sorted nums to right  
                for( int k = j +1 ; k < i+1 ; k++){
                    int temp = arr[k];
                    arr[k] = prevNum ;
                    prevNum = temp ; 
                }
                
                // break out of looping sorted part and now sort the
                // next element of the unsorted part
                
                
                
                
                
                break ;
            }    
        } 
    }
    
    
    
    
}