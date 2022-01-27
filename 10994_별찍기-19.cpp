#include <iostream>

using namespace std;

void star(int n) {
	if (n == 1) {
		cout << "*";
		return;
	}
		
	for (int i = 1; i <= (4 * n - 3); i++) {
		if (i % (4 * n - 3) <= 1) {
			for (int j = 0; j < (4 * n - 3); j++) {
				cout << "*";
			}
			cout << endl;
		}
		else {
			cout << "* ";
			if (2 < (i % (4 * n - 3)) && (i % (4 * n - 3)) < 4 * n - 5 )
				star(n - 1);
			// 반만 출력되고 바로 n-1로 시작되는 상황
			// -> 전체를 출력할 수 있도록 수정해야 함
			// -> return star(n-1)을 이 코드 밖으로 빼야할듯(?)
			else {
				for (int j = 4; j < (4 * n - 3); j++) {
					cout << " ";
				}
			}
			cout << " *" << endl;
			
			
		}
		
			
		
	}
}

int main() {
	int N;
	cin >> N;
	star(N);
	return 0;
}
