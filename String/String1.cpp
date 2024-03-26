#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string : ";
    getline(cin,str);
    cout<<"Your srting is : ";
    cout<<str<<endl;

    cout<<"Length of the string is : ";
    cout<<str.length()<<endl;

    cout<<"Checking string is empty or  not : ";
    cout<<str.empty()<<endl;

    cout<<"Entering the new character in the string : ";
    str.push_back('A');
    cout<<str<<endl;

    cout<<"Removing the character from the string : ";
    str.pop_back();
    cout<<str<<endl;

    cout<<"substring of the string is : ";
    cout<<str.substr(0,2)<<endl;    

    string a="Ankit";
    string b ="Ankit";
    if(a.compare(b)==0){
        cout<<"a nd b is equal"<<endl;
    }
    else{
        cout<<"Not equal"<<endl;
    }

    string sentence = "Hello my name is ankit kumar";
    cout<<"Finding the string : "<<endl;
    string target = "ankit";
    cout<<sentence.find("ankit")<<endl;
    // cout<<sentence.find(target);
    if(sentence.find(target)==string::npos){    //Here npos mean string not found
        cout<<"Not found"<<endl;
    }
    else{
        cout<<"found"<<endl;
    }

    cout<<"Replacing the string "<<endl;
    string message1 = "this is my message ";
    string message2 = "ankit";
    message1.replace(0,4,message2); //0->starting index, 4->how many char remove, message2 is new word to replace
    cout<<message1<<endl;

    cout<<"Erasing a string : "<<endl;
    string st = "this is an example sentence";
    cout<<st.erase(10,8)<<endl;
    st.erase(st.begin()+9);
    cout<<st<<endl;
    st.erase(st.begin()+5,st.end()-9);
    cout<<st<<endl;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     char ch = 'Ankit';
//     string str = "Ankit";
//     ch[2]='/0';
//     ch[4] ='/0';
    
//     return 0;
// }