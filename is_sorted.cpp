#include <iostream>
#include<cassert>
using namespace std;
bool isSorted(const int arr[], const int size)
{
    return false;
}
void testSortedArray()
{
    int arr[] = {1, 2, 3, 4, 5};
    assert(isSorted(arr, 5) == true);
    cout << "Test Passed: Sorted Array";
}
void testUnsortedArray(){
    int arr[]={2,3,1,5,4};
    assert(isSorted(arr,5)==false);
    cout << "Test Passed: Unsorted Array";

}
void testDuplicateValues() {
int arr[] = {1, 2, 2, 3, 5};
assert(isSorted(arr, 5) == true);
cout << "Test  Passed: Duplicate Values";
}
void testSingleElement() {
    int arr[] = {42};
    assert(isSorted(arr, 1) == true);
    cout << "Test Passed: Single Element";
}

void testDescendingArray() {
    int arr[] = {5, 4, 3, 2, 1};
    assert(isSorted(arr, 5) == false);
    cout << "Test Passed: Descending Array";
}

void testNegativeValues() {
    int arr[] = {-10, -5, 0, 5, 10};
    assert(isSorted(arr, 5) == true);
    cout << "Test Passed: Negative Values";
}
void testEqualElements() {
    int arr[] = {7, 7, 7, 7};
    assert(isSorted(arr, 4) == true);
    cout << "Test Passed: All Equal Elements";
}

void testEmptyArray() {
    int arr[] = {};
    assert(isSorted(arr, 0) == true); 
    cout << "Test Passed: Empty Array";
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