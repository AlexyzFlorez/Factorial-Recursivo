#include<iostream>

using namespace std;

int Factorial(int n)
{
	if(n==0)
	{
		n=1;
	}
	else
	{
		n=n*Factorial(n-1);
	}
	return n;
}
main()
{
	int num;
	
	cout<<"Ingresa Un Numero"<<endl;
	cin>>num;
	
	cout<<"El Factorial es:"<<Factorial(num)<<endl;
	system("pause");
	return 0;
}
