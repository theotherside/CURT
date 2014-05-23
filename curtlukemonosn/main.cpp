//
//  main.cpp
//  curtlukemonosn
//
//  Created by lrm on 5/23/14.
//  Copyright (c) 2014 Monson. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int lim;
    int isPrime;
    for(int x=2;x<7927;x++)
    {
        lim=(int) sqrt(x+1);
        isPrime=1;
        for(int y=2;y<=lim;y++){
            if(x%y==0){
                isPrime=0;
                break; 
            } 
        } 
        if(isPrime) 
            cout << x << " "; 
    } 
    
    return 0; 
}
