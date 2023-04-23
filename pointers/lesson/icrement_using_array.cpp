#include <iostream>
#include <cstring>
using namespace std;
int main(){
	string name[5]={"abebe", "kebede", "ayele", "kebedech", "abebech"};
	string*pname[5];
	for(int i=0;i<5;i++){
		pname[i]=&name[i];
	}
	
	for(int i=0;i<5;i++){
		cout<<*pname[0]++<<endl;
	}
    return 0;
}
