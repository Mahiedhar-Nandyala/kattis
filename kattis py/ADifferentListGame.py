import time
from multiprocessing import Pool

def isPrime(num):
    upto = 0
    if(num%2 == 0):
        upto = num//2
    else:
        upto = (num//2)+1
        
    for i in range(2,upto+1):
        if(num%i == 0):
            return False
    return True


if __name__ == '__main__':
    n = int(input())

    t1 = time.time()

    t = n
    upto = 0
    
    if(n%2 == 0):
        upto = n//2
    else:
        upto = (n//2)+1


    p = Pool()
    result = p.map(isPrime,list(range(2,upto+1)))
    p.close()
    p.join()
    print(result[:])
    print(time.time() - t1)
