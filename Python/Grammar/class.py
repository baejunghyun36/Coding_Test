

class Unit:
    def __init__(self, name, hp, damage): #생성자
        self.name = name
        self.hp = hp 
        self.damage = damage
        print("{0} 유닛이 생성되었습니다".format(self.name))
        print("체력 {0},공격력 {1}".format(self.hp,self.damage))


marine1 = Unit("마린", 40, 5)
marine2 = Unit("마린", 40, 5)
tank = Unit("탱크", 150, 35)

name = "마린" # 유닛의 이름
hp = 40 # 유닛의 체력
damage = 5 #유닛의 공격력

