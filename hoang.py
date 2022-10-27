a = []

def int_put():
    while (True):
        global x
        x = int(input())
        if (x != 0):
            return x

def countPosNeg():
    outPos, outNeg = 0, 0
    global a,x
    for x in a:
        if x>0 :
            outPos +=1
        else:
            outNeg -=1
    return outPos, outNeg
if __name__ == "__main__":
    x = int_put()
    for i in range(x):
        a.append(int(input()))
    print(countPosNeg())
    



