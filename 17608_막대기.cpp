#include <iostream>
#include <stack>
using namespace std;

int main() {
	int num, n, max = 0, count = 0;
	stack<int> s;

	cin >> num;
	for(int i=0; i < num; i++) {
		cin >> n;
		s.push(n);
	}
	
	while (s.size()) {
		if (max < s.top()) {
			max = s.top();
			count++;
		}
		s.pop();
	}
	cout << count;	
}
