/*
	#### ���� �ذ� TIP ####
	1) ����'0'�� ASCII ���� �˸� �ذ� ������ �����̴�. \
	2) char�� ������ ���ڸ� �Է��ϰ� �ش� ������ ACSII �ڵ� ����
	   '0'�� ASCII �ڵ� ���� ���� ���ϴ� ���� ���� ���� �� �ִ�.
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