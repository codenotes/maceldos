//
//  main.cpp
//  GregTestClient
//
//  Created by Gregory Brill on 5/10/16.
//  Copyright © 2016 Gregory Brill. All rights reserved.
//

#include <iostream>
using namespace std;

int GetTOTP_(char * keySecret, int keySecretLen, char * buffer);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    char token[255];
    char key[15];
    strcpy(key, "hithere");
    
    GetTOTP_(key,7,token);
    
    
    
    std::cout<<token<<endl;
    
    return 0;
}
