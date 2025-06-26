island life
a person needs to buy e biscuits and he need to live for d days such that he cannot buy the biscuits on sundays and each packet has n biscuits
n=int(input())
e=int(input())
d=int(input())
t=e*d
w=d//7
e=d%7
td=w*6+min(e,6)
b=(t+n-1)//n
if(b>td):
    print(-1)
else:
    print(b)