//Esteban Hernandez/r729w293
#include <iostream>
#include <string>
#include <iostream>


    void print_menu();
    bool createNewDirectory(const std::string & directoryName);
    void concatenateAndDisplayFile(const std::string& fileName);

    int main()
    {
        print_menu();
        concatenateAndDisplayFile("example.txt");

        if (!createNewDirectory("new_folder")) {
            return 1; // Exit if directory creation fails
        }
        return 0;
    }