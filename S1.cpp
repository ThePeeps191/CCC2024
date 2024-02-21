#include <iostream>

using namespace std;
const int N_MAX = 1e6 + 5;

int n, h[N_MAX], cnt = 0;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
    for (int i = 0; i < n / 2; i++) {
        if (h[i] == h[i + n / 2]) cnt += 2;
    }
    cout << cnt << "\n";
}
