// Time Complexity
// The rate at which time taken increases with respect to input size
// In terms of BIGO notation->O()
// Always in worst case scenario
// avoid constant
// avoid lower value
//
// Space Complexity
//Auxillary space(space taken by code) +input space(space taken by input variable)
//Should not change input(Tamper the input)
//cvc
#include <iostream>
using namespace std;

// main() is where program execution begins.
void func1(int n){
      for(int i=0;i<n;i++){
         for (int j = 0; j<(n-1+i); j++)
         {   
            cout<<" ";
         }
         for (int j = 0; j<2*i+1; j++)
         {   
            cout<<"*";
         } 
         for (int j = 0; j<(n-i+1); j++)
         {   
            cout<<" ";
         }
         
      }
}
int main() {
   // cout << "Hello World"; // prints Hello World
   int n=5,t=1;
   cin>>t;
   while(t--){
      cin>>n;
      func1(n);
   }
   return 0;
}