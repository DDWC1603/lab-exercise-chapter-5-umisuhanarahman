//umi suhana binti abdul rahman
//a17dw2041
//finish up this program.thanks.

#include <iostream>
#include <iomanip>
using namespace std;

void ombakOmbak (int , int, int , int);
void OmbakKeluar();

int i;

void ombakOmbak(int repeat=3,int height=5,int up=2,int down=2)
{
	while(repeat>0)
    {

		for(i=1; i<=up; i++)
		{
		cout<<setw(height)<<right<<"+"<<endl;}

		for(i=1; i<=down; i++)
		{
		cout<<"+"<<endl;
		}
		repeat --;
	}
}

void OmbakKeluar()
{
	cout<<"\nwaveDemo\n";
	ombakOmbak();
}

int main(void)
{
	OmbakKeluar();
}
