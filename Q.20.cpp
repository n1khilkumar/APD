#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h)
{
	int i = l,j = h, pivot = arr[i];
	
	do
	{
		do{i++;}while(arr[i]<pivot);
		do{j--;}while(arr[j]>pivot);
		if(i<j) {
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}while(i<j);
	
	int temp = arr[l];
	arr[l] = arr[j];
	arr[j] = temp;
	return j;
}

void QuickSort(int arr[],int l,int h)
{
	if(l<h)
	{
		int j = partition(arr,l,h);
		QuickSort(arr,l,j);
		QuickSort(arr,j+1,h);
	}
}

int main()
{
	int n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n+1];
	srand(time(0));
	for(int i=0;i<n;i++)
	{
		arr[i] = rand();
	}
	cout<<"Array before QUICK SORT: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	arr[n] = INT_MAX;
	clock_t start,end;
	start = clock();
	QuickSort(arr,0,n);
	end = clock();
	cout<<"\n\nArray after QUICK SORT: ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	double time_taken;
	time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cout << "\n\nTime taken by QuickSort program is : " << fixed << time_taken << setprecision(5);
   	cout << " sec " << endl;
}
