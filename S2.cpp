#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t >> n;
    while (t--) {
        string s;
        cin >> s;
        int heavy[200];
        fill(heavy, heavy + 200, -1);
        for (char c : s) {
            heavy[c + '0']++;
        }
        bool last_h = true;
        if (heavy[s[0] + '0']) last_h = false;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            char c = s[i];
            if ((last_h && !heavy[c + '0']) || (!last_h && heavy[c + '0'])) last_h = !last_h;
            else {
                flag = true;
                break;
            }
        }
        cout << (flag ? "F\n" : "T\n");
    }
}
