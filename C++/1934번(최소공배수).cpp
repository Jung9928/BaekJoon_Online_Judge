/*
	#### �����ذ� TIP ####
	1) ������ �䱸�ϴ� ���� �ּҰ���� �̹Ƿ� ���� ����� �ְ�����
	   �ִ������� �̿��Ͽ� �ּҰ������ ���ϴ� ����� ����Ͽ���.

	   �ִ� ������� ��Ŭ���� ȣ������ ����Ͽ� ���ߴµ� 
	   ��� �� �ڵ�� �׳� �ܿ�� �� ���� �� ����.

	   �ּ� ������� �ִ����� * (������/�ִ�����) * (������2/�ִ�����)
	   ������ ����Ͽ��µ� �� ���� ���ذ� �Ȱ��ٸ� �׳� �ܿ�� �� ���� �� ���ٴ�
	   ������ ���.
*/

#include <iostream>

using namespace std;

// �ִ� ������� ���ϴ� �Լ�
int gcd(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	else
		return gcd(n2, n1 % n2);
}

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int num1, num2, gcd_result, lcm;
		cin >> num1 >> num2;

		gcd_result = gcd(num1, num2);			// �ִ� �����

		// �ּ� ����� = �ִ� ����� * (�ڿ��� num1 / �ִ�����) * (�ڿ��� num2 / �ִ�����)
		lcm = gcd_result * (num1 / gcd_result) * (num2 / gcd_result);

		cout << lcm << "\n";
	}
	return 0;
}