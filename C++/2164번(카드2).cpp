/*
	#### 문제 해결 TIP ####
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
		// 1번부터 N번까지의 카드를 쌓기.
		dq.push_front(i);

	while (N != 1)
	{
		// 제일 위에 있는 카드를 버리기
		dq.pop_back();

		// 카드를 버리고 난 후, 제일 위에 있는 카드를 제일 아래로 보내기
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