#include <bits/stdc++.h>
using namespace std;


// Method 1:
// int main() {
//     char name[100];
//     cout<<"Enter your name: ";
//     cin.getline(name,100);
//     cout<<"Your name is: "<<name<<endl;
//     cout<<"Length of the string is: "<<strlen(name)<<endl; // strlen() is a function which is used to find the length of the string.
//     return 0;
// }



// Method 2:
int getLength(char name[]){
    int i=0;
    int length=0;
    while(name[i] !='\0'){
        i++;
        length++;
    }
    return length;
}

int main(){
    char name[100];
    cout<<"Enter your name: ";
    cin.getline(name,100);
    cout<<"Length of thr name is : "<<getLength(name)<<endl;
}