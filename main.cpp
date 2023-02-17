#include <iostream>
#include <string>
using namespace std;
void DisplayArray(int array[],int sizeOfArray)
{
	cout<<"\n The array is = ";
	for(int i=0; i<sizeOfArray; i++)
		cout<<" "<<array[i];
}

void SearchByIndexNumber(int array[],int sizeOfArray)
{
	int indexNumber;5
	cout<<"\nEnter the Index Number Between 0 and "<<sizeOfArray<<endl;
	cin>>indexNumber;
	cout<<"Element on the entered Index Number is :"<<array[indexNumber-1];
}
void Searching(int array[],int sizeOfArray)
{
	int choice;
	cout<<"\n\n1. Search by INDEX Number ";
	cout<<"\n2. Search by  number ";
	cout<<"\n3. Enter a number and find how many duplicates ";
	cout<<"\n4. Display all the unique numbers and how many times they are repeated ";
	cout<<"\nEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
		SearchByIndexNumber(array,sizeOfArray);
		break;
		case 2:
	//	SearchByNumber(array);
		break;
		case 3:
		//SearchDuplicates(array);
		break;
		case 4:
		//DisplayRepeatation(array);
		break;
	}
}
void Sorting(int array[],int sizeOfArray)
{
	int choice;
	cout<<"\n\n1. Sort the array in ascending order";
	cout<<"\n2. Sort the array in descending order";
	cout<<"\n3. Delete a Number from the Array";
	cout<<"\n4. Delete all duplication";
	cout<<"\nEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
		//AscendingOrder(array);
		break;
		case 2:
	//	DescendingOrder(array);
		break;
		case 3:
		//DeleteNumber(array);
		break;
		case 4:
		//DeleteDuplication(array);
		break;
	}
}
int main() 
{
	srand(time(0));
	int sizeOfArray;
	int choice;
	cout <<"Enter the number of items : ";
	cin>>sizeOfArray;
	int array[sizeOfArray];
	for(int i=0 ; i<sizeOfArray ; i++)
	{
		//cout << (rand() % (ub - lb + 1)) + lb << " ";
		array[i]=(rand()%(9-1+1))+1;
	}
	
	DisplayArray(array,sizeOfArray);
	cout<<"\n\nOPTIONS \n1. SEARCHING\n2. SORTING / ARRANGING\nENTER YOUR CHOISE : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
		Searching(array,sizeOfArray);
		break;
		case 2:
		Sorting(array,sizeOfArray);
		break;
	}
}