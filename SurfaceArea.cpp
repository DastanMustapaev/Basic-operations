#include <iostream>
using namespace std;
int main() {

    long long a, b, c;
    cin >> a >> b >> c;

    long long S = (a * b) * 2 + (a * c) * 2 + (b * c) * 2;
    cout << S << endl;

    return 0;
}