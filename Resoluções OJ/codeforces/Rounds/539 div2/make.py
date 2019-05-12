print("{",end="")
for i in range(1,101):
    print("{",1,",",end="")
    for j in range(2,(i//2)+1):
        if (i%j==0):
            print(j,",",end="")
    print(i,"},",end="")
print("}")
