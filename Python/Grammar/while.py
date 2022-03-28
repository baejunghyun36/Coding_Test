
# while
customer = "토르"
index = 5
# while (조건) :
while index >= 1:
    print("{0}, 커피가 준비 되었습니다. {1} 번 남았어요.".format(customer,index))
    index -= 1
    if index ==0:
        print("커피는 폐기 처분 되었습니다.")

customer = "토르"
person = "Unknown"

while person != customer : 
    print("{0}, 커피가 준비 되었습니다.".format(customer))
    person = input("이름이 어떻게 되세요?")


# customer = "아이언맨"
# while True:  # 무한루프
#     print("{0}, 커피가 준비되었습니다. 호출 {1}".format(customer, index))
#     index+=1


no_book = [7]
absent = [2,5] #결석 
for student in range(1, 11): # 1부터 10번까지. 
    if student in absent:
        continue #반복문 한 턴 무시
    elif student in no_book:
        print("오늘 수업 여기까지. {0}는 교무실로 따라와".format(student))
        break #반복 종료
    print("{0}, 책을 읽어봐".format(student))
    