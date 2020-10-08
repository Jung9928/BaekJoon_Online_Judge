# 수의 개수 입력
N = int(input())

# 숫자를 저장할 리스트 생성
number = []             

# 리스트에 숫자를 하나씩 저장.
for i in range(N):
    number.append(int(input()))
    
# 리스트 오름차순 정렬
number.sort()

# 오름차순 정렬된 리스트 원소 하나씩 출력.
for i in number:
    print(number)
