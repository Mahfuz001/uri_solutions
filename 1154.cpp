#include<iostream>
using namespace std;

int main(){
    int sum=0,x=0;
    double digCount=0;
    while(1){
        cin>>x;
        if(x >= 0){
            sum+=x;
            digCount++;
        }else{
            break;
        }
    }
    double avg = sum/digCount;
    printf("%.2lf\n",avg);
    return 0;
}

