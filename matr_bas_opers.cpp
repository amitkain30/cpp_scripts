// Script to perform some basic operations on matrices

#include <iostream>


int a[3][3] , b[3][3] , c[3][3];
void enter ()
{
	for(int i=0 ; i<3 ; i++)
	{
		for(int j =0  ; j<3; j++)
		{
			std::cout<<"Enter the "<<i<<" "<<j<<" element of array a ";
			std::cin>>a[i][j];
		}
	}
	std::cout<<"\nThe details for array b ";
	for(int i=0  ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			std::cout<<"Enter the "<<i<<" "<<j<<" element of array a ";
			std::cin>>b[i][j];
		}
	}
}
void sum ()
{
	for(int i=0  ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	std::cout<<"\nThe added matrix is ";
	for(int i=0 ; i<3; i++)
	{
		std::cout<<std::endl;
		for(int j=0 ; j<3 ; j++)
		{
			std::cout<<"\t"<<c[i][j];
		}
	}
}
void sub()
{
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0  ; j<3 ; j++)
		{
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	std::cout<<"\nThe subtracted matrix is ";
	for(int i=0 ; i<3 ; i++)
	{
		std::cout<<"\n";
		for(int j=0 ; j<3 ; j++)
		{
			std::cout<<"\t"<<c[i][j];
		}
	}
}
void mult()
{
	for(int i =0 ; i<3; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			c[i][j]=a[i][j]*b[i][j];
		}
	}
	std::cout<<"\tThe multiplied matrix is ";
	for(int i=0 ; i<3 ;i++)
	{
		std::cout<<"\n";
		for(int j=0 ; j<3 ; j++)
		{
			std::cout<<"\t"<<c[i][j];
		}
	}
}
void div()
{
	for(int i =0 ; i<3 ; i++)
	{
		for(int j=0  ; j<3 ; j++)
		{
			c[i][j]=a[i][j]/b[i][j];
		}
	}
	std::cout<<"\nThe divided matrix is ";
	for(int i=0 ; i<3 ; i++)
	{
		std::cout<<"\n";
		for(int j=0 ; j<3 ; j++)
		{
			std::cout<<"\t"<<c[i][j];
		}
	}
}
int main()
{
	enter();
	int choice;
	char ch='y';
	do
	{
		std::cout<<"\n Enter \n 1.Addition \n 2.Subtraction \n 3.Multiplication \n 4.Division ";
		std::cin>>choice;
		switch(choice)
		{
			case 1:
				sum();
				break;
			case 2:
				sub();
				break;
			case 3:
				mult();
				break;
			case 4:
				div();
				break;
			default:
				std::cout<<"\n You entered the wrong number ";
				break;
		}
		std::cout<<"\n Do you want to continue....?(Y/N) ";
		std::cin>>ch;
	}while(ch=='y' || ch=='Y') ;
	std::cout<<" POGRAM TERMINATED.....";
	getchar();
    return 0;
}
