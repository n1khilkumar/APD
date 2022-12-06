#include<bits/stdc++.h>
using namespace std;

void merge(int A[],int l,int mid,int h)
{
	int i=l,j=mid+1,k=l,B[h+1];
	while(i<=mid&&j<=h)
	{
		if(A[i]<A[j]) B[k++] = A[i++];
		else B[k++] = A[j++];
	}
	while(i<=mid) B[k++] = A[i++];
	while(j<=h) B[k++] = A[j++];
	
	for(i=l;i<=h;i++)
	{
		A[i] = B[i];
	}
}

void mergeSort(int A[],int l,int h)
{
	int mid;
	if(l<h)
	{
		mid = (l+h)/2;
		mergeSort(A,l,mid);
		mergeSort(A,mid+1,h);
		merge(A,l,mid,h);
	}
}

int main()
{
	int n,m;
	cout<<"Enter the size of the array: ";
	cin>>n;
	cout<<"Enter the max limit of the element: ";
	cin>>m;
	srand(time(0));
	int arr[n];
	for(int i=0;i<n;i++)
	{
		arr[i] = rand()%(m+1);
	}
	cout<<"\n\nBefore merge sort: ";
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	cout<<endl<<endl<<endl;
	clock_t start, end;
	start = clock();
	mergeSort(arr,0,n-1);
	end = clock();
	cout<<"After merge sort: ";
	for(int i=0;i<n;i++) cout<<arr[i]<<" ";
	double time_taken;
	time_taken = double(end-start)/double(CLOCKS_PER_SEC);
	cout<<"\n\nTime taken by merge sort: "<<fixed<<time_taken<<" sec.";
	return 0;
}
