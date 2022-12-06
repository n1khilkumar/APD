#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
	int i=0,n;
	cout<<"Enter the size of the array: ";
	cin>>n;
	int arr[n];
	srand(time(0));
	cout<<"\n\nArray before sort: ";
	for(i=0;i<n;i++)
	{
		arr[i] = rand();
		cout<<arr[i]<<" ";
	}
	clock_t start, end;
	start = clock();
	insertionSort(arr,n);
	end = clock();
	cout<<"\n\n\nArray after sort: ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	double timeTaken = double(end - start)/CLOCKS_PER_SEC;
	cout<<"\n\nTime taken by Insertion Sort = "<<timeTaken<<" sec";
	return 0;
}
