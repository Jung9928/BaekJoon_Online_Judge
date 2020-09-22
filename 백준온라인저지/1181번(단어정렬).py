#### 백준 온라인 저지 1181번: 단어 정렬 ####

N = int(input())  # 단어의 개수 입력
word = []         # 단어를 저장할 리스트 생성

# 개수만큼 단어 입력
for i in range(N):
    word.append(input())


word  = list(set(word))     # 입력한 단어들 중복 제거
word.sort()                 # 사전 순 정렬
word.sort(key=len, reverse=False)   # 길이 순으로 정렬

# 단어 출력
for i in range(len(word)):
    print(word[i])