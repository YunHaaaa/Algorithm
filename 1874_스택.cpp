#include<iostream>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    int* b = new int[n];
    int* stack = new int[n];

    for (int i = 0; i<n; i++)
        cin >> b[i];
    int bar = 1, count = 0, index = -1, flag = 0; 
    while (count < n) {
        for (bar; bar<=b[count]; bar++){
            stack[++index] = bar;
            cout << "index : " << index << " bar : " << bar << endl; 
            cout << "+" << endl;
            flag++;
        }
        cout << stack[index] << " " << b[count] << endl;

        while (stack[index] == b[count]){
            cout << "index : " << index << " count : " << count-1 << endl; 
            index--;
            count++;
            cout << "-" << endl;
            flag--;
        }
    }
}
