#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[10] = { 0, };
	string str = to_string(n);

	for (int i = 0; i < str.length(); i++) {
		int a = str[i] - 48;
		if (a == 6 || a == 9) {
			if (arr[6] < arr[9]) arr[6]++;
			else arr[9]++;
		}
		else arr[a]++;
	}
	
	for (int i = 0; i < 10; i++) {
		for (int j = 1; j < 10 - i; j++) {
			if (arr[j] > arr[j - 1]) {
				int temp;
				temp = arr[j];
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
		}
	}
	cout << arr[0];
}