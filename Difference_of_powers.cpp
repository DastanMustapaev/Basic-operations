#include <cmath>
#include <iostream>

using namespace std;

int main() {
    short a, b;
    cin >> a >> b;
    long long result;
    result = pow(a, b) - pow(b, a);
    cout << result << endl;

    return 0;
}