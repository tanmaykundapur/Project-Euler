#include <iostream>

using namespace std;

int sum, total, n, t;

int fib(int n1, int n2) {
    sum = n1 + n2;
    if (sum <= n) {
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
