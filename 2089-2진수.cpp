#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, bin = 0;
	cin >> N;
	
	if (N < 0) {
		while (N != 0) {
			N /= 2;
			bin++;
		}
		N += pow(2, bin);
	}
	
	while (N != 0) {

	}

	return 0;
}
