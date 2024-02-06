import random
import cricplayers

p1=input("Enter 1st player name ")
p2=input("Enter 2nd player name ")

fpl1=cricplayers.fp1()
fpl2=cricplayers.fp2()
fpl1.insert(0,p1)
fpl2.insert(0,p2)

scoreboard={}


def cric(p,max=1000000):
    if (p==fpl1[0]):
        fpl=fpl1.copy()
    else:
        fpl=fpl2.copy()
    w=0
    s=0
    
    print("Choose Opener : ")
    for i in range(0,5):
        print(i,".",fpl[i],end=" ")
    cur=int(input(" "))
    #cur=fpl[cur]
    cs=0
    print("\n",p," Chance")
    while True:
        b=input("Enter ")
        r=random.randint(0,9)
        if r==0 or r==7 or r==8:
            w+=1
            print("Out")
            scoreboard[fpl[cur]]=s-cs
            cs=s
            if w==5:
                print("Total score of ",p," is ",s)
                return s
            
            fpl.pop(cur)
            print("Choose Batsman : ")
            for i in range(0,len(fpl)):
                print(i,".",fpl[i],end=" ")
            cur=int(input(" "))
        elif r==9:
            s=s+1
            print("No ball")
        else:
            s+=r
            print("This ball makes ",r)
        print("Score till now ",s,"/",w)
        if w==5:
            print("Total score of ",p," is ",s)
            return s
        if s>max:
            return s

chance=random.randint(0,1)
if chance==1:
    pl1=cric(p1)

    pl2=cric(p2,pl1)
else:
    pl2=cric(p2)
    pl1=cric(p1)

if pl1>pl2:
    print(p1,"Wins ")
    with open("score.py","a") as f:
        f.write(p1 + " Beat " + p2 + " by " + str(pl1-pl2) + " runs \n")
elif pl2>pl1:
    print(p2,"Wins ")
    with open("score.py","a") as f:
        f.write(p2 + " Beat " + p1 + " by " + str(pl2-pl1) + " runs \n")
else:
    print("Draw ")
    with open("score.py","a") as f:
        f.write("Draw between " + p1 + " and " + p2 +"\n")

for i in range(0,5):
    print(fpl1[i]," : ",scoreboard[fpl[i]])

for p in fpl1:
    print(p ," : ",scoreboard[p])
for p in fpl2:
    print(p ," : ",scoreboard[p])


    




        
