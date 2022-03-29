print("Python", "Java") #한칸 띄우기
print("Python"+"Java") # 바로 붙이기 
print("Python", "Java", sep=",")# 사이에 , 붙이기 
print("Python", "Java", sep=" ")# 사이에 띄우기 

print("Python", "Java", sep=",", end="?") 
print("무엇이 더 재밌을까요?") 
#문장의 끝부분을 물음표로 바꿔달라. 뒤에 있는 문장 연달아서
#출력

#시험 성적
scores = {"수학":0, "영어":50, "코딩":100}
for subject, score in scores.items(): #키와 value 쌍으로 나옴. 
    #print(subject, score)
    print(subject.ljust(8), str(score).rjust(4)) 
    #왼쪽 정렬 8칸 공간 확보. 오른쪽 정렬 4칸 공간 확보

#은행 대기순번표 
# 001, 002, 003, ...
for num in range(1, 11):
    print("대기번호 : " + str(num).zfill(3)) 
    #3크기 만큼 확보하고 값이 없는 공간에는 0으로 채워. 

#input
answer = input("아무 값이나 입력하세요 : ") #입력
print(type(answer)) #문자열로 저장
print("입력하신 값은 "+ answer+"입니다. ") 


