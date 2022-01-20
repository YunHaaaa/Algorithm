#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	//cin >> s;
	getline(cin, s);
	while (s != "") {
		cout << s << endl;
		getline(cin, s);
	}
	return 0;
}
