/*
	#### ���� Ǯ�� TIP ####
	1) �� �޺κп��� �����͸� �����ϰ� �� �պκк��� �����͸� �����ϴ�
	   �ڷᱸ�� "ť"�� ������ �˸� Ǯ�� ����.
	   
	   �� ������ ���� �����̹Ƿ�, �־��� ������ �״�� �������ָ� Ǯ���� �����̴�.
*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> q;
	string cmd;
	int cnt;

	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cin >> cmd;
		if (cmd == "push")					// push �Է����� ���,
		{
			int num;			
			cin >> num;						// ť�� ������ ���� �Է�
			q.push(num);					// ť�� �Է��� ���� ������ ����.
		}
		else if (cmd == "pop")				// pop �Է����� ���
		{
			if (q.empty())					// ���� "ť"�� ����ִ��� Ȯ���Ѵ�.
				cout << -1 << "\n";			// ť�� ����ִٸ� 
			else							// ť�� ������� �ʴٸ�
			{
				cout << q.front() << "\n";	// ť�� �� �պκ��� �����͸� ���
				q.pop();					// ť�� �� �տ� ��ġ�� ������ ������ ����.
			}

		}
		else if (cmd == "size")				// size �Է����� ���,
			cout << q.size() << "\n";		// ť ũ�� ���
		else if (cmd == "empty")			// empty �Է����� ���,
			if (q.empty())					// ť�� ����ִ��� Ȯ��
				cout << 1 << "\n";			// ��� ������ 1���
			else
				cout << 0 << "\n";			// ��� ���� ������ 0���
		else if (cmd == "front")			// front �Է� ��
			if (q.empty())					// ť�� ������� Ȯ��
				cout << -1 << "\n";
			else							// ť�� ������� �ʴٸ�
				cout << q.front() << "\n";	
		else if (cmd == "back")				// back �Է� ��,
			if (q.empty())					
				cout << -1 << "\n";
			else
				cout << q.back() << "\n";
	}
	return 0;
}