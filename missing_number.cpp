/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>> n;
    vector<int> arr(n-1,0);
    for (int i = 0; i < n-1; i++) {
        cin>>arr[i];
    }
    
    int x = 0;
    for (int i = 1; i <= n;i++) {
        x = i^x;
    }
    
    for (int i = 0; i < n-1;i++) {
        x = x^arr[i];
    }
    cout<<x;
}