#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a < b;
}

int main() {
	const int num = 9;
	int height[num];
	int count = 0;

	for (int i = 0; i < num; i++) {
		cin >> height[i];
		count += height[i];
	}

	sort(height, height + 9, compare);
	int first, second;

	for (int i = 0; i < num-1; i++) {
		for (int j = i+1; j < num; j++) {
			if (count - height[i] - height[j] == 100) {
				first = i;
				second = j;
			}
		}
	}

	for (int k = 0; k < num; k++) {
		if (k != first && k != second)
			cout << height[k] << endl;
	}

	return 0;
}
