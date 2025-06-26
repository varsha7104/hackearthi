'''
leela chocolate
A girl wants to buy a chocolate which costs a rupees so she decides to save b rupees per month so how many months does she need to save to buy that chocolate?
'''
a,b=map(int,input().split())
if(a%b==0):
    print(int(a/b))
else:
    print(int(a/b)+1)
'''
output 
10 5
2
'''