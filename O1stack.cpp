/*
���һ��ջ��ʹ������O(1)��ʱ�临�Ӷ���ʵ��push,pop,max�Ĳ���
*/

#include<iostream>
#include<vector>

using namespace std;

#define N 9

class myStack{

	private:
		vector<int>v;//ʵ�ʵ�ջ 
		vector<int>maxStack;//���浱ǰ���ֵ��ջ,��ʵ�ʵ�ջͬ�� 
		int top = -1;//��¼��ǰ�ĸ��� 
		int max = 0;//��¼���ֵ 
		
	public:
		myStack(){
			
		}
		
	int pop(){
		//��ջ���� 
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
		//��ջ���� 
		top++;
		if(this->v.size() == 0 || this->max < n){
			this->max = n;
		}
		this->v.push_back(n);
		this->maxStack.push_back(this->max);
	}
	
	int getMax(){
		//��ȡ���ֵ 
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
