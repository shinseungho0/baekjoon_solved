#include <iostream>
using namespace std;

int main() {
	int n, a;
	cin >> n >> a;
	int b = n * a;
	int arr[5] = { 0, };

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	for (int k : arr)
		cout << k - b << ' ';
 }