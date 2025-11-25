// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;
long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return (long long)n * factorial(n - 1);
}

long long sum(int n) {
    if (n == 0) {
        return 0;
    }
    return (long long)n + sum(n - 1);
}
int main() {
    int n;
    if (cin >> n) {
        long long factorial_result = factorial(n);
        cout << factorial_result << "\n";
        
        long long sum_result = sum(n);
        cout << sum_result << endl;
    }
    
    return 0;
}
