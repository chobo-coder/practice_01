def gugudan():
    for  i  in range(1,10):
        for k in range(1,10):
            print('{0}*{1} = {2}'.format(i,k,i*k))
        

def summary(x):
    k = 0
    summ = 0
    while k != int(x)+1:
        summ += k 
        k += 1
    return summ

if __name__ == '__main__':
    print(summary(3))


