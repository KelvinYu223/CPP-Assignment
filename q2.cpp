#include<iostream>
using namespace std;
int main(){
    a:
    string a,b,c,d;
    cout << "   Welcome to Treasure Island.\n";
    cout << "Your mission is to find the treasure.\n";
    cout << "READ THIS BEFORE PLAY\n";
    cout << "Answer your choice by typing NUMBERS only!!!!\n";
    cout << "Now go left or right?(left/right)\n";
    cin>>a;
    while (a!="left"){
        cout << "Fall into a hole.\n";
        cout << "Game Over.\n";
        cout << "Please try again!!!\n";
        cin>>a;
    }
    if (a=="left"){
        cout << "Swim or wait?(swim/wait)\n";
        cin>>b;
    }
    while (b!="wait"){
        cout << "Attacked by trout.\n";
        cout << "Game Over.\n";
        cout << "Please try again!!!\n";
        cin>>b;
    }
    b:if (b=="wait"){
        cout << "Which door?\n";
        cout << "Blue,Red,Yellow(blue/red/yellow)\n";
        cin>>c;
    }
    while (c=="blue"){
        cout << "Eaten by beasts.\n";
        cout << "Game Over.\n";
        cout << "Please try again!!!\n";
        goto b;
    }
    while (c=="red"){
        cout << "Burned by fire.\n";
        cout << "Game Over.\n";
        cout << "Please try again!!!\n";
        goto b;
    }
    while (c!="yellow"){
        cout << "Game Over.\n";
        cout << "Please try again!!!\n";
        goto b;
    }
    if (c=="yellow"){
        cout << "You Win!\n";
    }
    cout << "Type exit if you wish to exit the game, type anythings to continue the game.(exit)\n";
        cin>>d;
    if (d=="exit"){
        return 0;
    }
    else {
        goto a;
    }
  
}