#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <fstream>
 
// " ' "

int main() {
    std::string lowercase = "abcdefghijklmnopqrstuvwxyz";
    std::string uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string numbers = "0123456789";
    std::string symbols = "!@#$%^&*()-_=+[]{};:,.<>?/";

    std::string allChars = "";
    int length;

    char choice;
    std::cout << " Password length: ";
    std::cin >> length;

    std::cout << "Include lowercase letters? (y/n):";
    std::cin >> choice;
    if (choice == 'y' ) allChars += uppercase;

    std::cout << "Include numbers? (y/n): ";
    std::cin >> choice;
    if (choice == 'y') allChars += numbers;

    std::cout << "Include symbols? (y/n): ";
    std::cin >> choice;
    if (choice == 'y') allChars += symbols;

    if (allChars.empty()) {
        std::cout << "No character sets selected! Exiting...\n";
        return 1;
    }

    std::mt19937 rng(time(0));
    std::uniform_int_distribution<> dist(0, allChars.size() - 1);

    std::string password = "";
    for (int i = 0; i < length; ++i) {
        password += allChars[dist(rng)];
    }

    std::cout << "Generated password: " << password << std::endl;

    std::ofstream file("passwords.txt", std::ios::app); // append mode
    if (file.is_open()) {
        file << password << "\n";
        file.close();
        std::cout << "Password saved to passwords.txt\n";
    } else {
        std::cout << "Error: Could not open file.\n";
    }

    return 0;



}