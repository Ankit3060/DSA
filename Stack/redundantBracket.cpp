// Valid parenthesis problem
// eg. "((a+b))" = > it is redundant
//  "(a+b)" => it is not redundant

#include<bits/stdc++.h>
using namespace std;

bool isRedundant(string &expression){
    stack<char>s;
    for(int i=0;i<expression.length();i++){
        char ch = expression[i];
        //If opening parenthesis than push
        if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            s.push(ch);
        }
        else{
            //If not opening than closing if closing then pop
            if(ch==')'){
                bool isredunt = true;
                while(s.top() != '('){
                    char ch = s.top();
                    if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
                        isredunt = false;
                    }
                    s.pop();
                }
                if(isredunt == true){
                    return true;
                }
                s.pop();
            }
            
        }
        
    }
    return false;
}

int main(){
    string expression = "((a+b))";
    if(isRedundant(expression)){
        cout<<"Redundant "<<endl;
    }
    else{
        cout<<"Not Redundant "<<endl;
    }
    return 0;
}   