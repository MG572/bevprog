#include "std_lib_facilities.h"

int ga [10] = {1,2,4,8,16,32,64,128,256,512};

void f(int la[10], int sz)
{
    for(int i=0;i<10;i++)
    {
       	la[i]=ga[i];
       	cout << la[i] << " ";
    }
    cout<<endl;

    int* p=new int[10];
    for(int i=0;i<10;i++)
    {
        p[i]=la[i];
        cout<<p[i]<<" ";
    }
    cout << endl;
    delete[] p;

}
int main ()

{
	f(ga,10);
	int aa [] ={1,2*1,3*2*1,4*3*2*1,5*4*3*2*1,6*5*4*3*2*1,7*6*5*4*3*2*1, 8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1};
	//just... why? it's the same
	f(aa,10);
	return 0;
}