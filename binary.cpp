#include <iostream>
using namespace std;

int main()
{
	int i, num, first, last, middle;
	int arr[]={11, 22, 30, 33, 40, 44, 55, 60, 66, 77, 80, 88, 99};
	cout<<"The elements are: \n";
	for (i=0; i<13; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<"\nEnter the number that you want to search:"; 
        cin>>num;
	first = 0;
	last = 13-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" found in the array at the location "<<middle+1<<"\n"; 
                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; 
        } 
        if(first > last)
	{
	   cout<<num<<" not found in the array";
	}
	return 0;
}
