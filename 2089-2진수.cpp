#include <iostream>
#include <cmath>
using namespace std;

int binary(int dec) {
	int count=0;
	while (dec != 0) {
		dec /= 2;
		count++;
	}
	return count;
}

int main() {
	int N, bin = 0, len = 0;
	cin >> N;

	if (N < 0) {
		len = binary(N) + 2;
	}
	else
		len = binary(N);

	int* a = new int[len];
	for (int i = 0; i < len; i++)
		a[i] = 0;

	int mbin = 0;
	while (N != 0) { 
		mbin = binary(N);
		if ( mbin % 2 ) { // == 1 == -
			N += pow(2, mbin+1);
		}
		else { // == 0 == +
			a[mbin] = 1;
		}
	}
	for (int i = 0; i < N; i++)
		cout << a[i];

	return 0;
}
