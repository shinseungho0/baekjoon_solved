#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int arr[27] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};
	int sum = 0;

	for (int i = 0; i < str.length(); i++) {
		int temp = str[i] - 65;
		sum = sum + arr[temp];
	}

	cout << sum;
}
