#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int arr[26] = {0,};
	for (int i = 0; i < str.length(); i++) {
		int j = str[i] - 97;
		arr[j]++;
	}
	for (auto a : arr)
		cout << a << ' ';	
}