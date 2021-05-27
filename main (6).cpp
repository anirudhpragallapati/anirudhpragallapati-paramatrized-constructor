#include<iostream>
using namespace std;
class customer
{
	int cusid;
	int recharge;
	int amount;
	public:
		customer(int x,int y,int z)
		{
			cusid=x;
			recharge=y;
			amount=z;
		}
		void display()
		{
			cout<<"the cusid of customer is"<<cusid<<endl;
			cout<<"the recharge of customer is"<<recharge<<endl;
			cout<<"the amount   of customer is"<<amount<<endl;
		}
}; 
int main()
{
	customer c1(123,34,3000);
	c1.display();
	return 0;
}