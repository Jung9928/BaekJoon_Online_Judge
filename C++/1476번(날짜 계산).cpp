/*
	#### 문제 해결 TIP ####
	1) 이 문제는 그냥 1씩 계속 증가시켜 가면서 입력한 값이 증가시킨 값과
	   일치할 때, 해당 값을 출력해주면 된다.
*/


#include <iostream>

using namespace std;

int main()
{
	int E, S, M, e = 1, s = 1, m = 1;
	cin >> E >> S >> M;

	for (int i = 1; ; i++)
	{
		// 입력한 값과 1년이 지나면서 1씩 증가시킨 e, s, m 값이 일치하게 되면 
		// 해당 값을 출력하게 된다.
		if (e == E && s == S && m == M)
		{
			cout << i << '\n';
			break;
		}
		e += 1;
		s += 1;
		m += 1;
		if (e == 16)
			e = 1;
		if (s == 29)
			s = 1;
		if (m == 20)
			m = 1;
	}
	return 0;
}