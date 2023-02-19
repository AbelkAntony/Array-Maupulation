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
	if(indexNumber>0 && indexNumber<sizeOfArray)
		cout<<"Element on the entered Index Number is :"<<array[indexNumber-1];
	else
		cout<<"\nInvalid Index Number";
}
//function to search by number in array 
void SearchByNumber(int array[],int sizeOfArray)
{
	bool found= false;
	int number;
	cout<<"\nEnter a number between 1-9 to search : ";
	cin>>number;
	for(int i=0; i<sizeOfArray; i++)
	{
		if(array[i]==number)
		{
			cout<<"\nNumber found in the Array";
			found = true;
			break;
		}
	}
	if (found == false)
	{
		cout<<"\nNumber not found";
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
	while(sizeOfArray>0)
	{
		for(int j=0; j<sizeOfArray; j++)
		{
			if(array[0]==array[j])
			{
				numberCount +=1;
			}
		}
		cout<<endl<<array[0]<<" repeats "<<numberCount<<" times ";
		numberCount=0;
		int temp = array[0];
		for(int x=0; x<sizeOfArray; x++)
		{
			if(array[x]==temp)
			{
				for(int y=x;y<sizeOfArray;y++)
				{
					array[y]=array[y+1];
				}
				x -=1;
				sizeOfArray -=1;
			}
		}
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
		default:
		cout<<"\nINVALID INPUT";
	}
}

//function defenition of delete duplication
void DeleteDuplication(int array[],int sizeOfArray)
{
	for(int i=0;i<sizeOfArray;i++)
	{
		for(int j=i+1;j<sizeOfArray;j++)
		{
			if(array[i]==array[j])
			{
				for(int k=j;k<sizeOfArray;k++)
				{
					array[k]=array[k+1];
				}
				j -=1;
				sizeOfArray -=1;
			}
		}
	}
	DisplayArray(array,sizeOfArray);
}

//function defenition of Delete number
void DeleteNumber(int array[],int sizeOfArray)
{
	int number;
	cout<<"\n\nEnter the number to be deleted : ";
	cin>>number;
	for(int i=0; i<sizeOfArray; i++)
	{
		if(array[i]==number)
		{
			for(int j=i;j<sizeOfArray;j++)
			{
				array[j]=array[j+1];
			}
			i -=1;
			sizeOfArray -=1;
		}
	}
	DisplayArray(array,sizeOfArray);
}

//function for deletion function
void Delete(int array[],int sizeOfArray)
{
	int choice;
	cout<<"\n\n1. Delete Number";
	cout<<"\n2. Delete Duplication";
	cout<<"\nENTER YOUR CHOICE : ";
	cin>>choice;
	switch(choice)
	{
		case 1:
		DeleteNumber(array,sizeOfArray);
		break;
		case 2:
		DeleteDuplication(array,sizeOfArray);
		break;
		default:
		cout<<"\nINVALID INPUT";
	}
}

int main() 
{
	srand(time(0));
	//variables
	int sizeOfArray;
	int choice;
	int upperLimit;
	int lowerLimit;
	//user input to set the length of the array
	cout <<"Enter the number of items : ";
	cin>>sizeOfArray;
	//creating arry with the length inputed by the user
	int array[sizeOfArray];
	//GETTING LOWER LIMIT
	cout<<"\nEnter the lower limit of the number : ";
	cin>>lowerLimit;
	//GETTING UPPER LIMIT
	cout<<"Enter the upper limit of the number : ";
	cin>>upperLimit;
	//inputing array element by random numbers
	for(int i=0 ; i<sizeOfArray ; i++)
	{
		//cout << (rand() % (ub - lb + 1)) + lb << " ";
		array[i]=(rand()%(upperLimit-lowerLimit+1))+lowerLimit;
	}
	//displaying randomly generated array
	DisplayArray(array,sizeOfArray);
	//display option for searching or sorting
	cout<<"\n\nOPTIONS ";
	cout<<"\n1. SEARCHING";
	cout<<"\n2. DELETION";
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
		Delete(array,sizeOfArray);
		break;
		default:
		cout<<"\nINVALID INPUT";
	}
}