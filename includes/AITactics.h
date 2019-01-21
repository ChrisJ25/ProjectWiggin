#ifndef CharacterCreator_H
#define CharacterCreator_H

//Military AI
    //Easy
        //Only Buys Military Upgrades
        void METurn(){
            Game.Draft();
            Game.PlaceRandom();
            
        }
    //Medium
        //Easy + Looks at Territories, and Attacks The Weakest Nearest Tiles
    //Hard
        //Easy + Medium + Plots a Course to Cause the Most Destruction
//Tech AI
    //Easy
    //Medium
    //Hard
//Defense AI
    //Easy
    //Medium
    //Hard
//Impossible AI
    //Looks at Best Territories you own, and Attacks Those. Burns Supplies When Attacked (-1 Defense)
#endif
