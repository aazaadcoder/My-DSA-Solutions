// link to question : https://bit.ly/3ppA6YJ

#include<iostream>
#include<vector>
using namespace std;


void selectionSort(vector<int> &arr) {


    
    // in selection sort we iterate the array n-1 times and 
    // try to find out the minimum number in each iteration 
    // and then replace the first element of the iteration 
    // with the minimum number found and then increment the 
    // starting of the next interation by 1
    
    // loop thourgh the array n-1 times
    for(int i = 0 ; i < arr.size() ; i++){
        // variable to store min number index in each iteration 
        int minNumIndex = 0 ;
        
        // iterate through the array starting from i to end
        for( int j = i ; j < arr.size() ; j++){
            
            // find the index of minimum number in a iteration 
            if(arr[j] < arr[minNumIndex]){
                minNumIndex = j;
            }
            
        }
        
        // now replace the first number with minum number
        int temp = arr[minNumIndex];
        arr[minNumIndex] = arr[i];
        arr[i] = temp;
        
            
    }
}


void printVector(vector <int> arr){
    for( int i = 0 ; i << arr.size(); i++){
        cout << arr[i] << " ";
    }
}
int main(){
    vector <int> array = {3, 2, 1};
    printVector(array);
    // selectionSort(array);

    return 0 ; 
}