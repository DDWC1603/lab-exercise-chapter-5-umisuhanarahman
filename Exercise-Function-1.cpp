//umi suhana binti abdul rahman
//a17dw2041
#include <iostream>
using namespace std;

char ans;

int masuk_tak()
{
		
	while(ans!='y' && ans!='y')
	{
	cin>>ans;
	if(ans!='y' && ans!='y')
	cout<<endl<<"cakap lah bebetul, try again: "<<endl;
	}
}

int main()
{	

	cout<<"Dia shoot masuk tak? (answer y-yes atau n-tidak)"<<endl;
	ans= ' ';
	
	masuk_tak();
	
	if(ans=='n')
	{
		masuk_tak();
		cout<<endl<<"the fudge?!";
		
	}
	cout<<endl<<"chantek!"<<endl;


}
