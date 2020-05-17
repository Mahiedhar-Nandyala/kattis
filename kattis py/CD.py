import threading


while(1):
    x = set()
    inp = input()
    if(inp == '0 0'):
        break
    inp = inp.split(' ')
    N = int(inp[0])
    M = int(inp[1])
    for i in range(N):
        t = input()
        x.add(t)
    for i in range(M):
        t = input()
        x.add(t)
    
    print(N+M-len(x))
