#include <iostream>
#include<string.h>
using namespace std;

 double sqrt(double n)
{
	double x = n;
    double y = 1;
	double e = 0.000001;	

		while (x - y > e) 
	{
	x= (x + y) / 2;
    y = n/x;
    }

	return x;

}

 int main() 
{
double arr[] = {4, 9, 16, 25, 36};
int n = 5;

for(int i = 0; i < n; i++) 
{
cout<<"Square root of"<<arr[i]<<" is "<<sqrt(arr[i])<<endl;
}

return 0;
}
