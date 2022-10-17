#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void swap(int &a, int &b){
    int c=a;
    a=b;
    b=c;
}

int main() {
    int a = 5, b = 10;
    cout << a << " " << b<<endl;
    swap(a,b);
    cout << a << " " << b<<endl;
    
}
