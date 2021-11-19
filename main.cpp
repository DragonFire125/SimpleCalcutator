include<iostream>
using namespace std;

int main(){
	int first;
	int total = 0;
	do {
		cin >> first;
		total += first;
	} while (first != 0);
	 
	cout << total;
}
