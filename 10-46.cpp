#include <array>
#include <iostream>
using namespace std;

int main()
{
  array<int, 6> nums = {10, 20, 30, 40, 20, 50};

  // Method 1
  // "First: 10"
  // "Last: 50"
  cout<<nums[0]<<"\n"<<nums[nums.size() - 1 ] << "\n" ;

  // Method 2
  // "First: 10"
  // "Last: 50"
 cout << *nums.begin()<< "\n" << *(nums.end() -  1 ) <<"\n" ;
  // Method 3
  // "First: 10"
  // "Last: 50"
 cout<<nums.front() << "\n" <<  nums.back() ;
  return 0;
}