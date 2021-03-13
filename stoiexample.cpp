// example with stoi()

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
    string age;
    cout << "Enter your age:";
    cin >> age;
    int nage = stoi (age);
    
    if (nage < 0) {
        cout << "You entered an invalid age" << endl;
        
    }else if ((nage>=1) && (nage <=18)){
        cout <<"You are not an adult yet!" << endl;
            
    }else if (nage >=65){
        cout << "You are overaged!"<< endl;
    }
    
    return 0;
    
}
