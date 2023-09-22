#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
long double doublefact(int x) {long double fact=1;for (int i=x;i>=1;i-=2) {fact*=i;} return fact;}
long double t(double x) {
	long double sum1=0,sum2=0;
	for (int i=0;i<=10;i++) {sum1+=double(pow(x,2*i+1))/double(doublefact(2*i+1));}
	for (int i=0;i<=10;i++) {sum2+=double(pow(x,2*i))/double(doublefact(2*i));}
	return sum1/sum2;}
int main() {
	double y; cin >>y;
	cout <<fixed<<setprecision(20)<<double(7*t(0.25)+2*t(1.0+y))/double(6-t(pow(y,2)-1.0))<<endl;
	return 0;}
