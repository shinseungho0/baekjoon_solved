#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(NULL);
	cin.tie(0);
	cout.tie(0);
	int n, m; // n은 데이터 개수, m은 합을 구할 횟수
	cin >> n >> m;
	int arr[100000] = {};
	for (int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = arr[i - 1] + tmp;
	}

	for (int i = 0; i < m; i++) {
		int s, e;
		cin >> s >> e;
		cout << arr[e] - arr[s - 1] << '\n';
	}
}