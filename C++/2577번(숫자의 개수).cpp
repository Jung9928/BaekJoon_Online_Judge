/*
	#### 문제 해결 TIP ####
	1) 입력한 세 수 A, B, C의 곱인 mul에서 0~9까지 숫자가 몇개 있는지 출력해야 하므로,
	   mul이 0이 되기 직전까지 계속해서 10으로 나눈 나머지를 
	   0~9까지 개수를 저장하는 배열 arr에 해당하는 원소를 1씩 증가시킨다.
*/


#include <iostream>

using namespace std;

int main()
{
	int A, B, C, mul;
	int arr[10] = { 0, };		// 0~9까지 순서대로 숫자의 개수를 저장할 배열

	cin >> A;
	cin >> B;
	cin >> C;
	mul = A * B * C;

	while (mul > 0)
	{
		arr[mul % 10]++;		// 10으로 나눈 나머지 값을 인덱스로 사용하여 해당 값을 1증가
		mul /= 10;	
	}

	for (int i = 0; i < 10; i++)
		cout << arr[i] << "\n";

	return 0;
}