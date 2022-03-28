def solution(priorities, location):
    answer = 0
    q = ""
    res_num = priorities[location]
    print(res_num)
    for i in range(len(priorities)):
        if i == location :
            q+='0'
        else :
            q+=chr(priorities[i]+48); #아스키코드
    
    priorities.sort()
    cnt = 1
    for i in range(len(priorities)):
        c = chr(priorities[i]+48)
        for j in range(len(q)):
            if q[j]=='0' and priorities[i]==res_num:
                return cnt
            elif q[j]==c:
                s = q[0:j]
                q = q[j+1]
                q+=s
                break
             
    print(q)
    return answer