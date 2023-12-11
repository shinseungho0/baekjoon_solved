#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;
	int arr[50][50] = { 0, };

	for (int i = 0; i < num; i++) {
		cin >> arr[i][0];
		cin >> arr[i][1];
	}
	for (int i = 0; i < num; i++) {
		int count = 1;
		int min1 = arr[i][0];
		int min2 = arr[i][1];
		for (int j = 0; j < num; j++) {
			if (min1 < arr[j][0] && min2 < arr[j][1]) {
				count++;
			}
		}
		arr[i][2] = count;
	}

	for (int i = 0; i < num; i++) {
		cout << arr[i][2] << ' ';
	}

}
