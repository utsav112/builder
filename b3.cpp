#include<iostream>

using namespace std;

int main()
{
	
	char n;
	
	cout<<"enter your value : ";
	cin>>n;
	if(n== 'a'|| n=='e'|| n=='i'||n=='o'||n=='u' || n== 'A'|| n=='E'|| n=='I'||n=='O'||n=='U')
	{
		cout<<"VOWEL";
		
	}
	else if(n>='0' && n<='9')
	{
		cout<<"NEITHER VOWEL NOR CONSONANT";
		
	}
	
	else
{
		cout<<"CONSONANT";
		
}
	return 0;
}
