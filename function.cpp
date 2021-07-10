#include<iostream>
using namespace std;

int add(int x,int y);

int main(){
    int a= 10;
    int b = 20;
    int sum = add(a,b);
    cout<<"Addition gives:"<<sum<<endl;

}

int add(int x, int y){
    int z = x+y;
    return z;
}
