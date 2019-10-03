#include <iostream>

void printUsageInformation ();

int main (int argc, char* argv[])
{
    if (argc == 1) {
        printUsageInformation();
    }
    return 0;
}

void printUsageInformation ()
{
    std::cout << "\nCommand Line Todo application\n";
    std::cout << "=============================\n\n";
    std::cout << "Command line arguments: \n";
    std::cout << "    -l   Lists all the tasks\n";
    std::cout << "    -a   Adds new the task\n";
    std::cout << "    -r   Removes a task\n";
    std::cout << "    -c   Completes a task\n";
}