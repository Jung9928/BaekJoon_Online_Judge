#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	vector<int> v(N);       // ������ ���� �� ��ŭ ���� ���� ����


	for (int i = 0; i < N; i++)
	{
		cin >> v[i];
	}

	int cnt = 0;

	// ���� ū ������ �������� �ϳ��� ���� ����.
	for (int i = N - 1; i >= 0; i--)
	{
		cnt += K / v[i];      // ���� ���� �ᱹ �ʿ��� ���� �����̹Ƿ�, cnt�� �����ش�.
		K %= v[i];          // ���� �������� �ٽ� �ٸ� ������ �������� ������ �ϹǷ�, ������ ���� ����. 
	}
	cout << cnt << '\n';
	return 0;
}