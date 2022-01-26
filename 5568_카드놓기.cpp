#include <iostream>
using namespace std;

/*
팩토리얼 함수
  return 팩토리얼 함수 / count
  // 나온 수 만큼 나누면 결국 팩토리얼로 나운것과 같은 결과
*/

int main() {
   
  int n, k, count = 0;
  cin >> n >> k;
  
  int *a = new a[n];
  
  for (int i=0; i<n; i++) {
    cin >> a[i];
    count++;
    // 그 숫자가 몇 번 나왔는지를 count 에 저장
  }
  
  cout << 팩토리얼함수(n, k, a);
  
  return 0;
}
