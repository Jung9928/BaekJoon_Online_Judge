/*
	#### ���� �ذ� TIP ####
	1) �Է��� ��¦�� ��(0)�� ��(1) ������ ���� �� ����� ����
	   A, B, C, D, E�� ������ָ� �Ǵ� ������ ���������̴�.
	   
	2) ���������� c++11���� �߰��� STL�� ���Ե� array �����̳ʸ� ����ߴ�. 
	   ����� ������ �׳� �ͼ��������� ����ߴ�.
	   ��� �Ϲ� �迭 �������� �ϴ��� vector�� �ϴ��� array �����̳ʸ� ����ϴ��� ����� �� ���´�.
*/


#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 4> arr = { 0 };
	int zero_cnt;

	for (int i = 0; i < 3; i++)
	{
		zero_cnt = 0;
		arr.fill(0);			// �� �ѹ� ������ ���� �� ���� ��, ������ �� ������ 0���� �ʱ�ȭ.
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		for (int j = 0; j < 4; j++)
			if (arr[j] == 0)
				zero_cnt += 1;
		if (zero_cnt == 0)
			cout << "E" << "\n";
		else if (zero_cnt == 1)
			cout << "A" << "\n";
		else if (zero_cnt == 2)
			cout << "B" << "\n";
		else if (zero_cnt == 3)
			cout << "C" << "\n";
		else
			cout << "D" << "\n";
	}
	return 0;
}