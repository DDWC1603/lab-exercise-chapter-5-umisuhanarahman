//umi suhana binti abdul rahman
//a17dw2041
//complete the program below
//its a program to find the average value.

#include<iostream>
using namespace std;

double average(double x,double y)
{

    double result =(x+y)/2;
	return result;	/*return the average value of x and y*/

}

int main()
{
    double x=0.0;
	double y=0.0;

	cout<<"Enter first number"<<endl;
    cin>>x;
    
	cout<<"Enter second number"<<endl;
    cin>>y;
	
    cin.get();
    
	cout<<"Average is: "<<average(x,y)<<endl;

    return 0;
}

