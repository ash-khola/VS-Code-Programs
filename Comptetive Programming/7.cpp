#include <bits/stdc++.h>
using namespace std;

int main() {
	int x = -1;
	cin >> x;
	while (true) {
		long long a[x];
		long long cost = 0;

		for (int i = 0; i < x; i++) {
			cin >> a[i];
		}

		for (int i = 1; i < x ; i++) {
			cost += abs(a[i - 1]);
			// cout << cost << endl;
			a[i] += a[i - 1];
		}

		cout << cost << endl;
		cin >> x;
		// cout << x << endl;
		if (x == 0) {
			break;
		}
	}

	return 0;
}