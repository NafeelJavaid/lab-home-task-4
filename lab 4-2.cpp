#include<iostream>
using namespace std;
int main()
{
	int x;
	int y;
	int z=0;
	cout<<"Enter a numnber :";
	cin>>x;
	if(x<0){
		cout<<" Plz enter a non negative integer";
	}
	while(x>0){
		y=x%10;
		z=z+y;
		x=x/10;
	}
	cout<< " The sum of digits is :"<<z<<endl;
	return 0;
}