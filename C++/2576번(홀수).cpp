/*
	#### ���� �ذ� TIP ####
	1) �Է��� 7���� �ڿ����� �� Ȧ���� ������ ���� ���ϰ�
	   Ȧ���� �� �ּҰ��� ���ϱ� ���ؼ� sort()�Լ��� ����Ͽ� ������������ �����ϸ�
	   ù��° ���� ���� �ּҰ��� �ȴ�.

	   Ȧ���� ���� ���ϴ� �κ��� �ϴ� �ݺ��� ������ 7���� ���Ҹ� Ȧ������ �Ǻ� �� ��, 
	   ���� ������ ������ �����ϸ� �ȴ�.
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num[7], sum = 0;
	vector<int> v;
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] >> num[6];

	for (int i = 0; i < 7; i++)
	{
		if (num[i] % 2 != 0)
		{
			v.push_back(num[i]);
			sum += num[i];
		}
	}
	if (v.size() == 0)
		cout << -1 << "\n";
	else
	{
		sort(v.begin(), v.end());
		cout << sum << "\n";
		cout << v[0] << "\n";
	}
	return 0;
}