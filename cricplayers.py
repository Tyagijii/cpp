import random

fpl2=["Dhoni ","Kohli ","AB devillers ","Sachin ","Hardik ","Rohit ","Sehwag ","Maxwell "]
fpl1=[]
#fpl2=[]


for i in range(4):
    ind=random.randint(0,len(fpl2)-1)
    fpl1.append(fpl2[ind])
    fpl2.pop(ind)

def fp1():
    return fpl1
def fp2():
    return fpl2

#print(fpl2)
#print(fpl1)
    
