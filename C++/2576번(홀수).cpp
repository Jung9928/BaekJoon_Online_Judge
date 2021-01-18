/*
	#### 문제 해결 TIP ####
	1) 입력한 7개의 자연수들 중 홀수인 수들의 합을 구하고
	   홀수들 중 최소값을 구하기 위해서 sort()함수를 사용하여 오름차순으로 정렬하면
	   첫번째 원소 값이 최소값이 된다.

	   홀수의 합을 구하는 부분은 일단 반복문 내에서 7개의 원소를 홀수인지 판별 한 후, 
	   합을 저장할 변수에 저장하면 된다.
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num[7], sum = 0;
	vector<int> v;
	cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4] >> num[5] >> num[6];

	for (int i = 0; i < 7; i++)
	{
		if (num[i] % 2 != 0)
		{
			v.push_back(num[i]);
			sum += num[i];
		}
	}
	if (v.size() == 0)
		cout << -1 << "\n";
	else
	{
		sort(v.begin(), v.end());
		cout << sum << "\n";
		cout << v[0] << "\n";
	}
	return 0;
}