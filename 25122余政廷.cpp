#include <iostream>
#include <string>
using namespace std;
int main() {
  int a=50,b=10,c=5,d=1;
  int money;
  cout << "請輸入你口袋的錢";
  cin >> money;

  int e = money / a, f = money - e * a;   
  cout <<"最少有" << e << "個50元 ";
  
  int g=f/b,h=f-g*b;
  cout <<"," << g << "個10元";
  
  int i=h/c,j=h-i*c;
  cout <<","<< i << "個5元";
  
  int k=j/d;
  cout << "和" << k << "個1元"; 


}

   
