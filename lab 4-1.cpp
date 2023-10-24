#include<iostream>
using namespace std;
int main()
{
	int n;
	for(n=1;n<=150;n++){
		if(n%10==0){
			continue;
		}
		cout<<n<<endl;
	}
	
	return 0;
}