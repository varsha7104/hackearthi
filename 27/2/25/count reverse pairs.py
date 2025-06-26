# a[i]>2*a[j]
n=int(input())
li=list(map(int,input().split()))
c=0
for i in range(len(li)):
    for j in range(i+1,len(li)):
        if(li[i]>2*li[j]):
            c+=1
print(c) 
#  
'''    
 5
1 3 2 1 2
2''' 