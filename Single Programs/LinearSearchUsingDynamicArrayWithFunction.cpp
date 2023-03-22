#include <iostream>
using namespace std;

int size;
int linearsearch(int A[])
{
	int key;
	cout<<"Enter key element to find: "<<endl;
	cin>>key;
	for(int i=0;i<size;i++)
	{
		if(key==A[i])
		{
			cout<<"Key element found at "<<i<<" position"<<endl;
			return i;
			//return i;	
		}	
	}
	cout<<"Key element not found.";
}

int main()
{
	int position;
	cout<<"Enter size of array: "<<endl;
	cin>>size;
	int *A=new int(size);
	cout<<"Enter elements inside array: "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>A[i];
	}
	position=linearsearch(A);
}
