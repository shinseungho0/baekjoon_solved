#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;
	while (1) {
		int count1 = 0;
		int count2 = 0;
		getline(cin, str);
		stack<string>st;
		if (str == ".") break;
		else {
			for (int i = 0; i < str.length(); i++) {
				if (str[i] == '(') {
					st.push("(");
					count1++;
				}
				else if (str[i] == ')') {
					if (st.empty() == 1 || st.top() == "[") {
						count1--;
						break;
					}
					else {
						st.pop();
						count1--;
					}
				}

				if (str[i] == '[') {
					st.push("[");
					count2++;
				}
				else if (str[i] == ']') {
					if (st.empty() == 1 || st.top() == "(") {
						count2--;
						break;
					}
					else {
						st.pop();
						count2--;
					}
				}
			}
			if (count1 == 0 && count2 == 0) {
				cout << "yes" << '\n';
			}
			else {
				cout << "no" << '\n';
			}
		}
		
		
	}
}
