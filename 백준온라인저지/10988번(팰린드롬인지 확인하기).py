# 문제 해결 방법 : 해당 문자열의 첫번째 문자와 맨 끝 문자를 하나씩 pop연산을 하면서
#                비교하여 서로 다른 경우, 그 즉시 0을 출력하고 while문을 탈출.
#                끝까지 비교한 경우는 서로 같다는 의미이므로 1을 출력하고 while문 탈출.

s = list(input())

while len(s) > 1:
    if s.pop(0) != s.pop():
        print(0)
        break
    elif len(s) <= 1:
        print(1)
        break