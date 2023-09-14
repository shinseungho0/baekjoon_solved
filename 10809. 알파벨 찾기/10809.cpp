#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	cin >> str;

	int arr[26]; // a ~ z 를 넣을 배열
	int arr2[26]; // a ~ z 를 비교하여 결과를 저장 할 배열
	fill_n(arr2, 26, -1); // arr2 전부 -1로 초기화
	for (int i = 0; i < 26; i++) {
		arr[i] = i; // a ~ z 를 0 ~ 25 정수형으로 바꿈
	}
	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < str.length(); j++) { // a부터 z까지 순서대로 str문자열 각자리 비교
			int temp = str[j] - 97; // 입력받은 str문자열을 정수형으로 바꾼다
			if (arr[i] == temp) { // 
				arr2[i] = j;
				break;
			}
		}
	}
	for (int i = 0; i < 26; i++) {
		cout << arr2[i] << ' ';
	}
}