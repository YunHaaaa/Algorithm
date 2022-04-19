#include<iostream>
#include<deque>
using namespace std;

int main() {
    int n, cnt = 1;
    cin >> n;
    int* b = new int[n];
    int* stack = new int[n];
    deque<char> que;

    for (int i = 0; i<n; i++)
        cin >> b[i];
    int bar = 1, count = 0, index = -1, flag = 1; 

    while (count < n) {
        for (bar; bar<=b[count]; bar++){
            stack[++index] = bar;
            //cout << "index : " << index << " bar : " << bar << endl; 
            que.push_back('+');
        }
        //cout << stack[index] << " " << b[count] << endl;

        if (stack[index] != b[count]) {
            cout << "NO" << endl;
            flag = 0;
            break;
        }
            
        while (stack[index] == b[count]){
            //cout << "index : " << index << " count : " << count-1 << endl; 
            index--;
            count++;
            que.push_back('-');
        }

    }

    if (flag) {
        for (int i=0; i<que.size(); i++){
            cout << que[i] << endl;
        }
    }
}
