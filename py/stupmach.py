# cook your dish here
tc=int(input())
for i in range(tc):
    n=int(input())
    b= list(map(int, input().rstrip().split()))
    t=min(b)
    sm=t*n 
    b = [x - t for x in b]
    ii=b.index(0)
    b=b[:ii]
    while(len(b)>0):
        t=min(b)
        sm=sm+(t*len(b))
        b = [x - t for x in b]
        ii=b.index(0)
        b=b[:ii]
    print(sm)
