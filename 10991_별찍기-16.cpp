#include <iostream>
#include <string>
using namespace std;

int main() {

	int N, mul;
	string blank = " ", star = "*";
	cin >> N;

	for (int i = 1; i < N + 1; i++) {
		for (int k = 0; k < N-i; k++)
			cout << blank;
		for (int j = 0; j < i; j++)
			cout << star << blank;

		cout << endl;
	}

	return 0;
}
