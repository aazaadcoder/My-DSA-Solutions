#include <iostream>
#include <vector>
using namespace std ;
int main() {
    int t, n, a ;
    cin >> t;
    int required[10]  = {3, 1, 2, 1, 0, 1, 0 , 0, 0, 0};

    
    while(t){
        cin >> n ;
        vector <int> input;
            int collected[10] = {0, 0 , 0, 0, 0,0 , 0, 0, 0, 0};
        int output = 0;
        
        for( int i = 0 ; i < n ; i++){
            cin >> a ;
            input.push_back(a);
        }
        
        for( int i = 0 ; i < n ; i++){
            
            collected[input[i]]++;
            
            if(required[0] <= collected[0] && required[1] <= collected[1] && required[2] <= collected[2] && required[3] <= collected[3] &&required[5] <= collected[5]){
                output = i + 1  ;

                break;
            }
            
        }
        
        cout << output << endl ; 
        
        
        t--;
    }

    return 0;
}