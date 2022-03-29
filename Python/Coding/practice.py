n,m,k = map(int, input().split())
data = list(map(int, input().split()))

data.sort()
idx = data[len(data)-1]
idx2 = data[len(data)-2]

x = m//(k+1)
result = k*x*idx+x*idx2
if m%(k+1):
    for i in range(m%(k+1)):
        result+=idx

print(result)

    



