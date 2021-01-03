# 문제 해결 방식 #
# "push 정수" 형태의 문자열을 입력 받으면 push까지만 슬라이싱해서 비교하고
# push 와 정수 사이의 있는 공백의 다음 위치부터 문자열의 끝까지 슬라이싱하여
# 문자열 형태의 숫자를 가져와 int로 변환 후 stack에 삽입.

# 이 외에 나머지는 요구한 대로 구현하면 된다. "push 정수" 외에는 까다로운 조건은 없었다.

import sys
N = int(input())
stack = []

for i in range(N):
    cmd = sys.stdin.readline().rstrip()
    if cmd[0:4] == "push":
        stack.append(int(cmd[5:]))
    elif cmd == "pop":
        if len(stack) != 0:
            print(stack.pop())
        else:
            print(-1)
    elif cmd == "size":
        print(len(stack))
    elif cmd == "empty":
        if len(stack) == 0:
            print(1)
        else:
            print(0)
    elif cmd == "top":
        if len(stack) != 0:
            print(stack[-1])
        else:
            print(-1)


