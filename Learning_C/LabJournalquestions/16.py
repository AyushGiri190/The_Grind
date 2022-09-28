with open("new.txt","r") as file:
    f=file.readlines()
    for j in f:
        words=j.split()
        for i in words:
            print(i)