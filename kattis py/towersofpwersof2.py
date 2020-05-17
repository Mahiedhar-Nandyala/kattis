n = int(input())
t = dict()

for i in range(n):
    inp = input()    
    que = inp.replace("^","**")
    ans = eval(que)
    t[inp] = ans
