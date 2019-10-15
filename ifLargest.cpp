#include <iostream>
using namespace std;

int main(){
	
	int x, y, z;
	
	cout << "\nEnter three numbers: ";
	cin >> x >> y >> z;
	
	if(x > y){
		if(x > z){
			cout << x <<" is the largest";
		} else if(x == y || x == z){
			cout << "There are two numbers which are equal and larger among them";
		}
		else{
			cout << z << " is the largest";
		}
	} else if(x == y || x == z || y == z){
		if(x == y && x == z && y == z){
			cout << "All numbers are equal";
		} else{
			cout << "There are two numbers which are equal and larger among them";
		}
	} else {
		if(y > z){
			cout << y << " is the largest";
		} else{
			cout << z << " is the largest";
		}
	}
	
	return 0;
	
}
