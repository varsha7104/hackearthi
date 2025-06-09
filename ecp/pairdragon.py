#The energies of dragons is given as the input you need to pair the dragons 
# which form the maximum product of the energies and print respective dragon's 
# energies
li=list(map(int,input().split()))
li.sort()
n=len(li)
if(li[0]*li[1]<li[n-1]*li[n-2]):
    print(li[n-1],li[n-2])
else:
    print(li[0],li[1])
#Output:
# -9 -10 8 7
#-10 -9
 