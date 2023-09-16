#include <iostream>
#include<algorithm>
using namespace std;

char maxOccuring(string s){ 
    int count[26] = {0};
    int index = 0;
    for(int i=0; i<s.length(); i++){
        index = s[i]-'a';
        count[index]++;
    }
    int maxFreq = -1;
    char maxFreqChar = 0;
    for(int i=0; i<26; i++){
        if(count[i]>maxFreq){
            maxFreq = count[i];
            maxFreqChar = i+'a';
        }
    }
    
    return maxFreqChar;
}

int main()
{
    string s;
    cin>>s;
    
    cout<<maxOccuring(s);

    return 0;
}
