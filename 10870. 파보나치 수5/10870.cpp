#include <iostream>
using namespace std;

int main() {
	int n; 
	cin >> n;
	int arr[100] = { 0, };
	arr[1] = 1;

	for (int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		if (i == n) cout << arr[i];
	}
	if (n == 0) cout << 0;
	if (n == 1) cout << 1;
	
}
