#Hidden Key
#A key is hidden within a jumble of characters and it's upto you to extract the key. The Key 
# consists of all the uppercase letters in order they appear

n=input()
s=input()
l=''
for i in range(len(s)):
    if(s[i].isupper()):
        l+=s[i]
print(l)        
#OUTPUT:
#1
#ABcdefG
#ABG
