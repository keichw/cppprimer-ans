#include <iostream>
#include <string>
using namespace std;

istream &read_print(istream &is){
    string s;
    while(is>>s)
        cout << s << endl;
    is.clear();
    return is;
}

int main(){
    read_print(cin);

    return 0;
}