X, Y = map(str, input().split())

s = str(int(X[::-1]) + int(Y[::-1]))
print(int(s[::-1]))