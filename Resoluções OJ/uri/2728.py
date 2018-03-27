try:
    while (True):
        l = input().lower().split("-")
        alvo = "cobol"
        cnt = 0;
        for i in range(len(l)):
            if (l[i][0]==alvo[i] or l[i][-1]==alvo[i]):
                cnt += 1
        print("GRACE HOPPER" if (cnt == 5) else "BUG")
except:
    pass
