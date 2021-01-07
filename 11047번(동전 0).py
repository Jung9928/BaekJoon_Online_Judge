#### 문제 해결 방식 ####
# 이 문제는 전형적인 그리디 문제 이다.
# 일단 아래의 코드는 pypy로 컴파일을 돌려야 시간복잡도 문제 없이 풀린다. #

# 동전의 종류가 주어지므로, 동전 종류의 수만큼 비교를 해줘야 한다.
# 동전 종류 입력 시, 오름차순으로 입력이 되는데 필요한 동전 개수의 최소값을 구해야 하므로,
# 동전의 종류 중 가치의 합인 K보다 작으면서 가장 K와 근접한 수를 빼줘야 한다.
# 즉, 동전 종류가 저장된 리스트인 coin을 역순으로 하나씩 K와 비교하여
# K보단 작지만 가장 K와 근접한 수를 지속적으로 빼주면 된다.

# 즉, K가 4200이면 주어진 예제 입력에서는 1000으로 4번을 빼주고 100으로 2번을 빼줘야
# 가장 최소한의 횟수를 구할 수 있게 된다.

import sys

coin = []
coin_cnt = 0

N, K = map(int, sys.stdin.readline().split())

for i in range(N):
    coin.append(int(input()))

for i in coin[::-1]:
    if i <= K:
        while True:
            if i <= K:
                K -= i
                coin_cnt += 1
            else:
                break
    else:
        continue

print(coin_cnt)


#### 더 나은 풀이 ####
# 시간 복잡도와 공간 복잡도를 좀 더 개선한 코드 #
# 핵심은 일일이 하나씩 빼줄 필요 없이 나눈다음 몫을 동전 개수에 더해주고
# 그 나머지를 다시 계속해서 나눠주면 된다.

# 즉, 4200을 1000으로 나누면 몫은 4 나머지는 200이되므로
# 4200을 1000으로 4번 빼는 것 보다 더 효율적이다.

N, K = map(int, input().split())
coin = []
coin_cnt = 0

for i in range(N):
    coin.append(int(input()))

for i in range(N-1, -1, -1):
    if K == 0:
        break
    elif coin[i] > K:
        continue
    coin_cnt += K // coin[i]
    K %= coin[i]

print(coin_cnt)