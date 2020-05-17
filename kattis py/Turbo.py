def placeIt(x,l,t):
    for i in range(l):
        if (x[i] == t):
            return i


N = int(input())
b = []
for i in range(N):
    inp = int(input())
    b.append(inp)
