#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int speed;

	string spd;
	
	cout<<"Enter your speed: "<<endl;
	cin>> speed;

	if(speed<80 && speed>0)
	spd =" in a normal speed";
	else
	spd =" over speeding";
	cout<<"you are"<<spd<<endl;
return 0;
}
