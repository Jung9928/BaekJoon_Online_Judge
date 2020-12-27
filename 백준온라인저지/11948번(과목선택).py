# 딱히 알고리즘 사용이 필요한 문제가 아닌 구현 문제라
# 주어진 조건을 충족시켜 구현하면 된다.

A = int(input())    # 물리
B = int(input())    # 화학
C = int(input())    # 생물
D = int(input())    # 지구과학
E = int(input())    # 역사
F = int(input())    # 지리

sum = 0
hsum = 0
s = []
h = []

s.append(A)
s.append(B)
s.append(C)
s.append(D)
h.append(E)
h.append(F)

s.sort()
h.sort()

for _ in range(len(s)-1):
    sum += s.pop()
hsum += h.pop()

print(sum+hsum)