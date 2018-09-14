//
// Created by Mahfuz on 14/9/18.
//
#include <iostream>

using namespace std;

int main(){

    int n;
    //freopen("uri_inputs.txt","r",stdin);
    do{
        cin >> n;

        for(int i = 1; i <= n; i++)
            if (n != i)
                cout << i << " ";
            else
                cout << i << endl;
    }while (n != 0);


    return 0;
}