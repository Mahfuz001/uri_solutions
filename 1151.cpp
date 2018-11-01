#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << 0 << " " << 1 << " " << 1;
    int p1=1,p2=1;
    
    for(int i=3;i<n;i++){
        int temp = p1+p2;
        cout << " " << temp;
        p1 = p2;
        p2 = temp;
    }
    cout << endl;


    return 0;
}
