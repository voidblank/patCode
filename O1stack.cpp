/*
设计一个栈，使它们在O(1)的时间复杂度内实现push,pop,max的操作
*/

#include<iostream>
#include<vector>

using namespace std;

#define N 9

class myStack{

	private:
		vector<int>v;//实际的栈 
		vector<int>maxStack;//储存当前最大值的栈,和实际的栈同步 
		int top = -1;//记录当前的个数 
		int max = 0;//记录最大值 
		
	public:
		myStack(){
			
		}
		
	int pop(){
		//出栈方法 
		if(this->v.size() == 0){
			cout<<"null stack"<<endl;
			return -1;
		}else{
			this->maxStack.pop_back();
			int x = this->v[top];
			this->top--;
			this->v.pop_back();
			return x;
		}
	}
	
	void push(int n){
		//入栈方法 
		top++;
		if(this->v.size() == 0 || this->max < n){
			this->max = n;
		}
		this->v.push_back(n);
		this->maxStack.push_back(this->max);
	}
	
	int getMax(){
		//获取最大值 
		if(this->v.size() == 0){
			cout<<"stack with no entry!"<<endl;
			return -1;
		}else{
			return this->maxStack[top];
		}
	}
};	

int main(){
	
	myStack ms;
	ms.pop();
	ms.getMax();
	int x[] = {1,10,6,13,7,8,25,11,19};
	for(int i = 0; i < N; i++){
		ms.push(x[i]);
		cout<<"push "<<x[i]<<" and now max is : "<<ms.getMax()<<endl;
	}
	
	for(int i = 0; i < 5; i++){
		cout<<"pop "<<ms.pop()<<" and now max is : "<<ms.getMax()<<endl;
	}
	
	return 0;
}
