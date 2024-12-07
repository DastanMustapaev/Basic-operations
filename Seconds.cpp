#include <iostream>

using namespace std;
int main() {

    long long T, d, h, m, s;
    cin >> T;

    if (T >= 86400) {
        d = T / 86400;
        long long j = T % 86400;
        h = j / 3600;
        long long k = j % 3600;
        m = k / 60;
        s = k % 60;
        cout << d << " " << h << " " << m << " " << s << endl;
    } else {
        d = 0;
        long long j = T % 86400;
        h = j / 3600;
        long long k = j % 3600;
        m = k / 60;
        s = k % 60;
        cout << d << " " << h << " " << m << " " << s << endl;
    }

    return 0;
}