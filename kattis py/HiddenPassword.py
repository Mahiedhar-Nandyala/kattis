inp = input()
inp = inp.split()
pswd = list(inp[0])
txt = list(inp[1])
pos = 0
isGone = True

for i in txt:
    if((i != pswd[pos]) and (i in pswd[pos:])):
        isGone = True
        break
    elif(i == pswd[pos]):
        pos += 1
        if(pos > len(pswd)-1):
            isGone = False
            break

if(isGone):
    print("FAIL")
else:
    print("PASS")
