import sys

# 입력할 정수 개수 N(사실 상, 리스트 원소의 개수)을 입력
n = int(input())

# N개의 정수 입력(리스트에 저장할 정수 입력)
number = list(map(int, sys.stdin.readline().split()))

# 입력할 정수 개수 M(리스트 원소의 개수) 입력
m = int(input())

# M개의 정수 입력(리스트 number에 값이 있는지 확인하게 될 정수들)
number2 = list(map(int, sys.stdin.readline().split()))

# 이분 탐색 함수 (재귀 사용)
def binarySearch(number, goal_value, start, end):
    # 시작 인덱스가 마지막 인덱스 보다 큰 경우는 이분 탐색이 끝난 경우이다.
    if start > end:
        return 0

    # 이분 탐색이 끝나지 않았다면 시작 인덱스와 마지막 인덱스 값을 더하고 2를 나눈
    # 결과를 중간 인덱스 값으로 설정.
    mid = (start + end) // 2

    # 리스트의 중간 값이 찾고자 하는 값(goal_value)보다 크면
    # 원하는 값은 중간 기준으로 왼쪽에 위치한다는 의미이므로
    # 리스트의 마지막 인덱스를 mid-1 값으로 조정.
    if number[mid] > goal_value:
        return binarySearch(number, goal_value, start, mid - 1)

    # 리스트의 중간 값이 찾고자 하는 값(goal_value)보다 작으면
    # 원하는 값은 중간 기준으로 오른쪽에 위치한다는 의미이므로
    # 리스트의 시작 인덱스를 mid+1 값으로 조정.
    elif number[mid] < goal_value:
        return binarySearch(number, goal_value, mid + 1, end)

    # 찾으려는 값이 없는 경우
    else:
        return 1

# 이분 탐색을 하기 전, 오름차순 정렬은 필수이므로, 정렬 수행.
number.sort()

# 찾으려는 값(리스트 number2의 각 원소 값)과 찾을 대상인 number 리스트,
# 시작인덱스, 마지막 인덱스 값을 인자로 전달하여 이분 탐색 함수 호출.
for i in number2:
    print(binarySearch(number, i, 0, n-1))