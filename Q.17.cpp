#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int n,min = INT_MAX,max = INT_MIN;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	srand(time(0));
	cout<<"\nGiven Array: ";
	for(int i=0;i<n;i++)
	{
		arr[i] = rand();
		cout<<arr[i]<<" ";
		if(min>arr[i]) min=arr[i];
		if(max<arr[i]) max=arr[i];
	}
	cout<<"\nMinimum valued element in the array is: "<<min;
	cout<<"\nMaximum valued element in the array is: "<<max;
}
