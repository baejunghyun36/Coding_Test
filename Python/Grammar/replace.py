


url = "http://naver.com"
my_str = url.replace("http://", "") #http:// 을 대체 
print(my_str)
my_str = my_str[:my_str.index(".")]
print(my_str) # my_str[0:5] -> 0~ 5 직전까지 
