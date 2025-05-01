// A. Beautiful Matrix
#include<iostream>
#include<string>
#include <cmath>
#include<algorithm>
using namespace std; 

int main()
{
	int arr[5][5] ;
	for(int i = 1 ;i <= 5 ; i++)               // i ===> row 
	{
		for(int j = 1 ; j <= 5 ; j++)         // j ===> column 
		{
			int num ;
			cin >> num ;
			if(num == 1)
			{
				cout<< (abs(i - 3) + abs(j - 3) )<<endl;
				return 0;
			} 
		}
	}




	return 0;
}