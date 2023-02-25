// Time Complexity: O(|S|log|s|)
// Auxiliary Space: O(1)

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int find(string s,char c)
 {
     int len=s.length();
     for(int i=0;i<len;i++)
     if(s[i]==c)
     return i;
 }
long long fact(int n)
{
   if(n==0)
   return 1;
   return n*fact(n-1);
}

   long long findRank(string str) {
       string temp=str;
       sort(temp.begin(),temp.end());
       int length=str.length();
       long long ans=0;
       int pos;
       for(int i=0;i<length;i++)
       {
           pos=find(temp,str[i]);
           temp.erase(pos,1);
           ans+=pos*fact(length-(i+1));
       }
       return ans+1;
   }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        Solution obj;
        long long ans = obj.findRank(s);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends