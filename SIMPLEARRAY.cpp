#include <iostream>
#include<vector>
#define mod 1000000007
#define vcc vector
using namespace std;
void printSubsequences(int arr[], int index,
                       vector<int> &subarr,int n)
{
    // Print the subsequence when reach
    // the leaf of recursion tree
    if (index == n)
    {
         for (auto it:subarr){
           cout << it << " ";
          
         }
      if(subarr.size()==0)
        cout<<"{}";
       
      cout<<endl;
      return;
 
         
    }
    else
    {
       //pick the current index into the subsequence.
        subarr.push_back(arr[index]);
       
 
         printSubsequences(arr, index + 1, subarr,n);
 
         
        subarr.pop_back();
       
      //not picking the element into the subsequence.
        printSubsequences(arr, index + 1, subarr,n);
    }
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[n];
        vcc<int> v;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        printSubsequences(arr, 0, v,n);
    }
    return 0;
}