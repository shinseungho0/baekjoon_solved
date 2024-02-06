#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int i = 0;
	int count = 0;
	while (1) {
		if (i >= str.length()) {
			cout << count;
			return 0;
		}
		if (str.substr(i, 3) == "dz=") {
			count++;
			i += 3;
			continue;
		}
		string st = str.substr(i, 2);
		if (st == "c=") {
			count++;
		}
		else if (st == "c-") {
			count++;
		}
		else if (st == "d-") {
			count++;
		}
		else if (st == "lj") {
			count++;
		}
		else if (st == "nj") count++;
		else if (st == "s=") count++;
		else if (st == "z=") count++;
		else {
			count++;
			i += 1;
			continue;
		}
		i += 2;
		
	}
}