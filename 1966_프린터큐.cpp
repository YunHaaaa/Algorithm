#include<iostream>
using namespace std;

int main() 
{
    int T, n, m;
    cin >> T;
    for (int t=0; t<T; t++){
        cout << endl;
        cin >> n >> m;
        int* a = new int[2*n-1];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=n; i<2*n-1; i++)
            a[i] = 0;

        int j = n, I=0;
        int max, count=0;
        int flag;
        while (j > 0){
            max = a[I];
            flag = 1;
            for (int i=I; i<I+j; i++){
                if (a[i] > max) {
                    a[n+count] = max;
                    cout << n+count << ", " << max << endl;
                    count++;
                    flag = 0;
                    break;
                }
            }
            if (flag){
                cout << "I : " << a[I] << endl;
                j--;
            }
            I++;
        }
    }
    return 0;
}
