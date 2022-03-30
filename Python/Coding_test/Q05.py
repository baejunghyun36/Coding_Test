n, m = map(int, input().split())

ball_data = [0]*11
data = map(int, input().split())

for i in data:
    ball_data[i]+=1

result=0
for i in range(1,n+1):
    n-=ball_data[i]
    result += n*ball_data[i]

print(result)