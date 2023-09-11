#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int count = 0;
	for (int i = 0; i < str.size(); i++) {
		if ('A' <= str[i] && str[i] <= 'C') {
			count += 3;
		}
		else if ('D' <= str[i] && str[i] <= 'F') {
			count += 4;
		}
		else if ('G' <= str[i] && str[i] <= 'I') {
			count += 5;
		}
		else if ('J' <= str[i] && str[i] <= 'L') {
			count += 6;
		}
		else if ('M' <= str[i] && str[i] <= 'O') {
			count += 7;
		}
		else if ('P' <= str[i] && str[i] <= 'S') {
			count += 8;
		}
		else if ('T' <= str[i] && str[i] <= 'V') {
			count += 9;
		}
		else if ('W' <= str[i] && str[i] <= 'Z') {
			count += 10;
		}
	}
	
	
	cout << count;
}
