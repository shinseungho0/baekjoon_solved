#include <iostream>
#include <stack>
using namespace std;

int main() {
	int n;
	cin >> n;
	string str;

	for (int i = 0; i < n; i++) {
		stack<string>st;
		cin >> str;
		int count = 0;
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '(') {
				st.push("(");
				count++;
			}
			else if (str[j] == ')') {
				if (st.empty() == 1) {
					count--;
					break;
				}
				else {
					st.pop();
					count--;
				}
			}
		}
		if (count == 0) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}

	}
}