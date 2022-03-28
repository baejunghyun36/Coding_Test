
#출석 번호가 1,2,3,4 앞에 100을 붙이기 

from re import I

students = [1,2,3,4,5]
print(students)

students = [i+100 for i in students] #나온 i값에 100을 더해서 저장.
print(students)

# 학생 이름을 길이로 변환 
students = ["Iron man", "Thor", "I am groot"]
students = [len(i) for i in students]
print(students) 

#학생 이름을 대문자로 변환 
students = ["Iron man", "Thor", "I am groot"]
students = [i.upper() for i in students]
print(students)