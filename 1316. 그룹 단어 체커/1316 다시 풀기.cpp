#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int count = 0;
	for (int i = 0; i < n; i++) {
		int ox = 1;
		string str;
		cin >> str;
		if (str.length() == 1 || str.length() == 2) {
			count++; 
			continue;
		}
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == str[j + 1]) continue;
			else {
				for (int k = j + 1; k < str.length(); k++) {
					if (str[j] == str[k]) {
						ox = 0;
						break;
					}
				}
				
			}
		}
		if (ox == 1) count++;
	}
	cout << count;
}