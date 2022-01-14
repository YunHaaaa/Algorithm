#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n, k, count = 0;
	cin >> n >> k;

	int* p = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		if (k / p[i]) {
			count += k / p[i];
			k = k % p[i];
		}
	}
	cout << count;

	return 0;
}
