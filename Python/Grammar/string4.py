python = "Python is Amazing"
print(python.lower())
print(python.upper())
print(python[0].isupper())
print("문자열 길이",len(python))

print(python.replace("Python", "Java"))
print(python)
index = python.index("n") # 5번째 
print(index) 
index = python.index("n", index+1) #5번째 이후부터 찾는거 
print(index)

index= print(python.find("is"))
print(python.find("Java")) #원하는 값이 없으면 -1 반환
#print(python.index("Java"))#에러 
print("hi")
print(python.count("n"))  #n이 몇번 나왔는지 








