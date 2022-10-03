#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<string> valid;   //? will store all the complete brackets strings 

    //NOTE:
    //  here open means: no. of opening brackets left for use (not the other way that no. of used opening brackets) 
    //  similarly close denotes no. of closing brackets left
    void generate(string &s, int open, int close){
        //://   Base Condition for Recursion   
        if(open==0 && close==0){
            valid.push_back(s);
            return;
        }
        if(open > 0){
            s.push_back('(');
            generate(s, open-1, close);
            s.pop_back(); //:// BackTracking Step 
        }
        if((close>0) && (open < close)){
            s.push_back(')');
            generate(s, open, close-1);
            s.pop_back();
        }
    }      
    
    vector<string> generateParenthesis(int n) {
        string s;
        generate(s, n, n);
        return valid;
    }
};

int main(){
    

    return 0;
}