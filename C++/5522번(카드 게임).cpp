/* 
#### 문제 풀이 ####
- 그냥 5번 입력 한 수를 전부 더해주고 값을 출력하면 되는 완전기초문제.

*/


#include <iostream>

using namespace std;

int main()
{
	int total = 0, score = 0;

	for (int i; i < 5; i++)
	{
		cin >> score;
		total += score;
	}

	cout << total;

	return 0;
}