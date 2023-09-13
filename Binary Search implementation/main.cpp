#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int binary_search_function(int listOfItem[] , int sizeOfArray ,int item){
    int low = 0 , high = sizeOfArray - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        int guess = listOfItem[mid];
        if(item == guess)
            return mid;
        if(guess < item)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main(void){
    int elements [10] = {3,6,7,1,4,5,9,0,1,2};
    // 0 1 2 3 4 5 6 7 8 9
    // 0 1 1 2 3 4 5 6 7 9
    sort(elements,elements+10);
    int result = binary_search_function(elements,10,7);
    if(result != -1)
        cout<<"This number exist";
    else
        cout<<"This number does not exist";
  return 0;
}
