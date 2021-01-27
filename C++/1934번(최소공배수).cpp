/*
	#### 문제해결 TIP ####
	1) 문제가 요구하는 것은 최소공배수 이므로 여러 방법이 있겠지만
	   최대공약수를 이용하여 최소공배수를 구하는 방법을 사용하였다.

	   최대 공약수는 유클리드 호제법을 사용하여 구했는데 
	   사실 이 코드는 그냥 외우는 게 좋은 것 같다.

	   최소 공배수는 최대공약수 * (피제수/최대공약수) * (피제수2/최대공약수)
	   공식을 사용하였는데 이 또한 이해가 안간다면 그냥 외우는 게 좋을 것 같다는
	   생각이 든다.
*/

#include <iostream>

using namespace std;

// 최대 공약수를 구하는 함수
int gcd(int n1, int n2)
{
	if (n2 == 0)
		return n1;
	else
		return gcd(n2, n1 % n2);
}

int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int num1, num2, gcd_result, lcm;
		cin >> num1 >> num2;

		gcd_result = gcd(num1, num2);			// 최대 공약수

		// 최소 공배수 = 최대 공약수 * (자연수 num1 / 최대공약수) * (자연수 num2 / 최대공약수)
		lcm = gcd_result * (num1 / gcd_result) * (num2 / gcd_result);

		cout << lcm << "\n";
	}
	return 0;
}