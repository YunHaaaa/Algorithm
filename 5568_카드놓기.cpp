#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

vector<int> v; //입력한 숫자
vector<bool> visit; //방문 여부
vector<int> selects; //뽑은 숫자
set<string> st; //만들어진 숫자들
int m, n; //m개의 숫자 중 n개를 뽑는다.

//순열 구현
void per(int depth) {
	if (depth == n) { //원하는  수 만큼 뽑으면
		string s; //완성된 숫자
		string change; //이어붙일 숫자
		for (int i = 0; i < n; i++) { //선택한 숫자를 이어붙인다.
			change = to_string(selects[i]);
			s = s + change;
		}
		st.insert(s); //만든 숫자 삽입
		return;
	}
	for (int i = 0; i < m; i++) { //중복이 허용되므로 항상 0번째부터 탐색
		if (visit[i]) { //방문한 곳이면
			continue; //무시
		}
		visit[i] = true; //현재 원소 방문처리
		selects.push_back(v[i]); //현재 뽑은 원소를 저장
		per(depth + 1); //재귀로 다시 재탐색
		visit[i] = false; //현재 원소 미방문처리
		selects.pop_back(); //현재 뽑은 원소를 삭제
	}
}

int main() {
	cin >> m;
	cin >> n;

	//m개의 숫자를 삽입
	for (int i = 0; i < m; i++) {
		int num;
		cin >> num;
		v.push_back(num);
		visit.push_back(false);
	}

	per(0); //순열 실행

	cout << st.size(); //만들 수 있는 숫자의 갯수 출력
}

/*#include <iostream>
using namespace std;

int comb(int n, int k, int* a) {
    return n * comb(n-1, k, a) / count
        // 나온 수 만큼 나누면 결국 팩토리얼로 나운것과 같은 결과

}

int main() {

    int n, k, count = 0;
    cin >> n >> k;

    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        count++;
        // 그 숫자가 몇 번 나왔는지를 count 에 저장
    }

    cout << comb(n, k, a);

    return 0;
}
*/
