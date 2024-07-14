#include<bits/stdc++.h>
using namespace std;

class TwoStack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
    //Conatructor
    TwoStack(int size){
        this->size = size;
        top1 = -1;
        top2 = size;
        arr = new int[size];
    }
    void push1(int num){
        if(top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
        else{
            cout<<"Overflow "<<endl;
        }
    }
    void push2(int num){
        if(top2 - top1 > 1){
            top2--;
            arr[top2] = num;
        }
        else{
            cout<<"Overflow "<<endl;
        }
    }
    int pop1(){
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }

    //we can also write pop this way
    // void pop2(){
    //     if(top2 < size){
    //         top2++;
    //     }
    //     else{
    //         cout<<"Stack is empty"<<endl;
    //     }
    // }


    int peak1(){
        if(top1>=0){
            return arr[top1];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    int peak2(){
        if(top2 < size){
            return arr[top2];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top1 == -1){
            return true;
        }
        else{
            return false;
        }
    }

    bool isEmpty2(){
        if(top1 == size){
            return true;
        }
        else{
            return false;
        }
    }
};

int main(){
    TwoStack st(5);

    st.push1(10);
    st.push1(20);
    st.push2(30);
    st.push2(40);
    st.push2(50);
    // st.push2(60);

    cout<<st.peak1()<<endl;
    cout<<st.peak2()<<endl;

    cout<<st.pop1()<<endl;
    cout<<st.peak1()<<endl;

    cout<<st.pop1()<<endl;
    cout<<st.peak1()<<endl;

    cout<<st.pop2()<<endl;
    cout<<st.peak2()<<endl;

    cout<<st.pop2()<<endl;
    cout<<st.peak2()<<endl;

    if(st.isEmpty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }

    if(st.isEmpty2()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }

    return 0;
}