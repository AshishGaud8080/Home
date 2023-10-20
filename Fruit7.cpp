#include<iostream>
#include"day7LPfruit.h"
using namespace std;

int main()
{
	fruit f;
	f.taste();
	cout<<"\n\n"<<endl;
	
	Apple ap;
	ap.taste();
	ap.jam();
	cout<<"\n\n"<<endl;
	
	Orange org;
	org.taste();
	org.juice();
	cout<<"\n\n"<<endl;
	
	Mango mag;
	mag.taste();
	mag.pulp();

	cout<<"\n\n"<<endl;
	
	fruit*ptr=& org;
	ptr->taste();
	
	fruit * basket[4];
	basket[0]=&f;
	basket[1]=&ap;
	basket[2]=&org;
	basket[3]=&mag;
				
	for(int i=0;i<4;i++)
	{
		basket[i]->taste();
		
	}
	
    return 0;
}
