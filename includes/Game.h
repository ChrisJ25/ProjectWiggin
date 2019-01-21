#include <iostream>

using namespace std;

void GameSelection(){
    cout<<"I offer a multitude of strategy games."<<endl;
    cout<<"History, the game which sees you take me on from the beginning of time,"<<endl;
    cout<<"Ultimatum, the game which sees you try to fight an all-out nuclear war with me,"<<endl;
    cout<<"Warzone, the game which sees you attempting to win a modern war with me."<<endl;
    cout<<"Or, you could always select random."<<endl;
    cout<<"Which game do you choose?"<<endl;
    string Game;
    cin>>Game;

    if (Game == "History"){
        History.Start()        
    }
    else if (Game == "Ultimatum"){
        Ultimatum.Start();
    }
    else if (Game == "Warzone"){
        Warzone.Start();
    }
}

