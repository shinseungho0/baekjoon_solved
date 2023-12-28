#include <iostream>
using namespace std;

int arr[8] = { 0, };
int srh(int n) {
	int a = 1;
	int b = 0;
	while (n / a != 0) {
		a *= 10;
		b++;
	}
	int c = 100;
	int d = 10;
	arr[0] = n % 10;
	for (int i = 1; i < b; i++) {
		if (i == b - 1) {
			arr[i] = n / d;
			break;
		}
		arr[i] = (n % c) / d;
		c *= 10;
		d *= 10;
	}
	return n;
}

int main() {
	int n;
	cin >> n;
	int a = 0;
	int result = 0;
	for (int i = 1; i < n; i++) {
		a = srh(i);
		for (int j = 0; j < 8; j++) a += arr[j];
		if (a == n) {
			result = srh(i);
			break;
		}
	}
	if (result == 0) cout << 0;
	else cout << result;
}