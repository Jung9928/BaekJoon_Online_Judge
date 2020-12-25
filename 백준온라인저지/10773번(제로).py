# 문제 해결의 핵심은 입력한 정수를 저장할 스택공간을 만들고
# 0이 입력되면, 가장 최근에 입력된 수를 스택공간에서 제거하고
# 스택에 남아있는 수를 전부 더한 값을 출력해주면 된다.

K = int(input())
l = []
sum = 0

for i in range(0, K):
    num = int(input())
    # 입력한 정수가 0일 경우, 0을 입력하기 전 가장 최근에 입력된 수를 지운다.
    if (num == 0):
        l.pop(-1)
    else:
        l.append(num)

for i in l:
    sum += i
print(sum)
