#include <iostream>
#include <vector>

using namespace std;
typedef pair<char, pair<int, int>> pp;
const int N_MAX = 3e5 + 5;

int n, a[N_MAX], b[N_MAX];
vector<pp> o;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) continue;
        else if (a[i] == b[i]) {
            int j;
            for (j = i + 1; j < n && b[j] == a[i] && a[j] != a[i]; j++) a[j] = a[i]; // swipe right
            j--;
            if (i != j) o.push_back({'R', {i, j}});
            for (j = i - 1; j >= 0 && b[j] == a[i] && a[j] != a[i]; j--) a[j] = a[i]; // swipe left
            j++;
            if (i != j) o.push_back({'L', {j, i}});
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    cout << o.size() << "\n";
    for (auto oo : o) cout << oo.first << " " << oo.second.first << " " << oo.second.second << "\n";
}
