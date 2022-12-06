#include<bits/stdc++.h>
using namespace std;
int arr1[4];
int arr2[4];

void makeArray(int x,int y)
{
	int i=0;
	while(x/10!=0)
	{
		if(y==1) arr1[i] = x%10;
		else if(y==2) arr2[i] = x%10;
		x = x/10;
		i++;
	}
	if(y==1) arr1[i] = x%10;
	else if(y==2) arr2[i] = x%10;
}

void check()
{
	int sink = 0,hit = 0;
	for(int i=0;i<4;i++)
	{
		if(arr2[i]==INT_MIN) continue;
		for(int j=0;j<4;j++)
		{
			if(arr1[j]==INT_MIN) continue;
			if(arr1[j]==arr2[i])
			{
				int m = max(i,j);
				if(arr1[m]==arr2[m])
				{
					//cout<<"\nSink at position: "<<abs(4-i);
					sink++;
					arr2[m]=INT_MIN;
					arr1[m] = INT_MIN;
					break;
				}
				//cout<<"\nHit at position: "<<abs(4-i);
				hit++;
				arr1[j] = INT_MIN;
				break;
			}
		}
	}
	cout<<"Total sink are: "<<sink<<endl;
	cout<<"Total hit are: "<<hit<<endl;
}

int main()
{
	srand(time(0));
	int num,guess,guess_no = 1; 
	num = rand()%9000 + 1000;
//  num = 5111;
	cout<<num<<endl;
	while(num!=guess)
	{
		if(guess_no%10==1) cout<<"\nEnter your "<<guess_no<<" st guess: ";
		else if(guess_no%10==2) cout<<"\nEnter your "<<guess_no<<" nd guess: ";
		else if(guess_no%10==3) cout<<"\nEnter your "<<guess_no<<" rd guess: ";
		else cout<<"\nEnter your "<<guess_no<<" th guess: ";
		guess_no++;
		cin>>guess;
		if(guess==num)
		{
			cout<<"\n\nYAY!!! C O R R E C T   G U E S S";
			return 0;
		}
		makeArray(num,1);
		makeArray(guess,2);
		check();
	}
}
