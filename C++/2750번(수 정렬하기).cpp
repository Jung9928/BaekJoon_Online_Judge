#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	vector<int> data;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		scanf("%d", &temp);
		data.push_back(temp);
	}

	// sort() 함수를 사용하여 오름차순으로 정렬.
	sort(data.begin(), data.end());
	for (auto temp : data) {
		cout << temp << '\n';
	}

	return 0;
}