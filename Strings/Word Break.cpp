#include <bits/stdc++.h> //Adding main libraries
#include <vector> //Adding vector library
using namespace std; //Adding string and other iportant libraries

/*Declaring a boolean function named wordBreak*/

bool wordBreak(string s, vector<string> & wordDict){
    unordered_set<string> //unordered_set for fast lookup
    dict(wordDict.begin(),wordDict.end()); //unordered_set constructor call

    int n = s.length(); //storing the size of string in a varible

    /*dp[i] = true :: substring exist
    dp[i] = false :: substring does not exist*/

    vector<bool> dp(n+1,false);
    dp[0] = true; //Base condition

    /*Applying the loop to check for all the possible partitions of the string*/
    for(int i = 1; i<=n; i++){
        for(int j=0;j<i;j++){
            if (dp[j] && dict.find(s.substr(j,i-j)) != dict.end()){
                dp[i] = true;
                break;
            }
        }
    }

    return dp[n];
}

int main(){
    string s = "takeuforward"; //Store the word you want to break

    /*Initialize the words to break it in the form*/
    vector<string> wordDict = {"take","forward","you","u"};

    /*Calling the function using if-else conditional statement*/
    if(wordBreak(s, wordDict)){
        cout<<"true";
    } else{
        cout<<"false";
    }

    return 0;

}
