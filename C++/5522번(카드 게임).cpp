/* 
#### ���� Ǯ�� ####
- �׳� 5�� �Է� �� ���� ���� �����ְ� ���� ����ϸ� �Ǵ� �������ʹ���.

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