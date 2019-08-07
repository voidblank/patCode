#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct people{
	string name;
	int login_time[6];
	int logout_time[6];
};
bool pd1(people p1,people p2);
bool pd2(people p1,people p2);
void onesonly();
int main(){
	int n,i,k,t;
	cin>>n;
	people p[n];
	string str;
	char c;
	c=getchar();
	if(n==1){
		onesonly();
		return 0;
	}
	for(i=0;i<n;i++){
		t=0;
		getline(cin,str);
		for(k=0;k<str.length();k++){
			if(str[k]==' '){
				break;
			}
			else p[i].name=p[i].name+str[k];
		}
		k++;
		for(;k<str.length();k++){
			if(str[k]==' '){
				t=0;
				break;
			}
			else if(str[k]==':'){
				continue;
			}
			else {
				p[i].login_time[t++]=str[k]-'0';
			}
		}
		k++;
		for(;k<str.length();k++){
			if(str[k]==':'){
				continue;
			}
			else{
				p[i].logout_time[t++]=str[k]-'0';
			}
		}
	}
	sort(p,p+n,pd1);
	cout<<p[0].name<<" ";
	sort(p,p+n,pd2);
	cout<<p[0].name<<endl;
	return 0;
}
bool pd1(people p1,people p2){
	for(int i=0;i<6;i++){
		if(p1.login_time[i]<p2.login_time[i]){
			return true;
		}
		else if(p1.login_time[i]>p2.login_time[i]){
			return false;
		}
	}
	return false;
}
bool pd2(people p1,people p2){
	for(int i=0;i<6;i++){
		if(p1.logout_time[i]>p2.logout_time[i]){
			return true;
		}
		else if(p1.logout_time[i]<p2.logout_time[i]){
			return false;
		}
	}
	return false;
}
void onesonly(){
	people p;
	string ss;
	cin>>p.name;
	cin>>ss>>ss;
	cout<<p.name<<" "<<p.name;
}
