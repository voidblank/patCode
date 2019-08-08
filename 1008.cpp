#include<iostream>
using namespace std;
int main(){
	int n,a,time = 0,nowf = 0;
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>a;
		if(a > nowf){
			time = time + (a - nowf) * 6 + 5;
		}else{
			time = time + (nowf - a) * 4 + 5;
		}
		nowf = a;
	}
	cout<<time<<endl;
	return 0;
}
