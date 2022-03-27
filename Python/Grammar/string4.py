python = "Python is Amazing"

print(python.lower()) #소문자로
print(python.upper()) #대문자로
print(python[0].isupper()) #첫번째 글자 대문자인지. True
print("문자열 길이",len(python)) #문자열 길이

print(python.replace("Python", "Java")) #Python문자열을 Java로 치환
print(python)

index = python.index("n") # n의 인덱스 번호 5
print(index) 

index = python.index("n", index+1) #5번째 이후부터 찾는거 
print(index)

print(python.find("is")) # "is" 문자열 찾고 시작 인덱스 반환
print(python.find("Java")) #원하는 값이 없으면 -1 반환
#print(python.index("Java"))#해당 문자열 없으면 에러 

print(python.count("n"))  #n이 몇번 나왔는지 








