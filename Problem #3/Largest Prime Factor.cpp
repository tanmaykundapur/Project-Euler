#include <iostream>

using namespace std;


int main(){
    unsigned long long t,n,i,j,k, primeFactor,counter;
    cin >> t;

    for(i = 0; i < t; i++){ //Number of Test Cases
        cin >> n; //Given Number
        for (j = 2; j <= n+1; ++j) { //All possible divisors for N

            if (n%j==0){ // If divisor is divisible
                    counter=0;
                for (k=2; k<j;k++) { // Check if divisor is prime

                    if(j%k != 0) { //Divisor numbers do not divide
                        counter++;
                    }
                    if (counter == (j-2)){ //Number is prime
                        primeFactor = j;
                        
                    }
                    if (j==(n-1)) {
                    j=k=n;
                    }
                    
                    if (n%j==0 && primeFactor == 0) {
                        primeFactor = n;
                        j=k=n;
                    }
                }     
            }
        }

    cout << primeFactor <<"\n";    
    }
    return 0;
}
