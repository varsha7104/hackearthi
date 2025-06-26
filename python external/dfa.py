# The strings which begin with 101 are accepted.like 101000 or 10111 is also accepted
s=input()
if(s[0]=='1' and s[1]=='0' and s[2]=='1'):
    print('accepted')
else:
    print('not accepted')
    '''
output
101000
accepted
'''