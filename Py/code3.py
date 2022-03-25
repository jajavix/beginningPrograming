#Write a program that asks the user to enter the width and legnth of a room. 
#Program should compute and display the areas of teh room
#The lenght and widht will be entered as floating point numbers. 
#Include units in your prompt and output message: either feet or meters

#Read the input values from the user
length = float (input("Enter the length of the room in feet:"))
width = float (input("Enter the width of the room in feet:"))

#Compute the area of the room
area = length * width

# Display the result
print("The area of the room is", area, "square feet")