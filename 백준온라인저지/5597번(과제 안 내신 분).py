# 문제 해결 방법 : 과제를 제출한 학생 28명의 출석번호를 리스트에 저장한 후,
#                1부터 30까지 번호를 리스트와 비교해 나간다.
#                비교 후, 없는 번호를 따로 리스트에 저장하여 오름차순으로 정렬 후, 출력한다.
#                최대로 비교해야 할 횟수가 30번 밖에 안되므로 일일이 비교해도 괜찮다.

l = []
result = []

for i in range(1, 29):
    l.append(int(input()))

for i in range(1, 31):
    if i in l:
        continue
    else:
        result.append(i)

result.sort()

for i in result:
    print(i)