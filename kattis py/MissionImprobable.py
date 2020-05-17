def trans(x):
    r = len(x)
    c = len(x[0])
    
    z = [0 for i in range(c)]
    for i in range(len(z)):
        z[i] = [0 for i in range(r)]

    for i in range(len(x)):
        for j in range(len(x[i])):
            z[j][i] = x[i][j]
    return z

def dup(x):
    m = [0 for i in range(r)]
    for i in range(len(m)):
        m[i] = [0 for i in range(c)]
    for i in range(len(x)):
        for j in range(len(x[i])):
            m[i][j] = x[i][j]
    return m

def fixView(x,V):
    count = 0
    r = len(x)
    c = len(x[0])

    for i in range(r):
        if ('M' in x[i]):
            count+=1
        for j in range(c):
            if(count != 0):
                if(x[i][j] == V):
                    x[i][j] = 0
            else:
                if(x[i][j] == V):
                    count += 1
        count = 0
    return x

def getCount(x,t):
    r = len(x)
    c = len(x[0])
    mxCount = 0
    for i in range(r):
        for j in range(c):
            if(t[i][j] == 0):
                
                
def numOccur(lst,num):
    count = 0
    for i in lst:
        if(i == num):
            count+=1
    return count
    
def plotMax(x,view):
    m = max(x)
    if(numOccur(x,m) == 1):
        view = 'M'
    for i in range(len(x)):
        if (x[i] == m):
            x[i] = view
        else:
            x[i] = 0
    return x

def getMix(x,y):
    r = len(x)
    c = len(x[0])

    for i in range(r):
        for j in range(c):
            if(x[i][j] != y[i][j]):
                if(x[i][j] == 0):
                    x[i][j] = y[i][j]
                elif(y[i][j] == 'M'):
                    x[i][j] = 'M'
    return x
    
def show(x):
    for i in range(len(x)):
        for j in range(len(x[i])):
            print(x[i][j]," ",end='')
        print()
        
inp = input()
inp = inp.split(' ')
r = int(inp[0])
c = int(inp[1])

x = [0]*r
        
for i in range(r):
    inp = input()
    inp = inp.split(' ')
    x[i] = [int(t) for t in inp]



m = dup(x)
z = trans(x)

for i in range(len(m)):
    m[i] = plotMax(m[i],'s')

for i in range(len(z)):
    z[i] = plotMax(z[i],'f')

z = trans(z)

show(x)

temp = getMix(m,z)

print()
show(temp)
print()
temp = fixView(temp,'s')
show(temp)
print()

temp = trans(temp)

temp = fixView(temp,'f')

temp = trans(temp)

show(temp)

print(getCount(x,temp))
