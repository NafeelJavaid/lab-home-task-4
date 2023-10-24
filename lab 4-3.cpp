#include<iostream>
using namespace std;
int main()
{
	int x;
	int z=0;
	cout<< " Plz tell a number: ";
	cin>>x;
	for(int y=1;y<=x;y++)
	{
		if(x%y==0){
			z++;
			
		}
	}
		if(z==2)
		{
			cout<<" The number is a prime number ";
		}
		else {
			cout<<"The number is not a prime number";
		}
		return 0;
		}
