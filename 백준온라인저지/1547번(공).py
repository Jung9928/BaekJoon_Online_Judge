# 문제 해결 방식 #
# 공은 고정적으로 첫번째 위치의 컵 안에 들어가게 되므로
# 공이 들어있는 컵을 찾기 위해서는 모든 연산을 마친 후, 첫번째 위치의 컵 번호를 찾으면 된다.

# 1) index 함수를 사용해서 해당 컵 번호의 위치 값을 얻어, 인덱스로 접근하여 값을 바꿔주는 식으로
#    연산을 진행하면 된다.

M = int(input())

cups = [1, 2, 3]

for _ in range(M):
    X, Y = map(int, input().split())

    temp_x = cups.index(X)
    temp_y = cups.index(Y)

    cups[temp_x], cups[temp_y] = cups[temp_y], cups[temp_x]

print(cups[0])