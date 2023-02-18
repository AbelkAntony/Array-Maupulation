#include <iostream>
#include <string>
using namespace std;

//function to display array
void DisplayArray(int array[],int sizeOfArray)
{
	cout<<"\n The array is = ";
	for(int i=0; i<sizeOfArray; i++)
		cout<<" "<<array[i];
}
//function to search by Array index number
void SearchByIndexNumber(int array[],int sizeOfArray)
{
	int indexNumber;
	cout<<"\nEnter the Index Number Between 0 and "<<sizeOfArray<<endl;
	cin>>indexNumber;
	cout<<"Element on the entered Index Number is :"<<array[indexNumber-1];
}
//function to search by number in array 
void SearchByNumber(int array[],int sizeOfArray)
{
	int number;
	cout<<"\nEnter a number between 1-9 to search : ";
	cin>>number;
	for(int i=0; i<sizeOfArray; i++)
	{
		if(array[i]==number)
		{
			cout<<"\nNumber found in the Array";
			break;
		}
	}
}
//function for search duplicate number which entered by user
void SearchDuplicates(int array[],int sizeOfArray)
{
	int number;
	int numberCount=0;
	cout<<"\nEnter a number between 1-9 to search : ";
	cin>>number;
	for(int i=0; i<sizeOfArray; i++)
	{
		if(array[i]==number)
		{
			cout<<"\nNumber found in Index number "<<i+1;
			numberCount +=1;
		}
	}
	cout<<"\n\nNumber "<<number<<" found "<<numberCount<<" time in the Array ";
}
//function for dispaly the cout of number repeating
void DisplayRepeatation(int array[],int sizeOfArray)
{
	int numberCount=0;
	cout<<"Unique numbers and how many times they are repeated";
	for(int x=1; x<=9; x++)
	{
		for(int i=0; i<sizeOfArray; i++)
		{
			if(array[i]==x)
			{
				numberCount +=1;
			}
		}
		if(numberCount !=0)
		{
			cout<<"\n"<<x<<" repeats "<<numberCount<<" times in Array";
		}
		numberCount=0;
	}
		
}
//function for searching
void Searching(int array[],int sizeOfArray)
{
	//variables
	int choice;
	//display options in searching functions
	cout<<"\n\nOPTIONS";
	cout<<"\n1. Search by INDEX Number ";
	cout<<"\n2. Search by  number ";
	cout<<"\n3. Enter a number and find how many duplicates ";
	cout<<"\n4. Display all the unique numbers and how many times they are repeated ";
	cout<<"\nEnter your choice : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
		//function call for search number by index	
		SearchByIndexNumber(array,sizeOfArray);
		break;
		case 2:
		//function call for search by number		
		SearchByNumber(array,sizeOfArray);
		break;
		case 3:
		//function call for search duplicates number		
		SearchDuplicates(array,sizeOfArray);
		break;
		case 4:
		//function call for display how many times a number repeating
		DisplayRepeatation(array,sizeOfArray);
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
		//AscendingOrder(array,sizeOfArray);
		break;
		case 2:
		//DescendingOrder(array,sizeOfArray);
		break;
		case 3:
		//DeleteNumber(array,sizeOfArray);
		break;
		case 4:
		//DeleteDuplication(array,sizeOfArray);
		break;
	}
}
int main() 
{
	srand(time(0));
	//variables
	int sizeOfArray;
	int choice;
	//user input to set the length of the array
	cout <<"Enter the number of items : ";
	cin>>sizeOfArray;
	//creating arry with the length inputed by the user
	int array[sizeOfArray];
	//inputing array element by random numbers
	for(int i=0 ; i<sizeOfArray ; i++)
	{
		//cout << (rand() % (ub - lb + 1)) + lb << " ";
		array[i]=(rand()%(9-1+1))+1;
	}
	//displaying randomly generated array
	DisplayArray(array,sizeOfArray);
	//display option for searching or sorting
	cout<<"\n\nOPTIONS ";
	cout<<"\n1. SEARCHING";
	//cout<<"\n2. SORTING / ARRANGING";
	cout<<"\nENTER YOUR CHOISE : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
		//functon call for searching option	
		Searching(array,sizeOfArray);
		break;
		case 2:
		//function call for sorting array
		//Sorting(array,sizeOfArray);
		break;
	}
}