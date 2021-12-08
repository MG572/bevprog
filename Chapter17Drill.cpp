#include "std_lib_facilities.h"


ofstream os;


void print_array10(ostream& os, int* a)
{
	for(int i=0; i<10;i++)
	{
		os << a[i]<<endl;
	}

}


void print_array(ostream& os, int* a,int n)
{
	for(int i=0; i<n;i++)
	{
		os << a[i]<<endl;
	}

}


void print_vector(ostream& os, vector<int> a,int n)
{
	for(int i=0; i<n;i++)
	{
		os << a[i]<<endl;
	}

}


int main()
{
	os.open("os.txt");
	
	int* array = new int [10];
	for (int i=0; i<10; i++)
	{
		cout << array[i] << " ";
	}
	print_array10(os, array);
	delete[]array;
	
	int* ten = new int[10] {101,102,103,104,105,106,107,108,109,110};
	print_array10(os,ten);
	delete[]ten;

	int* eleven = new int[11] {101,102,103,104,105,106,107,108,109,110,111};
	print_array10(os,eleven);
	delete[]eleven;

	int* twenty = new int[20] {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120};
	print_array(os,twenty,20);
	delete[]twenty;

	//vectors begin here
	vector<int> vten  {101,102,103,104,105,106,107,108,109,110};
	print_vector(os,vten,10);

	vector<int> veleven {101,102,103,104,105,106,107,108,109,110,111};
	print_vector(os,veleven,11);

	vector<int> vtwenty {101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120};
	print_vector(os,vtwenty,20);
	
	os.close();
	return 0;
}