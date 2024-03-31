#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    int count = 0;
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            count += (i+1);  // Increment by i + 1
            ++i;
        }  else {
            ++j;
        }
    }

    cout << count << endl;

    return 0;
}
