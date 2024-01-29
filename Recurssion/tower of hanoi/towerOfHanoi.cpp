// Tower of Hanoi is a mathematical puzzle where we have three rods (A, B, and C) and N disks. Initially, 
// all the disks are stacked in decreasing value of diameter i.e., the smallest disk is placed on the top and 
// they are on rod A. The objective of the puzzle is to move the entire stack to another rod (here considered C), 
// obeying the following simple rules: 

// 1.Only one disk can be moved at a time.
// 2.Each move consists of taking the upper disk from one of the stacks and placing it on top of another stack i.e. a disk can only be moved if it is the uppermost disk on a stack.
// 3.No disk may be placed on top of a smaller disk.

#include<iostream>
using namespace std;
void hanoi(int n ,char src , char dest, char helper){
     if (n == 0 ){
          return;
     }
    
     hanoi(n-1 ,src,helper,dest);
     cout<<"Disk "<<n<<" moved from "<<src<<" to "<<dest<<endl;
     hanoi(n-1,helper,dest,src);
}

using namespace std;
int main(){
     int n = 3;
     hanoi(n ,'A','C','B');
     return 0;
}

// Disk 1 moved from A to C