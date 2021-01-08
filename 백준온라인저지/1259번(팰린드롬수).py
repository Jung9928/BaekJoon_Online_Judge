# 문제 해결 방식 #
# 0이 입력되면 while문 탈출.
# 입력된 숫자 문자열을 맨 앞과 맨 뒤 숫자를 pop하여 비교해도 되지만
# 입력한 문자열을 역순으로 슬라이싱하여 비교하는 것이 코드가 훨씬 간결하다.

while True:
    num = input()
    if num == '0':
        break
    elif num == num[::-1]:
        print("yes")
    else:
        print("no")