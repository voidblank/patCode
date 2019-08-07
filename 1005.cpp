#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cin>>str;
	int i,n=0;
	for(i=0;i<str.length();i++){
		n=n+str[i]-'0';
	}
	//cout<<"test n:"<<n<<endl;
	string s[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int a[10000];
	if(n==0){
		cout<<"zero"<<endl;
		return 0;
	}
	for(i=0;n!=0;i++){
		a[i]=n%10;
		n=n/10;
	}
	for(--i;i>=0;i--){
		cout<<s[a[i]];
		if(i!=0){
			cout<<" ";
		}
	}
	return 0;
}
