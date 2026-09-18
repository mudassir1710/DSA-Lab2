#include <iostream>
using namespace std;
int main()
{
    string input;
    cout << "Enter the String input: " ;
    getline(cin, input);
    cout<<"Given String: "<<input<<endl;
    
    int length = input.length();
    cout<<"Length of String: "<<length<<endl;
    char *dynamic_string = new char[length + 1];
    for(int i=0;i<length;i++){
        dynamic_string[i]=input[i];
    }
    dynamic_string[length]='\0';  
    for(int i=0;i<length/2;i++){
        swap(dynamic_string[i],dynamic_string[length-1-i]);
    }
    cout<<"Reversed String: ";
    cout<<dynamic_string<<endl;

    delete [] dynamic_string;
    dynamic_string=nullptr;
    return 0;
}