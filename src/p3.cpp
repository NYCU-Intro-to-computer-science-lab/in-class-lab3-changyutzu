// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n == 2) {
        return true;
    }
        if (n % 2 == 0) {
        return false;
    }
    int limit = static_cast<int>(sqrt(n));
    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    if (cin >> n) {
        if (n == 4) {
            cout << "2 2" << "\n";
            return 0;
        }
        for (int a = 3; a <= n / 2; a += 2) {
            int b = n - a;
            if (isPrime(a) && isPrime(b)) {
                cout << a << " " << b << endl; 
                return 0; 
            }
        }
    }
    return 0;
}
