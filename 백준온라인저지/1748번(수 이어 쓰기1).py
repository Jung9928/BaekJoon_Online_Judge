N = input()
length = len(N)-1
c = 0
i = 0

while i < length:
    c += 9 * (10 ** i) * (i + 1)
    i += 1

c += ((int(N) - (10 ** length)) + 1) * (length + 1)
print(c)
