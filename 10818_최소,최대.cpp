#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {

	ios_base::sync_with_stdio(0);

	int N, max = -1000001, min = 1000001, temp;
	cin >> N;


	for (int i = 0; i < N; i++) {
		cin >> temp;
		if (temp < min)
			min = temp;
		if (max < temp)
			max = temp;
	}

	cout << min << " " << max;



	return 0;
}
