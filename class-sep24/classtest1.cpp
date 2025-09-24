#include <iostream>
using namespace std;
/* Q1. Create a C++ class named my string to perform the following operations on a string:
(a) capitalize(): Returns the string in capital letters.
(b) to lower(): Returns the string in lowercase letters.
(c) search letter(char ch): Searches for a given character ch and returns whether
it exists.
(d) find index(char ch): Returns the index of the first occurrence of the character
ch (if present).
(e) update index(int pos, char ch): Updates the character at position pos with
ch.
(f) add string(string s): Appends another string s to the existing string.
(g) delete char(int pos): Deletes the character at position pos.
Write a complete program with a main() function to demonstrate all the above operations. */
class stringfn{
    private:
    int n;
    string str1;
    public:
    void capatalise(string &str){
        for(int i=0;i<n;i++){
            if(str[i]>='a' && str[i]<='z'){
                str[i]=str[i]-32;
            }
        }
        cout<<"string in capital letters is :"<<str<<endl;
    }
    void lower(string &str ){
        for(int i=0;i<n;i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i]=str[i]+32;
            }
        }
    }
    int search_letter(char ch){
        for(int i=0;i<n;i++){
            if(str1[i]==ch){
                cout<<"character found"<<endl;
                return 1;
            }
        }
        cout<<"character not found"<<endl;
        return -1;

    }
    int find_index(char ch){
        for(int i=0;i<n;i++){
            if(str1[i]==ch){
                cout<<"index found"<<endl;
                return i;
            }
        }
        cout<<"index not found"<<endl;
        return -1;
        
    }
    void update_index(int pos,char ch){
        if(pos>=0 && pos<n){
            str1[pos]=ch;
            cout<<"character updated"<<endl;
        }
        else{
            cout<<"invalid position"<<endl;
        }
    }
    void add_string(string s){
        str1=str1+s;
        cout<<"string after appending is :"<<str1<<endl;
    }
    string delete_char(int pos){
        string str2;
        if(pos>=0 && pos<n){
            for(int i=0;i<n;i++){
                if(i!=pos){
                    str2+=str1[i];
                }
            }
            return str2;
        }
        else{
            cout<<"invalid position"<<endl;
    }
}


};