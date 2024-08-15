#include <iostream>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long min_val = a;
    long long max_val = a;

    if (b < min_val) {
        min_val = b;
    }
    if (b > max_val) {
        max_val = b;
    }
    
    if (c < min_val) {
        min_val = c;
    }
    if (c > max_val) {
        max_val = c;
    }

    cout << min_val << " " << max_val << endl;
    return 0;
}
