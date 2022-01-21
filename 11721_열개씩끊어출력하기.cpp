#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int i = 0;
	while (s[i]) {
		if (i % 10 == 0 && i != 0)
			cout << endl;
		cout << s[i];
		i++;
	}
	return 0;
}
