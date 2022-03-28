#자료구조의 변경
#커피숍 

menu = {"커피", "우유", "쥬스"}

print(menu, type(menu)) #클래스 set

menu = list(menu)  
print(menu, type(menu)) #클래스 list

menu = tuple(menu)
print(menu, type(menu)) #클래스 tuple

menu = set(menu)
print(menu, type(menu)) #클래스 set