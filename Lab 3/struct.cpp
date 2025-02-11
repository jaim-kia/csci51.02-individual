// Create your own struct with varying variable sizes and values. Examine how it works by trying to access the variables and doing couts.

// Share your observations and new points that you've found out in declaring, accessing and modifying structs using C++.

// Submit your code. Either in the comments of your .cpp or in a text entry format, answer this question: How is it similar/different or what is the advantage of using it compared to your favorite programming language (Java, Python, etc..)?
#include<iostream>
#include<string>
using namespace std;

struct Persona {
    int id, Ma, St, En, Ag, Lu;
    string name;
};