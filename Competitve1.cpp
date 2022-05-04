// Competitve1.cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
   char str[] = "A string.";
   char *pc = str;

   cout << str[0] <<' '<< *pc <<' '<<pc[3]<<endl;
   pc += 2;
   cout <<*pc<<' '<< pc[2] <<' '<< pc[5];

   return 0;
}