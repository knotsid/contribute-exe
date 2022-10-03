#include<bits/stdc++.h>
#include<string.h>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int res=0, i=0;
        while(s[i]=='M'){
            res+=1000;
            i++;
        }      
        while(s[i]=='D'){
            res+=500;
            i++;
        }      
        while(s[i]=='C'){
            res+=100;
            i++;
        }      
        while(s[i]=='L'){
            res+=50;
            i++;
        }      
        while(s[i]=='X'){
            res+=10;
            i++;
        }      
        if(s[i]!='\0'){
            string sub=s.substr(i);
            if(sub=="I"){ res+=1; }
            else if(sub=="II"){ res+=2; }
            else if(sub=="III"){ res+=3; }
            else if(sub=="IV"){ res+=4; }
            else if(sub=="V"){ res+=5; }
            else if(sub=="VI"){ res+=6; }
            else if(sub=="VII"){ res+=7; }
            else if(sub=="VIII"){ res+=8; }
            else if(sub=="IX"){ res+=9; }
        }
        return res;
    }
};

int main(){
    

    return 0;
}