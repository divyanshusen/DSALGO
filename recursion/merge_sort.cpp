#include <iostream>
#include <vector>
using namespace std;

// merge
/*
In merge sort we divide and merge
We should follow the same pattern with larger array and smaller array for odd numbers
We should divide the array into two equal parts for
when single elements on both sides we merge it
going up in order we get to merge sorted arrays

*/

void merge(vector<int> &v, int low, int high,int mid)
{
    vector<int> temp;
    int left = low;
    int right = high;
    while (left <=mid && right>=mid)
    {
        if (v[left] > v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else
        {
            temp.push_back(v[right]);
            right--;
        }
    }
    while(left<=mid){
          temp.push_back(v[left]);
          left++;
    }
    while(right>=mid){
          temp.push_back(v[right]);
          right++;
    }
    for (int i = low; i < high; i++)
    {
        v[i]=temp[i-low];
        /* code */
    }
    
}
void ms(vector<int> &v, int low, int high)
{
    if (low >= high)
    {
        return;
    }
    int mid = (high + low) / 2;
    ms(v, low, mid);
    ms(v, mid+1, high);
    merge(v,low,high,mid);
    return ;
}

int main()
{

    vector<int>v = {3, 1, 2};
    ms(v, 0, 3);
    for(auto it:v){

    }
    return 0;
}