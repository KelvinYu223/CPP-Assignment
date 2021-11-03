#include <iostream>
using namespace std;
int main() {
   string a,b,c;
        cout << "enter string\n";
        cin>>a;
    for (int n=1,i=0; i<n; n++){
        if (a=="blue"){
            cout << "again1\n";
            cin>>a;
           }
        if (a=="red"){
            cout << "again2\n";
            cin>>a;
           }
        if (a!="blue"&&a!="red"&&a!="yellow"){
            cout << "again3\n";
            cin>>a;
           }
        if (a=="yellow"){
            cout << "you win\n";
            cout << "type 'exit' to exit,to continue just type anything\n";
            cin>>b;
            if (b=="exit"){
                return 0;
            }
            else {
                cout << "enter string\n";
                cin>>a;
            }
        }
    }
}