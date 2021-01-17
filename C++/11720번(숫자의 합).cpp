/*
	#### 문제 해결 TIP ####
	1) 문자'0'의 ASCII 값을 알면 해결 가능한 문제이다. \
	2) char형 변수에 문자를 입력하고 해당 문자의 ACSII 코드 값과
	   '0'의 ASCII 코드 값을 빼면 원하는 정수 값을 더할 수 있다.
*/

#include <iostream>

using namespace std;

int main()
{
	int n, sum = 0;
	char num;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		sum += (num - '0');
	}
	cout << sum;
	return 0;
}