# mainline logic
def main():
    readInput()     # call readInput function

# This function displays some introductory messages
# This function asks the user to enter the number of tickets sold in each category
def readInput():
    numTicketsClassA = input('How many tickets were sold for Class A? ')
    numTicketsClassB = input('How many tickets were sold for Class B? ')
    numTicketsClassC = input('How many tickets were sold for Class C? ')
    calcSales(numTicketsClassA, numTicketsClassB, numTicketsClassC)
    input('\n\nPress Enter to exit the program\n\n')

# This function calculates the sales from the three categories 
def calcSales(numClassA, numClassB, numClassC):
    salesClassA = numClassA * 15
    salesClassB = numClassB * 12
    salesClassC = numClassC * 9
    print ("The income generated for Class A seats: ${%7.2f}" % salesClassA)
    print ("The income generated for Class B seats: ${%7.2f}" % salesClassB)
    print ("The income generated for Class C seats: ${%7.2f}" % salesClassC )  
    totalSales = salesClassA + salesClassB + salesClassC
    outputSales(totalSales)

# This function outputs the income generated
def outputSales(sales):
    print ("\nThe total income generated for the softball game is ${%7.2f}" % sales)
    
# call the main function
main()    