#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >>  m;
	int arr[10000] = { 0, };

	for (int i = 1; i <= n; i++) {
		int a;
		cin >> a;
		arr[i] = arr[i - 1] + a;
	}
	int count = 0;
	int i = 1;
	while (i <= n) {
		if (arr[i] == m) {
			count++;
			i++;
		}
		else if (arr[i] < m) {
			i++;
		}
		else {
			for (int j = 1; j < i; j++) {
				if (arr[i] - arr[j] == m) count++;
			}
			i++;
		}
	}
	cout << count;
}
