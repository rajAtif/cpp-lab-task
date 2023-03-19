#include<iostream>
//question 12 lab task 
using namespace std;
int main()
{
	int marks;
	cout<<"enter marks ";
	cin>>marks;
	
	if(marks>90) 
	
    {
		cout<<" GRADE A "<<endl;
	}	
	else if ((marks>=86)&&(marks>=90))
	{
			cout<<" GRADE -A ";
	}
		else if ((marks>81)&&(marks<85))
	{
			cout<<" GRADE b ";
	}
		else if ((marks>50)&&(marks<55))
	{
			cout<<" GRADE -c ";
	}
	
	else 
	cout<<"fasle";
	
	return 0 ;
	// coded by atif zaheer ;
}
