//格式为 k(多项式的项数) n1 a1 n2 a2...nk ak(实质上为a1*x^n1)
//第二行与第一行相同，最后输出项数，多项式的和，按照上述排列。
#include<iostream>
using namespace std;
int main(){
	float f[1001], temps;
	int i, k1, k2, temp, cnt = 0;
	for(i = 0; i < 1001; i++){
		f[i] = 0;
	}
	cin>>k1;
	for(i = 0; i < k1; i++){
		cin>>temp;
		cin>>temps;
		f[temp] += temps;
	}
	cin>>k2;
	for(i = 0; i < k2; i++){
		cin>>temp;
		cin>>temps;
		f[temp] += temps;
	}
	for(i = 1000; i >= 0; i--){
		if(f[i] != 0)
			cnt++;
	}
	cout<<cnt;
	for(i = 1000; i >= 0; i--){
		if(f[i] != 0.0){
			printf(" %d %.1f", i, f[i]);
		}
	}
	return 0;
}