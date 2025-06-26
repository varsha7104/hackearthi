# remove min and max append their difference the element which is left at the last is called as the king of the array
n=int(input())
li=list(map(int,input().split()))
while(n>1):
    li.sort()
    x=li[0]
    li.remove(x)
    y=li[-1]
   
    li.remove(y)
    li.append(y-x)
    n-=1
print(li)    
'''
output 
5
1 2 3 4 5
[1]
'''