// A. Oath of the Night's Watch
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;
int main()
{
    /*
    idea of solution 
    if any number > number+1    && number < number-1 
    counter++;
    
    i have a family if the person in a family have a [number] < [number + 1 ]&& [ number] > [number - 1]
    i can support this person   ===> counter++ ;
    
    2
    1 5
    =======
    0
    ======================
    In the first sample, Jon Snow cannot support steward with strength 1 
    because there is no steward with strength less than 1 and he cannot support steward with strength 5 
    because there is no steward with strength greater than 5.
    ====================================================
    3
    1 2 5
    =======
    1
    ======================
    In the second sample, Jon Snow can support steward with strength 2 
    because there are stewards with strength less than 2 and greater than 2.

    */

    long long size ;                    cin >> size ;         
    long long arr[size] ;
    for(int i = 0 ; i< size ; i++)
    {
       cin >> arr[i] ;
    }

    sort(arr , arr + size) ;

    long long counter = 0 ;

    for(int i = 1 ; i< size-1 ; i++)
    {
        if(arr[i] > arr[0] && arr[i] <arr[size-1])
        {
            counter++;
        }
    }

    cout<< counter << endl;
    
    return 0 ;
}