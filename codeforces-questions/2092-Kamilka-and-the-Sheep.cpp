#include <iostream>
#include <vector>
#include<limits.h>
using namespace  std;
int main() {
    int t , n , a;
    cin >> t;
    while(t) {
        cin >> n;
 
        int min = INT_MAX;
        int max = INT_MIN;
        while(n){
            cin >>a ;
            if(a > max ){
                max =a;
            }
            if(a < min){
                min = a;
            }
            
            n--;
        }
        
        cout << max -min << endl;
        
        
        
        t--;
    }
    
    
}