#include<iostream>
using namespace std;
void analyze_pointer(int *ptr){
    cout<<"Memory Location: "<<ptr<<endl;
    cout<<"Value Stored in Pointer: "<<*ptr<<endl;
}
int main(){

int a=242;
int *point=&a;
cout<<"     Using Stack Allocation: "<<endl;
analyze_pointer(point);

int *b= new int;
*b=542;
cout<<"     Using Heap Allocation: "<<endl;
analyze_pointer(b);

delete b;
b= nullptr;
return 0;
}