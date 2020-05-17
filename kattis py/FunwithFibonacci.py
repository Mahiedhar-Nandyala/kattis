import math
T = int(input())
root5 = math.sqrt(5)
phi = (1+root5)/2

def G(k,n):
    res = fib(n)
    for i in range(k):
        res = fib(res)
    return res

def fib(n):
    print(n)
    res = (phi**n)/root5
    return round(res)

for i in range(T):
    inp = input()
    inp = inp.split(' ')
    n = int(inp[0])
    k = int(inp[1])
    p = int(inp[2])
    print(G(k,n)%p)
