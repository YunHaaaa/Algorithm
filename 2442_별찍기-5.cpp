#include <iostream>
#include <string>
using namespace std;

int main() {

	int N, mul;
	string blank = " ", star = "*";
	cin >> N;

	for (int i = 1; i < N+1; i++) {
		for (int j = 0; j < N - i; j++)
			cout << blank;
		for (int k = 0; k < 2 * i - 1; k++)
			cout << star;
		cout << endl;
	}

	
	return 0;
}
