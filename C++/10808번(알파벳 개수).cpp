/*
	#### ���� Ǯ�� TIP ####
	1) a~z���� ���ĺ� �� ������ 26���̹Ƿ�, ũ�Ⱑ 26�� �迭�� �����Ѵ�.
	2) ASCII �ڵ� ���� �̿��Ͽ� �Է��� ���ڿ��� �� ������ �ƽ�Ű �ڵ尪�� 'a'�� �ƽ�Ű �ڵ尪����
	   ���� ��� ���� ������ �ε����� ����Ͽ� �ش� �ε����� ���� 1�� ���������ָ�
	   �� ���ĺ��� � ����ִ��� �� �� �ִ�.
*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
	int alpha[26] = { 0 };
	string word;

	getline(cin, word);

	for (int i = 0; i < word.length(); i++)
		alpha[word[i] - 'a'] += 1;

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
	return 0;
}