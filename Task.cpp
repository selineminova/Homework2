#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main()
{
	const int size=6;
	int matrix[size][size];
	int i,j,sum;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<"Enter element"<<i<<"."<<j<<":";
			cin>>matrix[i][j];
		}
		
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<size;i++)
	{
		sum=0;
		for(j=0;j<size;j++)
		{
			if(i%2!=0)
			{
				sum=sum+matrix[i][j];
			}
		}
		if(sum!=0)
		{
			cout<<"Sum of the rows of number"<<" "<<i+1<<" "<<"is"<<" "<<sum<<" "<<endl;
		}
	
	}
	
}
