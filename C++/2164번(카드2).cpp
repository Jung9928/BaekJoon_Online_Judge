/*
	#### ���� �ذ� TIP ####
	1) 
*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq;
	int N, temp;
	cin >> N;

	for (int i = 1; i < N + 1; i++)
		// 1������ N�������� ī�带 �ױ�.
		dq.push_front(i);

	while (N != 1)
	{
		// ���� ���� �ִ� ī�带 ������
		dq.pop_back();

		// ī�带 ������ �� ��, ���� ���� �ִ� ī�带 ���� �Ʒ��� ������
		temp = dq.back();
		dq.pop_back();
		dq.push_front(temp);
		if (dq.size() == 1)
			break;
		else
			N--;
	}
	cout << dq[0] << "\n";
	return 0;
}