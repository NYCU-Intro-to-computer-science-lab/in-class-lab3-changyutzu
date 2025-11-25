// 題目 2：完美鋪磚計畫 (The Perfect Tiling Project) - 20分

#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
int main() {
    if (cin >> a >> b) {
        int result = gcd(a, b);
        cout << result << endl;
    }
    
    return 0;
}
