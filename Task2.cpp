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
			if(matrix[i][j]%2!=0)
			{
				sum=sum+matrix[i][j];
			}
		}
		cout<<"Sum of the odd numbers in row"<<" "<<i+1<<" "<<"is"<<" "<<sum<<endl;
	}
	
}
