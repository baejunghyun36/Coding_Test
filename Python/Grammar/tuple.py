

#변경되지 않는 값을 사용할 때 튜플

menu = ("돈까스", "치즈까스") #괄호 사용. 
print(menu[0])
print(menu[1])

#더하기 기능 안됨. 

name = "김종국"
age = 20
hobby = "코딩"
print(name, age, hobby)

(name, age, hobby) = ("김종국", 20, "코딩") #괄호 없어도 됨. 
print(name, age,hobby)
