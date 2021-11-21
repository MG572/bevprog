#include "std_lib_facilities.h"

struct Point
{
	int x;
	int y;
};

class points
{
private:
    vector<double>x;
    vector<double>y;

public:
    double getxpoint(int index)
    {
        return x[index];
    }

    double getypoint(int index)
    {
        return y[index];
    }
    void addpont(int a, int b)
    {
        x.push_back(a);
        y.push_back(b);
    }

};

int main()
{

    points p;
    double x,y;
    double size;

	cout << "Please write 7 x,y pairs" << endl;
    for(int i=0; i<7; i++)
    {
        cin>>x;
        cin>>y;
        p.addpont(x,y);
        size++;
    }
	//vector<Point> original_points = readVectorFromConsole(7);
	//printVector(original_points);
	
	ofstream vout;
    vout.open("mydata.txt");
    for(int i=0;i<size;i++)
    {
        vout<<"( "<<p.getxpoint(i)<<" , "<<p.getypoint(i)<<" )"<<endl;
    }
    vout.close();

    vector<Point> processed_points;

    Point instance;
    instance.x=x;
    instance.y=y;

    processed_points.push_back(instance);

	ifstream vin;
    vin.open("mydata.txt");
	return 0;
}