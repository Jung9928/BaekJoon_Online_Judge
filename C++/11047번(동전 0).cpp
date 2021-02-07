#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	vector<int> v(N);       // 동전의 종류 수 만큼 벡터 공간 생성


	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	int cnt = 0;

	// 가장 큰 단위의 동전부터 하나씩 나눠 간다.
	for (int i = N - 1; i >= 0; i--)
	{
		cnt += K / v[i];      // 나눈 몫이 결국 필요한 동전 개수이므로, cnt에 더해준다.
		K %= v[i];          // 나눈 나머지가 다시 다른 종류의 동전으로 나눠야 하므로, 나머지 값을 저장. 
	}
	cout << cnt << '\n';
	return 0;
}