/*
	#### 문제 풀이 TIP ####
	1) 입력할 수의 개수는 5개로 정해져 있기 때문에
	   입력한 수들의 합의 평균을 구해야 하므로, 수를 입력할 때 마다 
	   수의 합을 저장할 변수인 sum에 += 연산을 해준다.
	   
	   그리고 벡터를 생성하여 입력한 수를 벡터에 저장한다.
	  
	2) sum을 전체 입력 수인 5로 나누어 평균을 구하고
	   중앙값을 구하기 위해 벡터를 정렬한다.
	   평균값이 저장된 sum 값과 가운데 원소 값인 중앙값 s[2]를 출력해주면 된다.
*/


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v;
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		int num;
		cin >> num;
		sum += num;
		v.push_back(num);
	}
	sum /= 5;
	sort(v.begin(), v.end());
	cout << sum << "\n";
	cout << v[2] << "\n";
	return 0;
}