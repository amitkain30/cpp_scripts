// Script for adding lengths with feet, inches 
// and passing structs by reference 

#include <iostream>


struct distance
{
    int feet;
    int inches;

    // Normalize inches to be < 12
    void normalize()
    {
        feet+=inches/12;
        inches = inches%12;
    }
};


// Declare functions to be used
void prnsum(distance &l1, distance&l2);
distance getInput(int index);

int main()
{
    distance length_1, length_2;

    length_1 = getInput(1);
    length_2 = getInput(2);

    prnsum(length_1, length_2);
    getchar();
    return 0;
}


// Get input from user
distance getInput(int index)
{   
    distance length;
    std::cout<<"Enter length "<<index<<":\n\tFeet: ";
    std::cin>>length.feet;
    std::cout<<"\tInches: ";
    std::cin>>length.inches;
    length.normalize();
    return length;
}


// Printing the sum of struct objects 
void prnsum(distance &l1, distance &l2)
{
    distance length_3;
    length_3.feet = l1.feet + l2.feet;
    length_3.inches = l1.inches + l2.inches;
    length_3.normalize();
    std::cout<<"\nTotal length is "<<length_3.feet<<" feet and "<<length_3.inches<<" inches.";
}
