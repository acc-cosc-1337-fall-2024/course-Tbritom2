//write include statements
#include <iostream>
#include "decisions.h"

int main() {
    int choice;
    std::cout << "MAIN MENU\n\n";
    std::cout << "1-Letter grade using if\n";
    std::cout << "2-Letter grade using switch\n";
    std::cout << "3-Exit\n\n";

    std::cout << "Enter your choice: ";
    std::cin >> choice;

    if (choice == 1 || choice == 2) {
        int grade;
        std::cout << "Enter the numerical grade (0-100): ";
        std::cin >> grade;

        if (grade >= 0 && grade <= 100) {
            if (choice == 1)
                std::cout << "Letter grade using if: " << get_letter_grade_using_if(grade) << std::endl;
            else
                std::cout << "Letter grade using switch: " << get_letter_grade_using_switch(grade) << std::endl;
        } else {
            std::cout << "The number is out of range.\n";
        }
    } else if (choice == 3) {
        std::cout << "Exiting...\n";
    } else {
        std::cout << "Invalid choice!\n";
    }

    return 0;
}
