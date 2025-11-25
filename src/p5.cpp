#include <iostream>
#include <cmath>
using namespace std;
void hanoi(int n, int from, int to, int aux) {
    if (n == 0) {
        return;
    }
    hanoi(n - 1, from, to, aux);
    cout << "Move disk " << n << " from " << from << " to " << aux << endl;
    hanoi(n - 1, to, from, aux);
    cout << "Move disk " << n << " from " << aux << " to " << to << endl;
    hanoi(n - 1, from, to, aux);
}

int main() {
    int n;
    if (cin >> n) {
        hanoi(n, 1, 3, 2);
    }
    

    return 0;
}
