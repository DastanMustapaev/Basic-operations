#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    double result = 0.0;
    result = (a + sqrt(b)) / c;
    cout << result << endl;

    return 0;
}