/*
	#### ���� �ذ� TIP ####
	- �� ���� �Է¹޾Ƽ� ����� �ʿ�� �����Ƿ�
	  getline���� �� �� �Է¹ް� �ܾ �ٷ� ����ϴ� �������� �ۼ�
	  
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