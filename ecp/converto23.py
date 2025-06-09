#Convertto23 Input with base 16 is converted to input with 23
name=input()
s="0123456789ABCDEFGHIJKLM"
g=(int(name,16))
ans=''
while(g):
    r=g%23
    ans+=s[r]
    g//=23
ans=ans[::-1]
print(ans)
#OUTPUT:
#1A 
#output:13
#FF
#Output:B2