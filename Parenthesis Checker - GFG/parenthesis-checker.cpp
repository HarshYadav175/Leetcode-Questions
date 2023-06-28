//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        int ans;
        stack<int> s;
       for(int i=0; i<x.size(); i++){
           if(x[i]=='(' or x[i]=='{' or x[i]=='[' ){
               s.push(x[i]);
           }
           
           else if(x[i]==')'){
               if(!s.empty() and s.top()=='('){
                   s.pop();
               }
               else{
                   ans=false;
                   break;
               }
           }
           else if(x[i]=='}'){
               if(!s.empty() and s.top()=='{'){
                   s.pop();
               }
               else{
                   ans=false;
                   break;
               }
           }
           else if(x[i]==']'){
               if(!s.empty() and s.top()=='['){
                   s.pop();
               }
               else{
                   ans=false;
                   break;
               }
           }
       }
       
       if(!s.empty()){
           return false;
       }
       
       return ans;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends