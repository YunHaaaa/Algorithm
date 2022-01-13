#include <iostream>
using namespace std;

int main() {
	int n, m, j, k;

	cin >> n >> m >> j;

	int first = 1, last = m, move = 0;

	for (int i = 0; i < j; i++) {
		cin >> k;

		while (!((first <= k) && (k <= last)) && ((last <= n) && (first >= 1))) {
			if (first > k) {
				first--;
				last--;
			}
			else {
				first++;
				last++;
			}
			move++;
		}
	}
	cout << move;

	return 0;
}
