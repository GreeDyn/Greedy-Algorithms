// activity selection problem
// a is an array of resources
// s is an array of starting time
// f is an array of finishing time
#include <iostream>
#include <vector>
using namespace std;


void schedule(int* a, int* s, int* f, int n){
    vector<int> act;
    act.push_back(0);
    int ft=f[0];
    // s is starting time
    // f is finishing time
    // a is activity array sorted according to finish time

    // for each iteration, finish time of previous
    //resources is compared to starting time of current resource
   for(int i=1;i<n;i++){
        if(ft<=s[i]){
            act.push_back(i);
            ft=f[i];
        }
   }
   for(int i=0;i<act.size();i++){
        cout << a[act[i]] << endl;
   }

}
int main(){
    int a[]={1, 2, 3, 4, 5, 6};
    int s[]={1, 3, 0, 5, 8, 5};
    int f[]={2, 4, 6, 7, 9, 9};
    int n=sizeof(a)/sizeof(int);
    schedule(a, s, f, n);
    return 0;
}

// reference: CLRS - Introduction to algorithm
// geeksforgeeks
