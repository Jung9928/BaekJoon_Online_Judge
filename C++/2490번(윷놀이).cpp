/*
	#### 문제 해결 TIP ####
	1) 입력한 윷짝의 배(0)와 등(1) 개수를 세서 그 결과에 따라
	   A, B, C, D, E를 출력해주면 되는 간단한 구현문제이다.
	   
	2) 문제에서는 c++11부터 추가된 STL에 포함된 array 컨테이너를 사용했다. 
	   사용한 이유는 그냥 익숙해지려고 사용했다.
	   사실 일반 배열 선언으로 하던지 vector로 하던지 array 컨테이너를 사용하던지 결과는 잘 나온다.
*/


#include <iostream>
#include <array>

using namespace std;

int main()
{
	array<int, 4> arr = { 0 };
	int zero_cnt;

	for (int i = 0; i < 3; i++)
	{
		zero_cnt = 0;
		arr.fill(0);			// 윷 한번 던지고 다음 번 던질 때, 기존의 윷 정보를 0으로 초기화.
		cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
		for (int j = 0; j < 4; j++)
			if (arr[j] == 0)
				zero_cnt += 1;
		if (zero_cnt == 0)
			cout << "E" << "\n";
		else if (zero_cnt == 1)
			cout << "A" << "\n";
		else if (zero_cnt == 2)
			cout << "B" << "\n";
		else if (zero_cnt == 3)
			cout << "C" << "\n";
		else
			cout << "D" << "\n";
	}
	return 0;
}