# 문제 해결 방식 #
# 1) 파이썬 라이브러리를 사용하지 않고 pop[0]을 할 경우, 리스트의 개수가 커질수록
#    시간복잡도는 O(리스트 개수)이고 속도가 저하되므로, 시간복잡도가 O(1)인 popleft()를 사용하였다.

# 이 문제는 주어진 명령을 그대로 구현 해주면 되는 문제이므로, 스택 or 큐 개념만 안다면
# 충분히 풀 수 있는 문제이다.

import sys
from collections import deque

N = int(input())
queue = deque()

for i in range(N):
    cmd = sys.stdin.readline().rstrip()
    if cmd[0:4] == "push":
        queue.append(int(cmd[4:]))
    elif cmd == "pop":
        if len(queue) == 0:
            print(-1)
        else:
            print(queue.popleft())
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