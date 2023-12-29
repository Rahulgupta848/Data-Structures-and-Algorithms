// 1. You are given a number n, representing the size of array a.
// 2. You are given n numbers, representing the height of bars in a bar chart.
// 3. You are required to find and print the area of largest rectangle in the histogram.

// Challenge. Could u solve it in one iteration.
// Note. This question is same as Largest Area Histogram just the constrains are higher.

// solution :- 1.previously we use to find next smaller height index array and previous smallest hieght index for a bar.
//             2.Here we only find previous smallest height index.
//             3.because in order to find previous smaller for a bar and if we need to pop the element from stack which means for that popped
//                element current bar is next smaller height bar so no need to find next smaller height seperately
//             4.for a popped element the top most element in stack is the previos smallest height so using it we can find area of histogram

//           handeling base case :-
//                1.algorithm avoids the processing of last element and also some elements may remain unprocessed in stack,
//                  to avoid it add another element in orignal array of bar height 0 ;
// e.g.
// for the array [6 2 5 4 5 1 6] -> 12
// {3, 5, 1, 7, 5, 9} -> 15

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

int main(){
     vector <int> bars1 = {6 ,2 ,5 ,4 ,5 ,1 ,6};
     vector <int> bars2 = {3, 5, 1, 7, 5, 9};
     vector <int> bars3 = {3};

     cout<<largestAreaHistogram2(bars1)<<endl;
     cout<<largestAreaHistogram2(bars2)<<endl;
     cout<<largestAreaHistogram2(bars3)<<endl;
     return 0;
}