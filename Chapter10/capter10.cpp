#include "std_lib_facilities.h";
#include <fstream>

struct Point
{
	int x;
	int y;
};

class pontok
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

};

int main()
{
	cout << "Please write 7 x,y pairs" << endl;
	vector<Point> original_points = readVectorFromConsole(7);
	printVector(original_points);
	
	ofstream vout;
    vout.open("mydata.txt");
    for(int i=0;i<original_points.size();i++)
    {
        vout<<"( "<<p.getpontx(i)<<" , "<<p.getponty(i)<<" )"<<endl;
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