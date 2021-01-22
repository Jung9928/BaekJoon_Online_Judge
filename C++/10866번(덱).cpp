/*
	#### ���� Ǯ�� TIP ####
	1) ���� �̸� �״�� �ڷᱸ�� "��"�� �˸� Ǯ�� ����.
	   �� ���� ���� ���, C++�� STL deque �����̳ʿ��� �����ϴ�
	   ����Լ� push_front, push_back, pop_front, pop_back, empty, size, front, back��
	   �˰� ������ �״�� ����Ͽ� �������ָ� �Ǵ� �����̴�.
*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq;		// deque �����̳� ����.
	string cmd;
	int N; cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> cmd;
		if (cmd == "push_front")
		{
			int num;
			cin >> num;
			dq.push_front(num);
		}
		else if (cmd == "push_back")
		{
			int num;
			cin >> num;
			dq.push_back(num);
		}
		else if (cmd == "pop_front")
		{
			if (dq.empty())
				cout << -1 << "\n";
			else
			{
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (cmd == "pop_back")
		{
			if (dq.empty())
				cout << -1 << "\n";
			else
			{
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (cmd == "size")
			cout << dq.size() << "\n";
		else if (cmd == "empty")
			if (dq.empty())
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		else if (cmd == "front")
			if (dq.empty())
				cout << -1 << "\n";
			else
				cout << dq.front() << "\n";
		else if (cmd == "back")
			if (dq.empty())
				cout << -1 << "\n";
			else
				cout << dq.back() << "\n";
	}
	return 0;
}