#include <iostream>
#include <limits> // for std::numeric_limits
#include <cstdlib>

// Move alll functions here instead of seperate files
void listDirectoryContents()
{
    std::cout << "Listing directory contents...\n";
    system("dir");
}

void printWorkingDirectory()
{
    std::cout << "Printing working directory...\n";
    system("cd");
}

bool createNewDirectory(const std::string& directoryName)
{
    std::cout << "Creating new directory...\n";
    std::string command = "mkdir " + directoryName;
    int result = system(command.c_str()); // Convert to to C-style string
    if (result != 0) {
        std::cerr << "Error creating directory: " << directoryName << std::endl;
        return false; // failure
    }
    return true; // success
}

void displayMessage()
{
    std::cout << "Displaying message...\n\n";
    system("echo Follow the white rabbit... \n");
}

void concatenateAndDisplayFile(const std::string& fileName)
{
    std::cout << "Concatenating and displaying file content...\n";
    std::string command = "type " + fileName;
    system(command.c_str());

}

void print_menu() {
    int choice = 0;
    std::string directoryName;
    std::string fileName; 

    while (true) {
        std::cout << "\nMenu\n"
            << "1. List Directory Contents.\n"
            << "2. Print Working Directory.\n"
            << "3. Create New Directory.\n"
            << "4. Display message.\n"
            << "5. Concatenate and display content of a file.\n"
            << "6. Exit.\n"
            << "Enter your choice (1-6): ";
        std::cin >> choice;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number.\n";
            continue;
        }

        switch (choice) {
        case 1:
            listDirectoryContents();
            break;
        case 2:
            printWorkingDirectory();
            break;
        case 3:
            //std::string directoryName;
            std::cout << "Enter direcotry name...'\n";
            std::cin >> directoryName;
            createNewDirectory(directoryName);
            break;
        case 4:
            displayMessage();
            break;
        case 5:
            std::cout << "Enter file name. \n";
            std::cin >> fileName;
            concatenateAndDisplayFile(fileName);
            break;
        case 6:
            std::cout << "Exiting.\n";
            exit(0); // exit
        default:
            std::cout << "Please enter a number between 1 and 6.\n";
        }
    }
}
