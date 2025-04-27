// A. Way Too Long Words 
#include <iostream>
using namespace std;
int main()
{
	int size;
	cin>> size ;
	for(int i=0; i<size ;i++){
		string word ;             // salahhassan      11       s9n
		cin>>word;
	
		if(word.length() >10){
			cout<< word[0]<<word.length()-2 <<word[word.length() -1]<<endl; 
		}
		else{
			cout << word<<endl;
		}
	}

    return 0;
}