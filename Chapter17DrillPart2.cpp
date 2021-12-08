#include "std_lib_facilities.h"


ofstream os;


void print_array(ostream& os, int* a,int n)
{
	for(int i=0; i<n;i++)
	{
		os << a[i]<<endl;
	}

}


int main()
{

	int a =7;
	int* p1=&a;
	cout << "p1 (the memory): " << p1 << " *p1 (the assigned value): " <<*p1<< endl;

	int* p2 = new int [7] {1,2,4,8,16,32,64};
	cout << "p2: "<< p2 << endl;
	for (int i=0; i<7;i++)
	{
		cout << p2[i] << " ";
	}

	int* p3=p2;
	p2=p1;
	p2=p3;

	cout << endl;
	//printing out p1
	cout << "p1: "<< p1 << endl;
	for (int i=0; i<7;i++)
	{
		cout << p1[i] << " ";
	}
	cout<< endl;
	//printing out p2
	cout << "p2: "<< p2 << endl;
	for (int i=0; i<7;i++)
	{
		cout << p2[i] << " ";
	}

	delete[]p1;
	delete[]p2;
	delete[]p3;
	//I somehow managed to free up "more" memory than I allocated, I think that's impressive

	p1=new int [10]{1,2,4,8,16,32,64,128,256,512};
	p2= new int[10];
	for(int i; i<10;i++)
	{
		p2[i]=p1[i];
	}

	vector<int> v1 {1,2,4,8,16,32,64,128,256,512};
	vector <int> v2;
	for (int i; i < 10; ++i)
	{
		v2[i]=v1[i];
	}

	return 0;
}