#include <algorithm>
#include <iostream>
using namespace std;
int a[110];
int b[110];
int c[110];
int p[110];
void solve() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {
    cin >> b[i];
  }

  for (int i = 0; i < n; ++i) {
    cin >> c[i];
  }

  p[0] = a[0];

      for (int i = 1; i < n - 1; i++) {
       if (a[i] != p[i - 1]) {
        p[i] = a[i];
    }

    else {
      p[i] = b[i];
    }
  }

  if (a[n - 1] != p[0] && a[n - 1] != p[n - 2])
    p[n - 1] = a[n - 1];
  else if (b[n - 1] != p[n - 2] && b[n - 1] != p[0])
    p[n - 1] = b[n - 1];
  else
    p[n - 1] = c[n - 1];

  for (int i = 0; i < n; ++i)
    cout << p[i] << " ";

    cout<<endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}