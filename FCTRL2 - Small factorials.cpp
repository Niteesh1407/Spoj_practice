//link: https://www.spoj.com/problems/FCTRL2/

CODE:

t=int(input())
while(t!=0):
    fact=1;
    k=int(input())
    for i in range(1,k+1):
        fact=fact*i
    print(fact)
    t=t-1;
