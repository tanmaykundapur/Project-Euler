#include <iostream>

using namespace std;

long smallestmultiple(int n){    
    int i , j;
    long result = 1;
    for (i=2;i<=n;i++){
        if (result%i!=0){
        
        for (j = 2;j<i;j++)
            if (i%j==0){    
                while (result%j==0)
                 result = result/j; 
            }
            result = result * i;
        }
    }
    return result;
}
int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin >> n;
        cout << smallestmultiple(n) << "\n";
    }
    return 0;
}

