/*
	#### 문제 풀이 TIP ####
	1) a~z까지 알파벳 총 개수는 26개이므로, 크기가 26인 배열을 생성한다.
	2) ASCII 코드 값을 이용하여 입력한 문자열의 각 원소의 아스키 코드값을 'a'의 아스키 코드값으로
	   빼준 결과 값을 원소의 인덱스로 사용하여 해당 인덱스의 값을 1씩 증가시켜주면
	   각 알파벳이 몇개 들어있는지 알 수 있다.
*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
	int alpha[26] = { 0 };
	string word;

	getline(cin, word);

	for (int i = 0; i < word.length(); i++)
		alpha[word[i] - 'a'] += 1;

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
	return 0;
}