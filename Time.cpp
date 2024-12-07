#include <iostream>
using namespace std;

int main() {
    long long d, h, m, s, result;
    cin >> d >> h >> m >> s;

    result = (d * 86400) + (h * 3600) + (m * 60) + s;
    cout << result << endl;

    return 0;
}