#include <iostream>
#include "maximum_subarray.cpp"
using namespace std;

int main(){
    int arr[8] = {8,10,-6,7,0,9,-8,2}; 
    int* ans = find_max_subarray(arr, 0, 7);
    cout << "Maximum subarray is from index " << ans[0] << " to index " << ans[1] << " with sum = " << ans[2] << '\n';
    return 0;
}