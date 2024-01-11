#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cout.tie(NULL);
	cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	int arr[100002] = { 0, };

	for (int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = arr[i - 1] + tmp;
	}
	int arr2[100002] = { 0, };
	int max = -100000000;
	for (int i = 1; i <= n - m + 1; i++) {
		if (max < arr[i + m - 1] - arr[i - 1]) max = arr[i + m - 1] - arr[i - 1];
	}
	cout << max;
}