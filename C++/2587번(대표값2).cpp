/*
	#### ���� Ǯ�� TIP ####
	1) �Է��� ���� ������ 5���� ������ �ֱ� ������
	   �Է��� ������ ���� ����� ���ؾ� �ϹǷ�, ���� �Է��� �� ���� 
	   ���� ���� ������ ������ sum�� += ������ ���ش�.
	   
	   �׸��� ���͸� �����Ͽ� �Է��� ���� ���Ϳ� �����Ѵ�.
	  
	2) sum�� ��ü �Է� ���� 5�� ������ ����� ���ϰ�
	   �߾Ӱ��� ���ϱ� ���� ���͸� �����Ѵ�.
	   ��հ��� ����� sum ���� ��� ���� ���� �߾Ӱ� s[2]�� ������ָ� �ȴ�.
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		sum += num;
		v.push_back(num);
	}
	sum /= 5;
	sort(v.begin(), v.end());
	cout << sum << "\n";
	cout << v[2] << "\n";
	return 0;
}