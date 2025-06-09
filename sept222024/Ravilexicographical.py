#Ravi's Lexicographic Dish Adventure

#Ravi, an enthusiastic culinary explorer, is creating dishes using N ingredients.
#  For each dish, the quantity of every ingredient must be an integer between 1 and K.
#  However, Ravi organizes his dishes in a special way-by arranging them in lexicographic order.
#Here's how the dishes are ranked: Dish A is considered of lower quality than dish B if there is a position 1 (1≤ i ≤ N) such that Aj Bj for all ji and Ai < Bi.

#For example, if N2 and K2, the possible dishes in lexicographic order are (1.1), (1,2), 
# (2.1), and (2,2).

#Now, Ravi has a challenge for you. He gives you a number L and asks you to determine the L-th
#  dish in lexicographic order, based on the number of ingredients N and the maximum quantity
#  K.
for i in range(int(input())):
    n,k,l=map(int,input().split())
    l-=1
    d=[]
    for i in range(n):
        c=k**(n-i-1)
        v=(l//c)+1
        d.append(v)
        l%=c
    for i in range(len(d)):
        print(d[i],end=' ')
    print()    
 #OUTPUT:
 #2 2 3
#2 1 
 