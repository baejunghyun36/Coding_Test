
#사전

#key 는 3 
#value는 "유재석"
cabinet = {3:"유재석", 100:"김태호"}
print(cabinet)
print(cabinet[3]) #key 값으로 value 출력
print(cabinet[100]) #김태호
print(cabinet.get(3))#유재석 get 방식. 


print(cabinet.get(5))
#get으로 할땐 값이 없으면 none
#대괄호로 cabinet[5] 를 출력하면 오류 뜸. 

print(cabinet.get(5, "사용가능")) 
#5번이라는 Key가 없으면 "사용가능" 출력 

print(3 in cabinet) #key값이 있으면 true 출력
print(5 in cabinet) #key값이 없으면 false 출력 

cabinet = {"A-3":"유재석", "B-100":"김태호"}

print(cabinet["A-3"]) #유재석
print(cabinet["B-100"]) # 김태호
print(cabinet)

cabinet["A-3"] = "김종국" #유재석-> 김종국 
cabinet["C-20"] = "조세호" # 키값 C-20 에 조세호 추가. 
print(cabinet)
del cabinet["A-3"] # key 삭제 
print(cabinet)

print(cabinet.keys())# 키값만 출력
print(cabinet.values())#value값 출력 

print(cabinet.items()) #쌍으로 출력 

cabinet.clear() #비우기
print(cabinet)