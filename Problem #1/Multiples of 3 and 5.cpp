#include <iostream>

using namespace std;

int main(){

int t, n, sum;
    cin >> t;
    for(int i=0; i < t; ++i){
        cin >>  n; 
        sum=0;
        for(int i = 0; i < n; ++i){
                if (i%3 == 0 ||i%5 == 0) {
                    sum+=i;
                }
        }
        cout << sum <<"\n";
    }
}
