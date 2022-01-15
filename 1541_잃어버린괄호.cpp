#include <iostream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;

	vector<string> x;
	x.clear();
	
	int previous = 0;
	int current = 0;

	current = s.find('-');

	while (current != string::npos) {
		string substring = s.substr(previous, current - previous);
		x.push_back(substring);
		previous = current + 1;
		current = s.find('-', previous);
	}
	x.push_back(s.substr(previous, current - previous));

	previous = 0;
	current = 0;
	current = x[0].find('+');
	int prev_count = 0;
	while (current != string::npos) {
		string substring = x[0].substr(previous, current - previous);
		prev_count += stoi(substring);
		previous = current + 1;
		current = x[0].find('+', previous);
	}
	prev_count += stoi(x[0].substr(previous, current - previous));

	int next_count = 0;
	for (int i = 1; i < x.size(); i++) {
		previous = 0;
		current = 0;

		current = x[i].find('+');

		while (current != string::npos) {
			string substring = x[i].substr(previous, current - previous);
			next_count += stoi(substring);
			previous = current + 1;
			current = x[i].find('+', previous);
		}
		next_count += stoi(x[i].substr(previous, current - previous));


		
	}

	cout << prev_count-next_count << endl;

	return 0;
}
