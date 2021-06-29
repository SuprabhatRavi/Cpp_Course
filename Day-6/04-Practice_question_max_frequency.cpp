#include<bits/stdc++.h>
using namespace std;
// Code to find the max frequency of a charcater from a...z
int main(){
    string s;
    cin >> s;
    
    int freq[26] = {0};

    for(int i=0;s[i]!='\0';i++){
        freq[s[i]-97]++;
    }

    int max_freq = freq[0];
    char x = 0;
    for(int i=0;i<26;i++){
        if(max_freq < freq[i]){
            max_freq = freq[i];
            x = i;
        }
    }
    x = x+97;
    cout << x << endl;
    return 0;
}