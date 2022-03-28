# weather = "비"
# if 조건:
#     실행 명령문

weather = "비"
if weather =="비":         #조건1
    print("우산 챙겨")
elif weather =="미세먼지": #조건2
    print("마스크를 챙겨")
else:                      #조건 없을 때 
    print("준비물 필요없어")

weather = input("오늘 날씨 어때? ") # 입력값ql

if weather =="비" or weather =="눈":  #조건1
    print("우산 챙겨")
elif weather =="미세먼지": #조건2
    print("마스크를 챙겨")
else:                      #조건 없을 때 
    print("준비물 필요없어")

temp = int(input("기온은 어때요? ")) #입력값 int형으로 
if 30 <= temp:
    print("너무 더워요")
elif 10 <= temp <30:
    print("괜찮은 날씽에요")
else:
    print("너무 추워요. 나가지 마세요")










