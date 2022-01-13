#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int n, count = 0;
	cin >> n;

	int* p = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p, p + n);
	for (int i = 0; i < n; i++) {
		count += p[i]*(n-i);
	}

	cout << count;
	return 0;
}
