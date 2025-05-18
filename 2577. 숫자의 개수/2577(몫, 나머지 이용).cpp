#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c, n;
	int count;
	string str;
	string str2;
	cin >> a >> b >> c;
	
	int d = a * b * c;
	str = to_string(d);
	for (int i = 0; i <= 9; i++) {
		count = 0;
		for (int j = 0; j < str.length(); j++) {
			if (i == str[j] - 48) {
				count++;
			}
		}
		cout << count << endl;
	}
}