#The Enigma of the Forgotten Vault

#In the forgotten city of Arithmos, deep within the ruins of an ancient vault, 
# #lies a mysterious artifact guarded by an intricate numerical puzzle. 
# #This vault, said to contain treasures beyond imagination, can only be unlocked by
# # solving the "Enigma of the Forgotten Vault"
#Legend has it that a unique four-digit number is inscribed on the entrance of the vault. 
# However, the digits of this number are not ordinary each digit is distinct,
#  and the key to unlocking the vault is hidden in the arrangement of these digits To unlock 
# the vault, you, a master of numbers, must rearrange the digits of this four-digit number
#  to form the largest and the smallest possible numbers. Then, you must find the difference
#  between these two numbers. Only when you present this difference to the vault will its
#  secrets be revealed Do you have what it takes to solve the enigma and unlock
s=input()
s=''.join(sorted(s))
k=int(s)
l=int(s[::-1])
print(abs(k-l))
#OUTPUT:
# 1234
#3087
