// C++ program for binary racer timer_created by Md Sagar Khan
#include <iostream>
using namespace std;

int binaryToDecimal(int n)
{
	int num = n;
	int dec_value = 0;

	
	int base = 1;

	int temp = num;
	while (temp) {
		int last_digit = temp % 10;
		temp = temp / 10;

		dec_value += last_digit * base;

		base = base * 2;
	}

	return dec_value;
}

int main()
{
	int num,laps,i;
	int sum=0;
	int count=0;
	cout<<"Enter Number of Laps "<<endl;
	cin>>laps;
	for(i=1;i<=laps;i++)
	{
	    cout<<"Enter Lap "<<i<<" Duration in Binary Number"<<endl;
	    cin>>num;
	    cout<<"Lap "<<i<<" duration in seconds is  = "<<binaryToDecimal(num)<<endl;
	    cout<<"Previous Sum = "<<sum<<endl;
	    sum+=binaryToDecimal(num);
	    cout<<"Current Sum = "<<sum<<endl;
	    count++;
	}
	cout<<"Total Sum = "<<sum<<endl;
  int seconds;
  seconds=sum;
  int hr=(int)(seconds/3600);
  int min=((int)(seconds/60))%60;
  int sec=(int)(seconds%60);
 cout<<"Total Time Taken Over "<<count<<" Laps is "<<hr<<" hours, "<<min<<" minutes and "<<sec<< " seconds"<<endl;
  cout<<"Hence hh:mm:ss = "<<hr<<":"<<min<<":"<<sec<<endl;
	
return 0;
}
