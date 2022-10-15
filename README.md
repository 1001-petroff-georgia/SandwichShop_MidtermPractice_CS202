# CS202_Summer2022_MidtermPrep2

This repository is used for CS202 midtermPrep. Use the instructions to create 3 classes (aggregation + inheritance)

## Project Goals
The goal of this project is to:
1.	Continued use of **makefiles**.
2.  Continued use of **class** building skills including **aggregation**
3.  Provide practice with new class **Inheritance** skills.

### Important Notes:
1.    **Program Design**: It is up to you to decide which class inherits from another class, and which class is aggregated into another class. This will determine how things are included and if one class inherits from another.

2.    **Formatting**: Make sure that you follow the precise recommendations for the output content and formatting. For example, do not change the text from “Correct usage: ” to “correct”. 

3.    **Comments**: Header comments are required in the driver file and recommended for the rest of the program. Points will be deducted on your final if no header comments are included.
## Program
Your project should include the following files:
```
- driver.cpp
- sandwich.cpp
- sandwich.h
- meat.cpp
- meat.h
- hamburger.cpp
- hamburger.h
- makefile  
```
Your executable should be named ```sandwichShop```
## Programming Problem
Write a program for making a hamburger!

## Requirements
```
driver.cpp
```
The driver has been provided to you. Please modify it so that it prints sandwich, meat, and hamburger information for the pre-set newHamburger. Then change the burger  meat type so that it is chicken and print sandwich, meat, and hamburger information again.

```
sandwich.h
```
**Functionality**: This file should contain the definition for the Sandwich class, which includes the following attributes:  
```
string sandwichType;
Meat meatType; 
bool lettuceWrap;
```
```
sandwich.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor  
sandwich type and meat type should be empty strings, lettuce wrap should be false
- parameterized contructor  
- copy constructor  

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*printSandwich()*     
**Input Parameters**: None  
**Returned Output**: None  
**Functionality**: 
this function should display The <\sandwich type>\ (lettuce wrap). (see output example at the end, or run executable).  
```
meat.h
```
**Functionality**: This file should contain the definition for the Meat class, which includes the following attributes:  
```
string name;
string type;
int numMeats;
```
```
meat.cpp
```
**Functionality**: This class should contain the function definitions for the following functions:  

*Constructors*  
- default constructor  
strings should be initialized to empty, numMeats should be 0
- parameterized contructor  
- copy constructor  

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*printMeat()*  
**Input Parameters**: None  
**Returned Output**: None  
**Functionality**: this function should display <\number of meats>\ <\type of meats>\ patties
```
hamburger.h
```
**Functionality**: This class should contain the definition for the Hamburger class, which includes the following attributes:  

```
bool ketchup
bool mayo
```


```
hamburger.cpp
```
**Functionality**: This file should contain the function definitions for the following functions: 
 *Constructors*  
- default constructor  
ketchup and mayo should be true, meat type is Beef, meat name is Burger Patty, lettuce wrap is false, number of meats is 1, sandwich type is Hamburger
- parameterized contructor  
- copy constructor  

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*printHamburger()*  
**Input Parameters**: None   
**Returned Output**: None  
**Functionality**: This function should display "is a Hamburger sandwich. It has: " and then output "Ketchup" (if present) and/or "Mayo" (if present), each on their own line.

**Sample Output**:
```
The Double Beef Burger is a Hamburger sandwich. It has: 
Ketchup
Mayo
2 Beef patties


The Double Beef Burger is a Hamburger sandwich. It has: 
Ketchup
Mayo
2 Chicken patties
```

## Submission details --Note: submission of this is not mandatory, but a good way to check if you're understanding. Solution can be found on WebCampus.
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “a descriptive message!”
git push
```
