# Assignment 1: Shell Commands
Operating Systems, Professor Javier Rafful Garfias
This project reinforces the basic understanding of shell commands by executing them through a C++ program. 
#Description
This project requires a C++ program (or perfered lanaguage) that uses system functions to execute certain shell commands(This specific project was created for a Windows machine). A simple menu providing the user with six possible options to choose from, in ascending order, are "1.List directory contents", "2.Print Working directory", "3.Create a new diretory", "4.Display a message", "5.Concatenate and display the contents of a file.", "6.Exit". The functionality of the program is as when the user selects one of the six options the corresponding action will execute. If option one (1.) is selected the program will list the directory contents through a system call 'dir'. When two (2.) is selected, the current working directory will be displayed to the user through the system call 'cd', option three (3), when selected, will create a new directory by first prompting the user for a name for the new directory before establishing the creation of the new directory. Option four (4) will display a message to the user through system call 'echo'. Option five (5.) will concatenate and display the contents of a file on the windows system and the last possible action, six (6.) will exit the program menu and close. 
## Getting started
Getting started with this program is straight forward. Simply by running the program, the user will be prompted by the menu, leaving the desired action(s) up to the user(s). 
### Dependancies
This program was written in C++ on the Visual Studio 2022 IDE on a Windows machine. 
#### Installation
Install Visual Studio 2022 or any other C++ compatible IDE/compiler to run the program if user does not have one already. 