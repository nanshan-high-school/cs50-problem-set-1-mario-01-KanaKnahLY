#include <iostream>
using namespace std;
int main() {
int height ;
 cout << "請輸入數字:";
 cin >> height ;

 if (height > 8 || height < 1)
       cout << "數字不是(1~8)";
    
else

for (int k = 0; k < height; k++) {
      for (int m = height; m > k; m--) {
        cout << " ";}
        for (int l = 0; l < k+1; l++) {
      cout << "#";}
      cout << " "; 
        for (int j = 0; j < k; j++) {
        cout << "#";}
       cout << "#\n"; } 
   
     }
