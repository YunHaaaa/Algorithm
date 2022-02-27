// 재귀 호출을 이용해서 해결
// 재귀함수 내에서 3등분 중 첫번째 세번째만 출력되고 두번째는 " "가 출력하도록 구현

#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>

using namespace std;

void sol(int n) {
	if (n == 0) {
		printf("-");
		return;
	}

	sol(n - 1);

	for (int i = 0; i < pow(3, n - 1); i++)
		printf(" ");

	sol(n - 1);

}

int main(void) {
	int n;
	while (scanf_s("%d", &n) != EOF) {
		sol(n);
		printf("\n");
	}
}

/*
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;


string* kantor(string* arr, int length, int count) {
	int p = pow(3, count);
	if (count / 3 != 1) {
		for (int i = 0; i < length; i++) {
			for (int k = 0; k <= p; k++) {
				try {
					if (i % (length / p) == 3 * k + 1) {
						arr[i] = " ";
					}
				}
				catch (int exeption) {
					return arr;
				}

			}
		}
		count++;
		return kantor(arr, length, count);
	}
	return arr;
}



int main() {

	int n, length, count;

	cin >> n;

	length = pow(3, n);
	count = 0;

	string* array = new string[length];
	
	for (int i = 0; i < length; i++) {
		array[i] = "-";
	}
	
	array = kantor(array, length, count);

	for (int i = 0; i < length; i++) {
		cout << array[i];
	}




	return 0;
}

*/