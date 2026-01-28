#include <iostream>
using namespace std;

int main() {
    long long totalSquares = 980000;
    long long m = totalSquares / 2;  // number of odd squares

    long long result = m * (2*m - 1) * (2*m + 1) / 3;

    cout << result << endl;
    return 0;
}
