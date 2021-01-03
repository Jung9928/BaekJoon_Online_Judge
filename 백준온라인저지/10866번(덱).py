# 문제 해결 방식 #
# 1) X값을 사용해야 하므로 명령어 입력이 "push_front X"와 "push_back X"인 경우에만
#    X값을 제외한 나머지를 슬라이싱하여 입력한 문자열과 같은지 비교 후,
#    push_front이면 appendleft()연산을 수행하고 push_back이면 append() 연산을 수행한다.

#    문제 자체가 "데크" 자료구조 사용을 요구하지만 stack이나 큐를 사용해도 정상 동작은 한다.
#    다만, 시간 복잡도 상, 스택이나 큐를 사용 시, 맨 앞쪽에 삽입할 때, 맨 앞쪽을 삭제할 때,
#    시간 복잡도가 O(k)가 되므로, 파이썬 라이브러리인 deque를 사용하여

#    기본으로 제공되는 appendleft() 함수와 popleft()함수를 사용하면 시간 복잡도 상 효율적이다.
#    나머지 부분은 조건에 맞게 구현하면 된다.

import sys
from collections import deque

N = int(input())
queue = deque()

for _ in range(N):
    cmd = sys.stdin.readline().rstrip()
    if cmd[0:10] == "push_front":
        queue.appendleft(int(cmd[11:]))
    elif cmd[0:9] == "push_back":
        queue.append(int(cmd[10:]))
    elif cmd == "pop_front":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue.popleft())
    elif cmd == "pop_back":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue.pop())
    elif cmd == "size":
        print(len(queue))
    elif cmd == "empty":
        if len(queue) == 0:
            print(1)
        else:
            print(0)
    elif cmd == "front":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[0])
    elif cmd == "back":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue[-1])