#include <iostream>
using namespace std;

void swap(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}


int main() {
	int n, m;
	cin >> n >> m;
	int arr[100] = { 0, };
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
		}
	}
	int cnt = arr[0] + arr[1] + arr[2];
	int tmp = 0;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				tmp = arr[i] + arr[j] + arr[k];
				if (tmp <= m && tmp > cnt) cnt = tmp;
			}
		}
	}
	cout << cnt;
}