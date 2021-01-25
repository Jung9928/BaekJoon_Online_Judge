/*
	#### 문제 해결 TIP ####
	1) stack 성질을 이용하여 풀 수 있는 문제이다.
	   입력한 문자열의 각 문자들을 공백 또는 \n 문자를 만날 때 까지
	   stack에 push 해주고, 

	   공백 문자나 '\n' 문자를 만나면 스택에 저장된 문자들을 
	   스택이 빌 때까지 pop해주면 된다.

	   문제를 풀기 전에 알아둬야 할 것은
	   테스트 케이스 T를 입력할 때, cin.ignore() 함수를 사용하여 
	   cin 입력 버퍼에 개행문자가 남아도 무시하도록 해주는게 좋다.

	   ignore을 사용하지 않을 경우, 다음 cin 버퍼를 사용 시, 
	   기존에 남아있던 개행문자로 인해 원하는 출력 값을 얻을 수 없다.

	   stack의 push, pop의 시간복잡도는 O(1)이고, 
	   이 문제에서 N개의 글자가 스택에 push, pop되므로 
	   전체 시간복잡도는 O(N)이라 할 수 있겠다.
*/


#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int T;						// 테스트 케이스 개수를 저장할 변수
	cin >> T;					// 테스트 케이스 개수 입력
	cin.ignore();               // cin 입력 버퍼에 개행문자가 남아있기 때문에 없애줘야 다음 입력이 에러 없이 가능. 
								// cin.ignore() 함수를 사용하지 않으면 처음 getline() 함수호출 때, 버퍼에 남아있던 개행문자가 입력으로 들어가게 되버린다.


	for (int i = 0; i < T; i++)	// 테스트 케이스 만큼 반복
	{
		stack<char> st;			// 입력한 문자열의 각 문자를 저장할 스택공간
		string str;				
		getline(cin, str);		// 문자열 입력.
		str += '\n';			// getline 입력함수는 문자열 변수에 공백문자는 포함하지만 개행문자는 포함하지 않으므로 마지막 단어를 출력하기 위한 구분자로 사용하기 위해 개행문자를 끝에 더해준다.

		for (int i = 0; i < str.size(); i++)	// 문자열 길이만큼 반복
		{
			if (str[i] == ' ' || str[i] == '\n')	// 문자가 공백문자거나 개행문자일 경우,
			{
				while (!st.empty())		// 스택이 빌 때까지 스택에 저장된 문자를 pop하여 출력해줘야 한다.
				{
					cout << st.top();
					st.pop();
				}
				cout << " ";			// 공백으로 각 단어가 구분되어 있으므로 각 문자를 스택이 빌 때까지 출력 했다면 공백 표시.
			}
			else
				st.push(str[i]);		// 문자가 공백문자가 아니거나 개행문자가 아닌 경우, 스택에 해당 문자를 push
		}
	}
	return 0;
}

//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ
//ㅡㅡㅡㅡㅡㅡㅡ좀 더 간결한 코드(성능 차이는 없음)ㅡㅡㅡㅡㅡㅡㅡ
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
	int T;
	cin >> T;
	cin.ignore();               // cin 입력 버퍼에 개행문자가 남아있기 때문에 없애줘야 다음 입력이 에러 없이 가능.

	while (T--)
	{
		string str;
		getline(cin, str);
		str += '\n';
		stack<char> st;

		for (char ch : str)
		{
			if (ch == ' ' || ch == '\n')
			{
				while (!st.empty())
				{
					cout << st.top();
					st.pop();
				}
				cout << ch;
			}
			else
				st.push(ch);
		}
	}
	return 0;
}