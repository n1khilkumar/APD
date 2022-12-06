#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a=b;
	b=temp;
}

void selectionSort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min_ind = i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[min_ind]>arr[j])
			{
				min_ind = j;
			}
		}
		if(min_ind!=i)
		{
			swap(arr[min_ind],arr[i]);
		}		
	}
}

int main()
{
	int n,m,i;
	cout<<"\nEnter the size of the array: ";
	cin>>n;
	cout<<"\nEnter the max limit of an element: ";
	cin>>m;
	int arr[n];
	srand(time(0));
	for(i=0;i<n;i++)
	{
		arr[i] = rand()%(m+1); 
	}
	cout<<"\n\nBefore selection sort: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	clock_t start,end;
	start = clock();
	selectionSort(arr,n);
	end = clock();
	cout<<"\n\n\n\nAfter selection sort: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	double timeTaken;
	timeTaken = double(end - start)/double(CLOCKS_PER_SEC);
	cout<<"\n\nTime taken by the selection sort alogrithm is: "<<fixed<<timeTaken;
}
