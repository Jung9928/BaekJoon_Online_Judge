/*
	#### 문제 풀이 TIP ####
	1) 문제 이름 그대로 자료구조 "덱"을 알면 풀기 쉽다.
	   이 문제 같은 경우, C++의 STL deque 컨테이너에서 제공하는
	   멤버함수 push_front, push_back, pop_front, pop_back, empty, size, front, back을
	   알고 있으면 그대로 사용하여 구현해주면 되는 문제이다.
*/

#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> dq;		// deque 컨테이너 생성.
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