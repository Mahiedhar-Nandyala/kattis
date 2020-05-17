def getMarg(leng):
    power = leng-len(str(leng))
    base = power+1
    totlen = (power+1)+(len(str(base))-1)
    return (totlen, base,len(str(base)))

def tune(n):
    t = n
    n = str(n)
    if '.' in n:
        n = n.split('.')
        return int(n[0])
    elif 'e+' in n:
        n = n.split('e+')
        return (int(n[0])*pow(10,int(n[1])))
    else:
        return int(t)
    
n = input()
l = len(n)
lent,base,t = getMarg(l)
temp = int(n[:t])
n = int(n)
if(lent >= l):
    if(temp >= base):
        print(tune(n/(base)))
    else:
        print(tune(n/(base-1)))
else:
    print(tune(n/(base-1)))
