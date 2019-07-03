// count.cpp
//  Created by Brennan Romash on 9/29/16.
// this program displays columns of squared and cubed numbers from 1-10. 



#include <iostream>
int main(int argc, char** argv) {
   // list index , x, x^2, and x^3
    std::cout<<"Index\tx\tx2\tx3"<<std::endl;
   // list numbers 0-10 below index
    for(int i=0; i<11; i++)
    {
   // relist 0-10 under "x"
        std::cout<<i<<"\t";
            std::cout<<i<<"\t";
   // list x^2 column
            std::cout<<i*i<<"\t";
   // list x^3 column
            std::cout<<i*i*i;
        std::cout<<std::endl;
    }
}
