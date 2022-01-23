#include <iostream>
#include <string>
using namespace std;

int main() {

	int N, mul;
	string blank = " ", star = "*";
	cin >> N;

	for (int i = 1; i < N + 1; i++) {
		for (int k = 0; k < i; k++)
			cout << star;
		for (int j = 0; j < 2 * (N - i); j++)
			cout << blank;
		for (int k = 0; k < i; k++)
			cout << star;
		cout << endl;
	}

	for (int i = N+1 ; i < 2 * N; i++) {
		for (int k = 0; k < 2 * N - i; k++)
			cout << star;
		for (int j = 0; j < 2 * (i - N); j++)
			cout << blank;
		for (int k = 0; k < 2 * N - i; k++)
			cout << star;
		cout << endl;
	}


	return 0;
}
