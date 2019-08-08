#include<iostream>
#include<string>
using namespace std;
int main(){
	float a,b,c,sum = 1.0;
	string str;
	int n;
	for(int i = 0; i < 3; i++){
		cin>>a>>b>>c;
		if(a >= b && a >= c){
			sum = sum * a;
			str = str + "W ";
		}else if(b >= a && b >= c){
			sum = sum * b;
			str = str + "T ";
		}else if(c >= a && c>= b){
			sum = sum * c;
			str = str + "L ";
		}
	}
	sum = (sum * 0.65 - 1) * 2;
	n = sum * 1000;
	if(n % 10 > 4){
		sum = sum + 0.01;
	}
	cout<<str;
	printf("%.2f", sum);
	return 0;
}