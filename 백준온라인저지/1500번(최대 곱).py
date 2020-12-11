# 핵심 : 곱하는 수의 차이가 적으면 적을 수록 곱한 값이 커진다.
# ex: S가 10이고, K가 3일 때, 1 * 6 * 3 = 18 , 3 * 3 * 3 = 27

# # 두 수(S, K)를 입력 받는다.
# S, K= map(int, input().split())
#
# # 문제를 풀기 위해 사용된 규칙이라고 보면 된다.
# temp1 = S // K
# temp2 = S - temp1 * K
#
# sum = 1
#
# for i in range(K-temp2):
#     sum *= temp1
#
# for i in range(temp2):
#     sum *= (temp1 + 1)
#
# print(sum)


