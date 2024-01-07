#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	long arr[100001] = { 0, };
	long arr2[100001] = { 0, };

	for (int i = 1; i <= n; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = arr[i - 1] + tmp;
		arr2[i] = tmp;
	}
	long sum = 0;
	for (int i = 1; i < n; i++) {
		sum += arr2[i] * (arr[n] - arr[i]);
	}
	cout << sum;
}