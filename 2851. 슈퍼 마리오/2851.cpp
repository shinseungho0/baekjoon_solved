#include <iostream>
using namespace std;

int main() {
	int arr[11] = { 0, };
	for (int i = 1; i < 11; i++) {
		int tmp;
		cin >> tmp;
		arr[i] = arr[i - 1] + tmp;
	}
	int max = -100;
	for (int i = 1; i < 11; i++) {
		if (arr[i] > 100) {
			if (100 - arr[i - 1] < arr[i] - 100) {
				max = arr[i - 1];
				break;
			}
			else {
				max = arr[i];
				break;
			}
		}
		else max = arr[i];
	}
	cout << max;
}