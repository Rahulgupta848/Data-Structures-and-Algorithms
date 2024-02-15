#include<iostream>
#include<vector>
using namespace std;

vector<string> getSubSequence(string str){
	if(str.size() == 0){
		return vector<string>{""};
	}
     char ch = str[0];
     vector<string> tans = getSubSequence(str.substr(1,str.size()-1));
     vector<string> fans;
     for(int i=0;i<tans.size();i++){
          fans.push_back(ch+tans[i]);
          fans.push_back(tans[i]);
     }

     return fans;
}

void printArr(vector<string> arr){
	for(int i=0;i<arr.size();i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main(){
     string str ="abc";
     vector<string> arr = getSubSequence(str);
     printArr(arr);
     
     return 0;
}
