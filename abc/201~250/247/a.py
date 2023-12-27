from ast import If


s = input()

ans1 = ''
ans2 = ''
ans3 = ''
ans4 = ''
if s[0] == '1':
    ans2 = '1'
else:
    ans2 = '0'

if s[1] == '1':
    ans3 = '1'
else:
    ans3 = '0'

if s[2] == '1':
    ans4 = '1'
else:
    ans4 = '0'

print('0'+ans2+ans3+ans4)
