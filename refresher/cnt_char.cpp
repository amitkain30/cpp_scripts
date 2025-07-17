/*
Script to count number of times a character occurs using file handling
*/

#include <iostream>
#include <fstream>
#include <string>

int main()
{
    //initialize variables
    std::string str;
    char ch, c;
    int ctr = 0;

    // get string from user
    std::cout<<"Enter a string: ";
    std::getline(std::cin, str);

    //Write to file
    std::ofstream fout("home.dat");
    if (!fout)
    {
        std::cerr<<"Error opening file for writing. \n";
        return 1;
    }

    //write string to file
    fout<<str;
    fout.close();

    //Get character for counting
    std::cout<<"\nEnter the character to be counted: ";
    std::cin>>c;

    //Read file and count occurances
    std::ifstream fin("home.dat");
    if (!fin)
    {
        std::cerr<<"Error opening file for reading.";
        return 1;
    }

    while (fin.get(ch))
    {
        if (ch==c)
        {
            ctr++;
        }
    }

    std::cout<<"\nThe character '"<<c<<"' occurred "<<ctr<<" times.";

    getchar();

    return 0;
}
