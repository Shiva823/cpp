#include<iostream>
using namespace std;
float add(float a,float b);
float sub(float a,float b);
float mul(float a, float b);
float dvd(float a,float b);
int main(){
    float p,q;
    int ch;
    cout<<"enter any two numbers";
    cin>>p>>q;
    cout<<"enter your choice 1:add  2:subtract  3:multiply  4:divide";
    cin>>ch;
    switch(ch){
        case 1 :
                
                cout<<"the sum is "<<add(p,q);
                break;
        case 2 :
                
                cout<<"the subtraction  is"<<sub(p,q);
                break;
        case 3 :
                
                cout<<"the multiplication is "<<mul(p,q);
                break;
        case 4 :
                
                cout<<"the division is"<<dvd(p,q);
                break;
        default :
                cout<<"wrong choice";
    }
        return 0;
    

    }
       float add(float a,float b){
            return a+b;
        }

        float sub(float a, float b){
            return a-b;
        }
        
        float mul(float a,float b){
            return a*b;
        }

        float dvd(float a ,float b){
            return a/b;
        }
