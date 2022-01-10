#include <iostream>
#include <stack>
using namespace std;

int main() {
	int num, n;
	cin >> num;
	stack<int> s;
	for (int i = 0; i < num; i++) {
		cin >> n;
		s.push(n);
	}
	int min = 1000000000;
	while (s.top() != -1) {
		if (min > s.top()) {
			min = s.top();
		}
		s.pop();
	}
	s.pop();
	int min_next = 1000000000;
	while (s.size()) {
		if (min_next > s.top()) {
			min_next = s.top();
		}
		s.pop();
	}

	cout << min + min_next;
	return 0;
}
