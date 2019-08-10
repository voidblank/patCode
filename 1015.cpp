#include<iostream>
#include<string>
using namespace std;
int prime[1000];
void pdfs(int radix, int a);
int cnt = 0;
int radix_a(int b);
bool cmp(int a);
int main(){
	string as;
	int a = 0, b, c = 0, i;
	for(i = 0; i < 1000; i++){
		prime[i] = 0;
	}
	while(1){
		c = 0;
		cin>>as;
		if(as[0] == '-'){
			return 0;
		}else{
			cin>>b;
			a = 0;
			for(i = 0; i < as.length(); i++){
				a = a * 10 + (as[i] - '0');
			}
		}
		if(b == 10){
			for(i = as.length() - 1; i >= 0; i--){
				c = c * 10 + (as[i] - '0');
			}
		}else{
			pdfs(b, a);
			c = radix_a(b);
			
		}
		if(cmp(c)){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
}
void pdfs(int radix, int a){//记录A的radix进制之后的数 
	int i = 0, n = a;
	while(n != 0){
		prime[i++] = n % radix;
		n = n / radix;
	} 
	cnt = i - 1;
	return ;
}
int radix_a(int b){//将A反计算 
	int n = 0;
	for(int i = 0; i <= cnt; i++){
		n = n * b + prime[i];
	}
	return n;
}
bool cmp(int a){//判断是否为素数 
	int i;
	if(a == 0){
		return false;
	}
	for(i = (a / 2) + 1; i > 1; i--){
		if(a % i == 0){
			return false;
		}
	}
	return true;
}
