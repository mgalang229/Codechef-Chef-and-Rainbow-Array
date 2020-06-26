#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	bool ok = true;
	int c[7];
	memset(c, 0, sizeof(c));
	int a[100], n;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		 cin >> a[i];
	}
	for(int i = 0, j = n - 1; i <= n / 2; ++i, --j) {
		if(a[i] != a[j]) {
			ok = false;
			break;
		}
		else if(i != 0 && a[i-1] != a[i] - 1 && a[i-1] != a[i]) {
			ok = false;
			break;
		}
		else {
			if(a[i] > 0 && a[i] < 8) {
				c[a[i]-1] = 1;
			}
			else {
				ok = false;
				break;
			}
		}
	}
	for(int i = 1; i < 7; ++i) {
		c[0] += c[i];
	}
	if(c[0] != 7) ok = false;
	if(ok == true) cout << "yes";
	else cout << "no";
	cout << "\n"; 
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
