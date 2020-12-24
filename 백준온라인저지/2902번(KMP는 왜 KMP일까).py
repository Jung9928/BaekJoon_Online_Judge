s = input()
temp = ""

for i in s:
    if (ord(i) >= 65) and (ord(i) < 96):
        temp += i
print(temp)