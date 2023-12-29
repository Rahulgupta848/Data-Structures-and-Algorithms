// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing the height of bars in a bar chart.
// 3. You are required to find and print the area of largest rectangle in the histogram.

// e.g.
// for the array [6 2 5 4 5 1 6] -> 12
// {3, 5, 1, 7, 5, 9} -> 15
                              

// solution:-
//      1.find index arry of next smaller elments 
//      2.find index arrya of prev smaller elements
//      3.make difference of ith index and mulipyy with bar height

#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> nextSmallerIndices(vector<int> bars){  
     stack<int> s;
     vector<int> ans (bars.size(),0);
     s.push(-1);
     for(int i = bars.size()-1 ;i>=0 ;i--){
          int currentBar = bars[i];
          while(s.top() != -1 &&  bars[s.top()] >= currentBar){
               s.pop();
          }
          if(s.top() == -1){
               ans[i] = bars.size();
          }else{
               ans[i] = s.top();
          }
          s.push(i);
     }
     return ans;
}


vector<int> prevSmallerIndices(vector<int> bars){
     stack<int> s;
     vector<int> ans (bars.size(),0);
     s.push(-1);
     for(int i = 0;i<bars.size();i++){
          int currentBar = bars[i];
          while(s.top() != -1 && bars[s.top()]>= currentBar){
               s.pop();
          }
          ans[i] = s.top();
          s.push(i);
     }
     return ans;
}


int largestAreaHistogram(vector<int> bars){
     int maxArea = 0;
     vector <int> nextIndices = nextSmallerIndices(bars);
     vector <int> prevIndices = prevSmallerIndices(bars);

     for(int i = 0;i<bars.size();i++){
          int height = bars[i];
          int width = nextIndices[i] - prevIndices[i] -1;
          maxArea = max(maxArea , height * width);
     }
     return maxArea;
}    

int main(){
     vector <int> bars1 = {6 ,2 ,5 ,4 ,5 ,1 ,6};
     vector <int> bars2 = {3, 5, 1, 7, 5, 9};
     vector <int> bars3 = {3};
     cout<<largestAreaHistogram(bars1)<<endl;
     cout<<largestAreaHistogram(bars2)<<endl;
     cout<<largestAreaHistogram(bars3)<<endl;
     return 0;
}