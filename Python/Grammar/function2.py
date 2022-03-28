def profile(name,age,lang1, lang2, lang3, lang4, lang5): 
     #end는 문장 출력하고 다음 문장 계속 이어서 출력
    print("이름 : {0}\t나이 : {1}\t".format(name, age),end=" ")
    print(lang1, lang2, lang3,  lang4, lang5)

profile("유재석", 20, "Python", "Java", "C", "C++", "C#")
profile("유재석", 20, "Python", "Java", "C", "C++", "C#")


#가변 함수 
def profile(name, age, *language):
    print("이름 : {0}\t 나이 : {1}\t".format(name, age), end=" ")
    for lang in language:
        print(lang, end=" ")
    print()

profile("유재석", 20, "Python", "Java", "C", "C++", "C#", "JavaScript")
profile("김태호", 25, "Kotlin", "Swift")


