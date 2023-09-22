#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;
	int arr[26] = {}; // a ~ z 까지 각 알파벳이 몇 번 나올지 확인 할 배열
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 97) { // 아스키코드 97은 A
			int tmp = str[i] - 97;
			arr[tmp]++;
		}
		else if (str[i] >= 65) { // 아싀코드 65는 a
			int temp = str[i] - 65; 
			arr[temp]++;
		}
	}
	int count1 = 0, count2 = 0; // count1은 문자열에 있는 알파벳중 최고로 많은게 몇개인지 알려고함
	for (int i = 0; i < 26; i++) {
		if (arr[i] >= count1) {
			count1 = arr[i];
		}
	}
	int s; // s에 제일 많은 알파벳의 아스키코드를 넣을거임
	for (int i = 0; i < 26; i++) {
		if (arr[i] == count1) {
			s = i + 65;
			count2++; //count2는 최고 갯수를 가진 알파벳이 몇개 있는지 알려고함 즉 최고 갯수의 알파벳이 2개면 중복이므로 안됨
		}
	}
	char a = s;
	if (count2 == 1) {
		cout << a; // 최고 갯수를 가진 알파벳이 1개이면 정상 출력
	}
	else cout << '?';
}