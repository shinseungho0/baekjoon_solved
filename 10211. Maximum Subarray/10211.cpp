#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(NULL);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int arr[1001] = { 0, };
		int m;
		cin >> m;
		for (int j = 1; j <= m; j++) {
			int tmp;
			cin >> tmp;
			arr[j] = arr[j - 1] + tmp;
		}
		int max = -1000000;
		for (int j = m; j >= 1; j--) {
			for (int k = j; k >= 1; k--) {
				if ((arr[j] - arr[k - 1]) > max) max = arr[j] - arr[k - 1];
			}
		}
		cout << max << '\n';
	}
}
