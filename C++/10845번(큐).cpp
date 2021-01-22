/*
	#### 문제 풀이 TIP ####
	1) 맨 뒷부분에서 데이터를 삽입하고 맨 앞부분부터 데이터를 삭제하는
	   자료구조 "큐"의 성질을 알면 풀기 쉽다.
	   
	   이 문제는 구현 문제이므로, 주어진 조건을 그대로 구현해주면 풀리는 문제이다.
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
		if (cmd == "push")					// push 입력했을 경우,
		{
			int num;			
			cin >> num;						// 큐에 삽입할 정수 입력
			q.push(num);					// 큐에 입력한 정수 데이터 삽입.
		}
		else if (cmd == "pop")				// pop 입력했을 경우
		{
			if (q.empty())					// 먼저 "큐"가 비어있는지 확인한다.
				cout << -1 << "\n";			// 큐가 비어있다면 
			else							// 큐가 비어있지 않다면
			{
				cout << q.front() << "\n";	// 큐의 맨 앞부분의 데이터를 출력
				q.pop();					// 큐의 맨 앞에 위치한 원소의 데이터 삭제.
			}

		}
		else if (cmd == "size")				// size 입력했을 경우,
			cout << q.size() << "\n";		// 큐 크기 출력
		else if (cmd == "empty")			// empty 입력했을 경우,
			if (q.empty())					// 큐가 비어있는지 확인
				cout << 1 << "\n";			// 비어 있으면 1출력
			else
				cout << 0 << "\n";			// 비어 있지 않으면 0출력
		else if (cmd == "front")			// front 입력 시
			if (q.empty())					// 큐가 비었는지 확인
				cout << -1 << "\n";
			else							// 큐가 비어있지 않다면
				cout << q.front() << "\n";	
		else if (cmd == "back")				// back 입력 시,
			if (q.empty())					
				cout << -1 << "\n";
			else
				cout << q.back() << "\n";
	}
	return 0;
}