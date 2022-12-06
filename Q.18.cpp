#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	int n,i,j,k=0;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	srand(time(0));
	cout<<"\nGiven Array: ";
	for(i=0;i<n;i++)
	{
		arr[i] = rand()%10; 
		cout<<arr[i]<<" ";
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]==INT_MIN) continue;
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				arr[j]=INT_MIN;
			}
		}
		arr[k]=arr[i];
		k++;
	}
	cout<<"\nArray after removing duplicacy is: ";
	for(i=0;i<k;i++)
	{
		cout<<arr[i]<<" ";
	}
}
