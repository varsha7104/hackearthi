'''
pair power
find the product of the 2 maximum strengths where input is the list of the strengths of a person
'''
li=list(map(int,input().split()))
li.sort()
print(max(li[0]*li[1],li[-1]*li[-2]))
'''
output
-9 -10 7 5 3
90
'''