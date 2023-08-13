#include<iostream>
#include<stack>
using namespace std;
class TwoStack{
	int *arr;
	int top1;
	int top2;
	int size;
	public:
	TwoStack(int s){
		this->size=s;
		top1=-1;
		top2=s;
		arr=new int[s];
		
	}
	//push on Stck1
	void push1(int num){
		//atleast a empty space present
		if(top2-top1>1){
			top1++;
			arr[top1]=num;
		}
		else{
			cout<<"stack is overflow"<<endl;
		}
	}
	
	//push in stack 2;
		void push2(int num){
			if(top2-top1>1){
				top2--;
				arr[top2]=num;
			}
			else{
				cout<<"stack overflow"<<endl;
			}
		}
		//pop
		int pop(){
			if(top1>=0){
				int ans=arr[top1];
				top1--;
				return ans;
			}
		else{
			return -1;
		}	
		}
		int pop2(){
			if(top2< size){
				int ans=arr[top1];
				top1--;
				return ans;
			}
			else{
				return -1;
			}
		}
	int peek1(){
 	if(top1>=0 && top1< size){
 		return arr[top1];
	 }
	 else{
	 	cout<<"stack is Empty"<<endl;
	 	return -1;
	 }
 }
 int peek2(){
 	if(top2>=0 && top2< size){
 		return arr[top2];
	 }
	 else{
	 	cout<<"stack is Empty"<<endl;
	 	return -1;
	 }
 }
};
int main(){
	TwoStack st(5);
	st.push1(22);
	st.push2(45);
	st.push1(67);
	cout<<st.peek1() <<endl;
	st.pop();
		cout<<st.peek2() <<endl;

//     st.peek();
//	
  //    cout<< st.pop() <<endl;
//	
//	st.isEmpty();
	
	return 0;
}

