#include<iostream>
using namespace std;

int main()
{
	int x,i=0;
	cout<<"Enter the the amount (in cents): ";
	cin>>x;
	float res = float(x)/100;
	cout<<"\n"<<"'"<<int(res)<<"'"<<" dollars, ";
	int cent = x%100;
	if(cent>=50)
	{
		cout<<"'1' 50 cent, ";
		cent = cent-50;
	}
	while(cent>=20)
	{
		i++;
		cent = cent - 20;
	}
	if(i>0)
	{
		cout<<"'"<<i<<"'"<<" 20 cents, ";
	}
	i=0;
	while(cent>=10)
	{
		i++;
		cent = cent - 10;
	}
	if(i>0)
	{
		cout<<"'"<<i<<"'"<<" 10 cents, ";
	}
	i=0;
	while(cent>=5)
	{
		i++;
		cent = cent - 5;
	}
	if(i>0)
	{
		cout<<"'"<<i<<"'"<<" 5 cents, ";
	}
	i=0;
	while(cent>=1)
	{
		i++;
		cent = cent - 1;
	}
	if(i>0)
	{
		cout<<"'"<<i<<"'"<<" 1 cents ";
	}
}
