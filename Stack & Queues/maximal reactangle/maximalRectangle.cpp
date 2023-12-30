// 1. Given a rows x cols binary matrix filled with 0's and 1's.
// 2. Find the largest rectangle containing only 1's and return its area.
//      e.g.1 arr = [1,0,1,0,0
//                   1,0,1,1,1
//                   1,1,1,1,1
//                   1,0,0,1,0]
//           op -> 6
// solution :- 
//      1.divide the problem in levels of rows.
//      2.each level represents the array of height of bars of histogram
//      3.if there are 5 rows in 2d matrix the there will be total 5 levels
//      5.process the level such that for ith level the ith row of 2d matrix acts as base
//      6.in the ith row if matrix[x][y] == 1 then add above colums element for yth column and if zero then keep it zero
//           e.g. 1st level = [1,0,1,0,0]
//                2nd level = [2,0,2,1,1]
//                3rd level = [3,1,3,2,2]
//                4th column =[4,0,0,3,0]
//      7.for each level perform max area histogram and get max area of all levels
              
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int largestAreaHistogram2(vector<int> arr){
     stack<int> s;
     arr.push_back(0);
     s.push(-1);
     int maxarea = INT_MIN;

     for(int i = 0;i<arr.size();i++){
          while(s.top() != -1 && arr[s.top()]>= arr[i]){
               int popedIndex = s.top();
               s.pop();
               int prevSmallerIndex = s.top();

               int area = (i-prevSmallerIndex-1)*arr[popedIndex];
               maxarea = max(maxarea , area);
               
          }
          s.push(i);
     }
     return maxarea;
}

int getMaximalRectangle(vector<vector<int> > arr){
     vector<int> processingArray(arr[0].size(),0);
     int maxRectangle = 0;
     for(int i = 0;i<arr.size();i++){
          for(int j=0;j<arr[i].size();j++){
               if(arr[i][j] ==1){
                    processingArray[j]++;
               }else{
                    processingArray[j]=0;
               }
          }
          maxRectangle = max(maxRectangle,largestAreaHistogram2(processingArray));
     }
     return maxRectangle;
}

int main(){
     vector<vector<int> > matrix1 = {{1,0,1,0,0},{1,0,1,1,1},{1,1,1,1,1},{1,0,0,1,0}};
     vector<vector<int> > matrix2 = {{1,0,1,0,0},{1,0,1,1,1}};
     cout<<getMaximalRectangle(matrix1)<<endl;
     cout<<getMaximalRectangle(matrix2)<<endl;
     return 0 ;
}