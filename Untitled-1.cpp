#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    int c;
    cout << "Enter first number :  ";
    cin >> a;
    cout << "Enter last number : ";
    cin >> b;
    c=0;
    while (a*a <= b*b){
    	c=(a*a)+c;
    	a++;
	}
	cout << c;
return 0;
}