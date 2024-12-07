#include <iomanip>
#include <iostream>

using namespace std;
int main() {

    long long T;
    double F, C;
    cin >> T;

    F = (T * 9.0) / 5.0 + 32.0;
    C = (T -32.0) * 5.0 / 9.0;
    cout << fixed << setprecision(1) << F << endl;
    cout << fixed << setprecision(12) << C << endl;

    return 0;
}