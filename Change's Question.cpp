#include <iostream>
using namespace std;
int main() {
 int change ;
 cout << "有多少錢?";
 cin >> change ;
int fifty = change % 50;
int ten = fifty % 10;
int five = ten % 5;
int one = five % 1;

if (change >= 50 )

 cout << "有50元硬幣?個: " << change / 50;
  
  
if (fifty >= 10 )

 cout << "\n有10元硬幣?個: " << fifty / 10;

if (ten >= 5 )

 cout << "\n有5元硬幣?個: " << ten / 5;

if (five >= 1 )

 cout << "\n有1元硬幣?個: " << five / 1;

}
