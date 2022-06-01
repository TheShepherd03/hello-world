/* 
 * File:   main.cpp
 * Author: Sakhi
 *
 * Created on 23 May 2022, 01:55
 */

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

void change(const float& amount,int* counts);
int main() {
    float n=74.61;
    int arry[]={0,0,0,0,0,0,0,0,0,0,0};
    int *p= arry;
    cout<<p<<endl;
    change(n,p);
    
    for(int x=0;x<11;x++){
        cout<<"element = "<<x<<" "<<*(p++)<<endl;
    }
    
    
    return 0;
}

void change(const float& amount,int* counts){
    float tempAmount=amount;
    int whole=floor(tempAmount);
    float dec=tempAmount-whole;
    cout<<"whole = "<<whole<<endl;
    cout<<"dec = "<<dec<<endl;
    int count=0;
    while(dec!=0 && whole!=0){
    if(whole/50>=1){
        while(whole/50>=1){
        whole-=50;
        //cout<<"whole = "<<whole<<endl;
        count++;
        counts[10]+=count;count=0;}
    }else if(whole/20>=1){
        while(whole/20>=1){
        whole-=20;
        //cout<<"whole = "<<whole<<endl;
        count++;
        counts[9]+=count;count=0;}
    }else if(whole/10>=1){
        while(whole/10>=1){
        whole-=10;
        //cout<<"whole = "<<whole<<endl;
        count++;
        counts[8]+=count;count=0;}
    }else if(whole/5>=1){
        while(whole/5>=1){
        whole-=5;
        //cout<<"whole = "<<whole<<endl;
        count++;
        counts[7]+=count;count=0;}
    }else if(whole/2>=1){
        while(whole/2>=1){
        whole-=2;
        //cout<<"whole = "<<whole<<endl;
        count++;
        counts[6]+=count;count=0;}
    }else if(whole/1>=1){
        while(whole/1>=1){
        whole-=1;
        //cout<<"whole = "<<whole<<endl;
        count++;
        counts[5]+=count;count=0;}
    }
    
    if(!(dec-0.5<0)){
        while(!(dec-0.5<0)){
        dec-=0.5;
        //cout<<"dec = "<<dec<<endl;
        count++;
        counts[4]+=count;count=0;}
    }else if(!(dec-0.2<0)){
        while(!(dec-0.2<0)){
        dec-=0.2;
        //cout<<"dec = "<<dec<<endl;
        count++;
        counts[3]+=count;count=0;}
    }else if(!(dec-0.1<0)){
        while(!(dec-0.1<0)){
        dec-=0.1;
        //cout<<"dec = "<<dec<<endl;
        count++;
        counts[2]+=count;count=0;}
    }else if(!(dec-0.05<0)){
        while(!(dec-0.05<0)){
        dec-=0.05;
        //cout<<"dec = "<<dec<<endl;
        count++;
        counts[1]+=count;count=0;}
    }else if(!(dec-0.01<0)){
        while(!(dec-0.01<0)){
        dec-=0.01;
        //cout<<"dec = "<<dec<<endl;
        count++;
        counts[0]+=count;count=0;}
    }}
    
}
