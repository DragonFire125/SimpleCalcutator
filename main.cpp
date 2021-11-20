
#include<iostream>
#include <string>
using namespace std;

int main(){

	int first;
	int second;
	int total = 0;
	string type;
	cin >> type;
	if (type == "a")
	do {
		cin >> first;
		total += first;
	} while (first != 0); else if (type == "s"){
		
		cin >> first;
		cin >> second;
		total = first - second;
	} else {cout << "ERROR:UnkownType: a for add. s for sutract ctrl+c to exit";
	}
	
	 
	cout << total;
}