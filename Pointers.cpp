// Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>
#include <string>
using namespace std;

void func1()
void func2()
void func3()

int main()
{
    int ary[5] = { 1, 2, 3, 4, 5 };
    int x = 10;
    //Putting in 'new int' 
    int* x = new int[x];
    func1();
}

void func1() {
    cout << "func 1" <<endl;
    func2();
}
void func2() {
    cout << "func2" << endl;
    func3();
}
void func3() {
    cout << "func3" << endl;
 
}

