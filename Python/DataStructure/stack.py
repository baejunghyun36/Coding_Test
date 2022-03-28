
#Stack

a=[1,2,3,4,5]   
a.append(6) #리스트 뒤에 6 추가
print(a) # 6 출력

a.pop() # 6 pop()
print(a)# 1,2,3,4,5

b = a.pop() # a 끝 값 b에 저장. pop
print(a) # 1,2,3,4
print(b) # 5

message = input("list 입력 : ") # 하나하나 분리
message_list = list(message)
print(message_list)

for i in range(len(message_list)):
    b = message_list.pop()
    print(b)


#Queue
a = [1,2,3,4,5]
a.append(6)
print(a)

a.pop(0)#앞에꺼 하나 pop
print(a)

a.pop(0)
print(a)





