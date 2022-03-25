def calcIncome(n,c):
    if c=="A":
        return n * 20

    if c=="B":
        return n * 15

    if c=="C":
        return n * 10

def main():
    a=int(input("Enter count of A seats: "))
    b=int(input("Enter count of B seats: "))
    c=int(input("Enter count of C seats: "))

    aIncome=calcIncome(a,"A")
    bIncome=calcIncome(b,"B")
    cIncome=calcIncome(c,"C")

    showIncome(aIncome,bIncome,cIncome)

def showIncome(a,b,c):
    total=a+b+c
    print("Income from class A seats:$",a)
    print("Income from class B seats:$",b)
    print("Income from class C seats:$",c)
    total = (round(float(total), 2))
    
    print("Total income:$","{:0,.2f}".format(total))


main()