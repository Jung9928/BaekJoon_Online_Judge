/*
	#### 문제 해결 TIP ####
	- 한 번에 입력받아서 출력할 필요는 없으므로
	  getline으로 한 줄 입력받고 단어를 바로 출력하는 형식으로 작성
	  
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string w;
	while (true)
	{
		getline(cin, w);
		if (w == "")
			break;
		cout << w << "\n";
	}
	return 0;
}