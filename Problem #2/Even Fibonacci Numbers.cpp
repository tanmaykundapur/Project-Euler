#include <iostream>

using namespace std;

unsigned long long sum, total, n, t;

int fib(unsigned long long n1, unsigned long long n2) {
    sum = n1 + n2;
    if (sum < n) {
        if (sum % 2 == 0) {
            total += sum;    
        }
        return fib(n2, sum);
    } else {
        return 0;
    }
}

int main() {
    cin >> t;
    for (int i = 0; i < t; i++) {
        sum = 0, total = 0;
        cin >> n;
        fib(1, 2);
        cout << total + 2 << "\n";
    }
    return 0;
}
