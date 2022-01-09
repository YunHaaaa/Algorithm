#include <iostream>
#include <algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int num;
	string s;
	cin >> num;
	cin >> s;
	
	int count = 1;
	int L = 0;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == 'S')
			count++;
		else {
			L++;
			if (L == 2) {
				count++;
				L = 0;
			}
		}
	}
	if (L == 1)
		count++;
	cout << min(count, num) << "\n";
	return 0;
}
