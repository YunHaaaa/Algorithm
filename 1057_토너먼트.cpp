#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, kim, im, n, div, num = 0, cmp_im = 0, cmp_kim = 0, round = 0;

	cin >> N >> kim >> im;
	n = N;
	while (n != 0) {
		n /= 2;
		num += 1;
	}

	for (int i = num; i > 0; i--) {
		div = pow(2, i);
		//cout << "div : " << div << " ";
		if (kim % div == 0)
			cmp_kim = i - 1;
		else
			cmp_kim = kim / div;
		if (im % div == 0)
			cmp_im = i - 1;
		else
			cmp_im = kim / div;

		//cout << "cmp : " << cmp_kim << " "<< cmp_im << endl;
		if (cmp_im == cmp_kim)
			round = i;
	}
	cout << round << endl;

	return 0;
}
