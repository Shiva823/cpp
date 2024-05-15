#include<iostream>
using namespace std;
float add(int a,int b);
float sub(int a, int b);
float mul(int a, int b);
float dvd(int a,int b);
int main(){
    int p,q,ch;
    cout<<"enter any two numbers";
    cin>>p>>q;
    cout<<"enter your choice 1:add  2:subtract  3:multiply  4:divide";
    cin>>ch;
    switch(ch){
        case 1 :
                add(p,q);
                cout<<"the sum is "<<add(p,q);
                break;
        case 2 :
                sub(p,q);
                cout<<"the subtraction  is"<<sub(p,q);
                break;
        case 3 :
                mul(p,q);
                cout<<"the multiplication is "<<mul(p,q);
                break;
        case 4 :
                dvd(p,q);
                cout<<"the division is"<<dvd(p,q);
                break;
        default :
                cout<<"wrong choice";
    }
        return 0;
    

    }
       float add(int a,int b){
            return a+b;
        }

        float sub(int a, int b){
            return a-b;
        }
        
        float mul(int a,int b){
            return a*b;
        }

        float dvd(int a ,int b){
            return a/b;
        }
