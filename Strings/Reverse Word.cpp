#include <iostream> //for I/O
#include <sstream> //for coverting string into word
#include <vector> //for storing word in sperate dynamic format
using namespace std; //c++ library

string reverseWords(string s){
    stringstream ss(s); //convert string into steam for easy word extarction
    string word; //stores extracted word
    vector<string> words; //store all words

    while(ss>>word){ //read all words seprated by spaces
        words.push_back(word); //adding word at the end
    }

    string result; //stores the final reverse word
    for(int i = words.size()-1; i>=0;--i){ //starts at last word until index 0
        result += words[i]; //stores the word in reverse order
        if(i!=0){
            result += " "; //add space after each word except for thr last word
        }
    }
    return result;

}

int main(){
    string s;
    getline(cin,s); // reads the entire line

    cout<<reverseWords(s);
    return 0;

}

