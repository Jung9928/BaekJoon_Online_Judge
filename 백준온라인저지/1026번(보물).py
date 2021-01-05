# 문제 해결 방식 #
# 1. 리스트 A와 리스트 B의 같은 인덱스 끼리 곱한 값을 모두 더한 값이 최소 값을 갖도록 하는 문제이다.
#    최소값을 만들기 위해 리스트 A만 재배열을 해야하고 리스트 B는 재배열하지 못한다.
#    문제 풀이의 핵심은 리스트 A의 원소 중 가장 작은 값을 리스트 B의 원소중 가장 큰 값과
#    곱해주면서 더해가면 최소 값을 구할 수 있다.

#    즉, 리스트 A를 sort() 함수를 사용하여 오름차순으로 정렬하고
#    리스트 B에서 max() 함수를 사용하여 최대 값을 구한 뒤, 곱해주고
#    max()함수로 추출한 최대 값을 리스트 B에서 remove하면서
#    배열의 길이만큼 반복해주면 문제는 해결된다.

import sys

N = int(input())
A = list(map(int, sys.stdin.readline().split()))
B = list(map(int, sys.stdin.readline().split()))
sum = 0

A.sort()

for i in A:
    sum += (i * max(B))
    B.remove(max(B))
print(sum)