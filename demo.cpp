#include <iostream>
using namespace std;

int main(){
    string s = "Aniket";
    
    cout << *(--(s.end())) << '\n';
}