/*
##### 문제 해결의 TIP #####
- stack 개념을 알면 풀 수 있다. 사실 몰라도 풀기엔 충분하다.
- cin 입력함수 특징을 알아야 push뒤에 숫자를 어떻게 처리해야 되는지 알 수 있다.
- vector로 동적할당 할 필요없이 stack STL 사용해주는게 깔끔한 것 같다.
*/

#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
	stack<int> st;

	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		string cmd;
		cin >> cmd;

		// cin 입력함수가 공백을 기준으로 토큰화하는 특징을 이용
		if (cmd == "push")
		{
			int x; cin >> x;
			st.push(x);
		}
		else if (cmd == "pop")
		{
			if (st.empty())
				cout << "-1" << "\n";
			else
			{
				cout << st.top() << "\n";
				st.pop();
			}
		}
		else if (cmd == "top")
		{
			if (st.empty())
				cout << "-1" << "\n";
			else
				cout << st.top() << "\n";
		}
		else if (cmd == "empty")
		{
			cout << st.empty() << "\n";
		}
		else
			cout << st.size() << "\n";
	}
	return 0;
}