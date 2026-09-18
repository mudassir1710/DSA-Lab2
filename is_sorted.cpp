#include <iostream>
#include<cassert>
using namespace std;
bool isSorted(const int *arr, const int size)
{
    if(size<=1){
        return true;
    }
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
void testSortedArray(){    
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
    cout << "Test Passed 1: Sorted Array"<<endl;
}
void testUnsortedArray(){
    int arr[]={2,3,1,5,4};
    assert(isSorted(arr,5)==false);
    cout << "Test Passed 2: Unsorted Array"<<endl;
}
void testDuplicateValues() {
int arr[] = {1, 2, 2, 3, 5};
assert(isSorted(arr, 5) == true);
cout << "Test Passed 3: Duplicate Values"<<endl;
}
void testSingleElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
    cout << "Test Passed 4: Single Element"<<endl;
}
void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
    cout << "Test Passed 5: Descending Array"<<endl;
}
void testNegativeValues() {
    int arr[] = {-10, -5, 0, 5, 10};
    assert(isSorted(arr, 5) == true);
    cout << "Test Passed 6: Negative Values"<<endl;
}
void testEqualElements() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
    cout << "Test Passed 7: All Equal Elements"<<endl;
}
void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true); 
    cout << "Test Passed 8: Empty Array"<<endl;
}
int main()
{
    testSortedArray();
    testUnsortedArray();
    testDuplicateValues();
    testDescendingArray();
    testEmptyArray();
    testEqualElements();
    testNegativeValues();
    testSingleElement();
    return 0;
}