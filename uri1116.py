t = int(input())

for v in range(t):
    x,y = list(map(int,input().split()))
    try:
        print('%.1f' %(x/float(y)))
    except:
        print("divisao impossivel")
