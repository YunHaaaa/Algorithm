#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;

	int q = n / 5;
	int five = 0, three = 0;
	for (int i = 0; i <= q; i++) {
		if ((n - i * 5) % 3 == 0) {
			five = i;
			three = (n - i * 5) / 3;
		}
	}
	int ans = five + three;
	if (ans)
		cout << ans;
	else
		cout << -1;
	return 0;
}
