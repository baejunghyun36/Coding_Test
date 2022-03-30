






s = input()
result1 =0
result2 =0
for i in range(0,len(s)//2):
    
    print(s[i])
    result1+=int(s[i])

for i in range(len(s)//2, len(s)):
    result2+=int(s[i])


print(result2)

if result1==result2:
    print("LUCKY")
else :
    print("READY")


