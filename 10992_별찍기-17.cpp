#include <iostream>
#include <string>
using namespace std;

int main() {

	int N, mul;
	string blank = " ", star = "*";
	cin >> N;

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < N - i; j++)
			cout << blank;
		for (int j = 1; j < 2 * i; j++)
			if ( j % (2 * i - 1) <= 1 )
				cout << star;
			else 
				cout << blank;
		cout << endl;
	}

	for (int i = 0; i < 2 * N - 1; i++)
		cout << star;
	cout << endl;

	return 0;
}
