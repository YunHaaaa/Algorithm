#include <iostream>

using namespace std;

int main() {

	int x, y;
	cin >> x >> y;

	int date = 0;

	int cal[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (int i = 0; i < x-1; i++) {
		date += cal[i];
	}

	date += y;

	string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };

	cout << day[date%7];

	return 0;
}
