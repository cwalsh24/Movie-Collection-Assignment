# Collaboration Assignment 2: Movie Collection
Group: Code4Days (Isaac Copeland, Connor Walsh)
Date: 10/27/2022

This program is designed to allow the user to import and manage a collection of movies organized within a library. 

## How to Run
* Type "make" to compile the program
* Type ./library to run the executable created by the compilation process
* Type "make clean" to remove unwanted files created by the compilation process
* Note: a preformatted, external text file must be provided to properly utilize the read_from_file method.
* When the executable is run, the user will be prompted to select from a menu of options: each of which expect different input.

## Design Decisions
* In order to iterate through the list of movie structs, we used for and while loops along with an iterator variable that was equal to the first position of the list. This was accomplished by using the begin() method in the standard list.In order to tell the loops to stop we used the end() method from the standard list to end the loop once the iterator variable was equal to the end iterator value. 
* In order to stop the user from breaking the program by typing a non-integer value at the main menu of our program, we made the choice variable a string. Doing this will allow the user to input a new choice after inputting an incorrect one instead of breaking the program. 
* In order to make the prices for the movies print correctly, we used <iomanip> and set the precision to be 2 for floats. This results in correct output for prices. 
* Our main menu is designed to loop indefinitely until the user types the number "8" to exit the program. This looping is accomplished by using a while loop to prompt the user for commands and call methods that those commands are assigned to using a series of else if statements.  

## Challenges
*

## How We Shared Work
* We shared the work by simply getting together in the G1 lab to talk about and work on the program.
* Connor wrote most of the code for the assignment, did in-line commentation, and brainstormed.
* Isaac commented the methods, helped brainstorm, and refined the code and documentation for each file.
* We both just had to work on it when possible to get it done on time.