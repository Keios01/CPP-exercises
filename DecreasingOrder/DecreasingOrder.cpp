//This program sorts integers from biggest to smallest.
#include<iostream>
#include<cmath>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

main() 
{
 int number;
 cout << "Give the number you want to sort: ";
 cin >> number;
 int digit;
 int whole;
 int power;
 vector<int> licz; 
 
 while(number > 0)
{
  digit = number%10;
  number /= 10;
  licz.push_back(digit);   //spliting int into digits
}
std::sort(licz.begin(),licz.end(), greater<int>());  //sorting
int size = licz.size();
power = pow(10, (size - 1));
for(int i = 0; i < size; i++)
{
  licz[i] = licz[i] * power;
  power = power/10;
} 

whole = accumulate(begin(licz), end(licz), 0, plus<int>());   //mergeing digits into whole number
cout <<"Your number after sorting; "<< whole;
}