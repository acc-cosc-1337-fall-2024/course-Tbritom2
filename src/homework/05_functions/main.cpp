
#include <iostream>
#include "func.h"

int main()
 {
    int choice;
    std::string dna;

    do {
        std::cout << "Menu\n1- Get GC Content\n2- Get DNA Complement\n3- Exit\nEnter your choice: ";
        std::cin >> choice;

        switch(choice) {
            case 1:
                std::cout << "Enter DNA string: ";
                std::cin >> dna;
                std::cout << "GC Content: " << get_gc_content(dna) << std::endl;
                break;
            case 2:
                std::cout << "Enter DNA string: ";
                std::cin >> dna;
                std::cout << "DNA Complement: " << get_dna_complement(dna) << std::endl;
                break;
            case 3:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice! Please try again." << std::endl;
        }
    } while(choice != 3);

    return 0;
}