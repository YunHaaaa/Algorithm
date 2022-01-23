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
			cout << star;

		cout << endl;
	}

	for (int i = N + 1; i < 2 * N; i++) {
		for (int k = 0; k < i-N; k++)
			cout << blank;
		for (int j = 0; j < 2 * N - i; j++)
			cout << star;

		cout << endl;
	}


	return 0;
}
