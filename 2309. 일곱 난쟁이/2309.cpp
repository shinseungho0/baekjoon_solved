#include <iostream>
using namespace std;

void bubble_sort(int a[]);

void swap(int &a, int &b) {
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main() {
	ios::sync_with_stdio(0);
	cout.tie(NULL);
	cin.tie(NULL);
	int arr[9] = { 0, };
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	bubble_sort(arr);
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - (arr[i] + arr[j]) == 100) {
				for (int k = 0; k < 9; k++) {
					if (k == i || k == j) continue;
					else
						cout << arr[k] << '\n';
				}
				return 0;
			}
		}
	}
}

void bubble_sort(int a[]) {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8; j++) {
			if (a[j] > a[j + 1]) swap(a[j], a[j + 1]);
		}
	}
}