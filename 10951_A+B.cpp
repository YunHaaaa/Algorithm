#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<string> split(string str, char delimiter);

int main() {

	string s;
	
	while (true) {
		getline(cin, s);
		vector<string> result = split(s, ' ');
		
		if (s == "")
			break;
		cout << stoi(result[0]) + stoi(result[1]) << endl;
	}
	return 0;
}

vector<string> split(string input, char delimiter) {
    vector<string> answer;
    stringstream ss(input);
    string temp;
 
    while (getline(ss, temp, delimiter)) {
        answer.push_back(temp);
    }
 
    return answer;
}
