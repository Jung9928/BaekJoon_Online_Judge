# 큐 자료구조를 사용하기 위해 deque 자료구조 import
from collections import deque

# 입력할 명령의 수 입력
N = int(input())
# 명령에 대한 결과를 저장할 큐 생성
queue = deque([])

# 명령의 갯수 N 만큼만 명령을 수행하면 되므로, N만큼 반복.
for i in range(N):
    cmd = input().split()       # 명령을 입력
    if cmd[0] == 'push':        # 명령이 push이면,
        queue.append(cmd[1])    # 그 다음 인덱스에 저장된 값을 큐에 저장
    elif cmd[0] == 'pop':       # 명령이 pop 일 때,
        if not queue:           # 큐에 들어있는 정수가 없는 경우 -1 출력
            print(-1)
        else:                   # 큐에 정수가 있으면 가장 앞에 있는 정수 제거 후, 출력
            print(queue.popleft())
    elif cmd[0] == 'size':      # 명령이 size 일 때,
        print(len(queue))       # 큐에 들어있는 정수 개수 출력
    elif cmd[0] == 'empty':     # 명령이 empty 일 경우,
        if not queue:           # 큐가 비어있으면 1 출력
            print(1)
        else:                   # 큐가 비어있지 않으면 0 출력
            print(0)
    elif cmd[0] == 'front':     # 명령이 front 일 경우
        if not queue:           # 큐에 들어있는 정수가 없는 경우 -1 출력
            print(-1)
        else:                   # 큐에 정수가 있는 경우 큐에서 가장 앞에있는 정수를 출력
            print(queue[0])
    elif cmd[0] == 'back':      # 명령이 back 일 경우
        if not queue:           # 큐에 들어있는 정수가 없는 경우 -1 출력
            print(-1)
        else:                   # 큐에 정수가 있는 경우, 큐의 가장 뒤에 있는 정수 출력
            print(queue[-1])