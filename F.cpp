#include<iostream>
using namespace std;

int main(){
    int k[8]={2,7,1,1,0,4,0,5};
    int l[11]={75,39,109,112,118,105,32,81,84,95,34};

    for(int index=0;index<11;index++){
        cout << char(l[index]-(k[index % 8]));
    }
    return 0;
}
