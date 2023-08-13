//nearest smalller to left
#include<iostream>
#include<vector>
#include<stack>
using namespace std;


int main(){
	int arr[5]={4,5,2,10,8};
	vector<int>v;
	stack<int>s;
	
	for(int i=0; i<5; i++){
		if(s.empty()){
			v.push_back(-1);
		}
		else if(!s.empty() && s.top()<arr[i]){
				v.push_back(s.top());
			}
	  else if(!s.empty() && s.top()>=arr[i]){
			while(!s.empty() && s.top()>=arr[i]){
			
				s.pop();
			}
		if(s.empty()){
				v.push_back(-1);
			}
			else{
				v.push_back(s.top());
			}
		}
			s.push(arr[i]);

}



 for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
}
 return 0;
}

