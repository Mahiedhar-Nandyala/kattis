n = input()
m = len(input())-1

f = n[:len(n)-m]
l = n[len(n)-m:]

add = 0
if(len(n)<m):
    add = m-len(n)
    print(add)
    
final = '@'+f+"."+l+'$'

old = ""

while(old != final):
    old = final
    final = final.replace('0$','$')

final = final.replace('.$','')
final = final.replace('$','')
final = final.replace('@.','0.')
final = final.replace('@','')

'''
if(add != 0):
    final = final.replace(".","."+"0"*add)
'''
print(final)
