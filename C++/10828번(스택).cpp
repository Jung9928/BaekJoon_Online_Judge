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