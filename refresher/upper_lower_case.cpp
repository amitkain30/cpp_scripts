/*
Script for counting upper case and lower case letters from a file
*/
#include <iostream>
#include <fstream>
#include <cctype>
#include <string>

int main() 
{
    // initialize variables
    std::string str;
    int lowerCount = 0, upperCount = 0;
    char ch;

    std::ofstream fout("guess.dat");
    if (!fout) 
    {
        std::cerr << "Error opening file for writing.\n";
        return 1;
    }

    //get string from user
    std::cout << "Enter the string: ";
    std::getline(std::cin, str);

    // put string into file
    fout << str;
    fout.close();

    std::ifstream fin("guess.dat");
    if (!fin) 
    {
        std::cerr << "Error opening file for reading.\n";
        return 1;
    }

    // get upper and lower case alphabets
    while (fin.get(ch)) 
    {  
        if (std::islower(ch))
            ++lowerCount;
        else if (std::isupper(ch))
            ++upperCount;
    }

    fin.close();

    std::cout << "\nNumber of lowercase characters: " << lowerCount;
    std::cout << "\nNumber of uppercase characters: " << upperCount << '\n';

    getchar();

    return 0;
}
