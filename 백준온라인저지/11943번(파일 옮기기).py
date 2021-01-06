# 문제 해결 방식 #
# 1) 바구니에 있는 사과와 오렌지 수 중 갯수가 적은 과일을 옮기면
#    최소 횟수로 과일을 옮길 수 있게 된다.
#    나머지는 조건에 맞게 구현하면 된다.

A, B = map(int, input().split())
C, D = map(int, input().split())
ac1, oc1, ac2, oc2 = 0, 0, 0, 0
line1 =0
line2 = 0

if A >= B:
    oc1 += B
    ac1 += C
    line1 = oc1 + ac1
else:
    oc1 += A
    ac1 += D
    line1 = oc1 + ac1

if C >= D:
    ac2 += A
    oc2 += D
    line2 = oc2 + ac2
else:
    ac2 += B
    oc2 += C
    line2 = oc2 + ac2

if line1 >= line2:
    print(line2)
else:
    print(line1)