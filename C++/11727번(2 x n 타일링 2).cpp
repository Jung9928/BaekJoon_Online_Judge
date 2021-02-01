/*
	#### 문제 해결 TIP ####
	1) 2 x n 타일링 문제와 거의 유사하다.
	
*/

#include <iostream>

using namespace std;

int main()
{
	int D[1001];
	int N;
	cin >> N;
	D[0] = 1;
	D[1] = 1;

	for (int i = 2; i <= N; i++)
	{
		D[i] = 2 * D[i - 2] + D[i - 1];
		D[i] %= 10007;
	}

	cout << D[N] << "\n";

	return 0;
}