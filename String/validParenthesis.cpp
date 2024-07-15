// Valid parenthesis problem
// eg. "({[]})" = > it is valid
//  "[[]" => it is not valid

#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string expression){
    stack<char>s;
    for(int i=0;i<expression.length();i++){
        char ch = expression[i];
        //If opening parenthesis than push
        if(ch=='[' || ch=='{' || ch=='('){
            s.push(ch);
        }
        else{
            //If not opening than closing if closing then pop
            if(!s.empty()){
                char top = s.top();
                if( (ch=='}' && top=='{' )  ||
                    (ch==')' && top=='(' ) ||
                    (ch==']' && top=='[' )){
                    s.pop();
                 }
                 else{
                    return false;
                 }
            }
            else{
                return false;
            }
        }
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string expression = "{[()]}";
    if(isValidParenthesis(expression)){
        cout<<"Balanced "<<endl;
    }
    else{
        cout<<"Not balanced "<<endl;
    }
    return 0;
}   