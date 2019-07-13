#include <iostream>
#include <conio.h>

using namespace std;
//Create a C++ functional program that sorts n number of elements using either selection or
//bubble sort.


int main()
{
	int a[100],n,i,j,temp;

	//inputs array size
	cout<<"Enter the size of array: ";
	cin>>n;

	//read n array elements
	for(i=0;i<n;i++)
	{
		cout<<"Enter element ["<<i+1<<"] ";
		cin>>a[i];
	} 
	
	//print input array elements
	cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout<<"Unsorted Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<"\n";
	cout<<endl;
	
	
	//sorting elements using selection sort
	 cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
	cout<<"Selection Sorting Ongoing.......\n";
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	//sorted array
	cout<<"After using selection :" << endl;
	for(i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}

	getch();
	return 0;
	
	
}
