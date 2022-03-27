

print("a"+ "b")
print("a", "b") # , 로 하면 띄워

x = 1
print("나는 %d 살 입니다 "%20)
print("나는 %d 살입니다" %x)
print("나는 %s를 좋아해요" %"파이썬")
print("Apple 은 %c로 시작해요. " %"A")

# %s 로 쓰면 값이던 문자던 문자열로 출력
print("나는 %s살입니다" % 20 )
print("나는 %s색과 %s색을 좋아해요." % ("파란", "빨간"))


#방법 2 
print("나는 {}살입니다." .format(20))
print("나는 {}색과 {}색을 좋아해요.".format("파란", "빨간"))
print("나는 {0}색과 {1}색을 좋아해요.".format("파란", "빨간"))
print("나는 {1}색과 {0}색을 좋아해요.".format("파란", "빨간")) 
#0번째 1번째 치환

#방법3 
print("나는 {age}살이며, {color}색을 좋아해요.".format(age=20, color="빨간"))
print("나는 {color}살이며, {age}색을 좋아해요.".format(age=20, color="빨간"))

#방법4
age = 20
color = "빨간"
print(f"나는 {color}살이며, {age}색을 좋아해요.") #값을 찾아서 바로 치환
