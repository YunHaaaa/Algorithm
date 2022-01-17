#include <iostream>
#include <map>
using namespace std;

int main() {

	int N;
	cin >> N;

	map<string, int> count;
	string* books = new string[N];

	for (int i = 0; i < N; i++) {
		cin >> books[i];
	}

	for (int i = 0; i < N; i++) {
		if (count.find(books[i]) != count.end())
			count[books[i]] += 1;
		else
			count.insert({ books[i], 1 });
	}

	int max = 0;
	string max_ = "";
	for (auto iter = count.begin(); iter != count.end(); iter++) {
		if (max < iter->second) {
			max = iter->second;
			max_ = iter->first;
		}
	}

	cout << max_;

	return 0;
}
