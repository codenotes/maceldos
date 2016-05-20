/*
 *  maceldos.cpp
 *  maceldos
 *
 *  Created by Gregory Brill on 5/20/16.
 *  Copyright © 2016 Gregory Brill. All rights reserved.
 *
 */

#include <iostream>
#include "maceldos.hpp"
#include "maceldosPriv.hpp"


#include "sball.h"

#include "sbutils.h"
//#include "sbarczip.h"
#include "sbziputils.h"

#include "sbotpclient.h"
#include "sbotpserver.h"

#include <vector>

using namespace SecureBlackbox;
using namespace std;


int gInterval = 30;

int add(int x, int y);

void InitSecBB()

{
    
    
    
    try
    
    {
        
        
        
        
        
        SetLicenseKey("157D6417CDC38B1B2ADB09B4A150AFCD406762C4ED675BCA6BC8D66F53452166245B70261851328A86D269C3DC712B968B6FE31AED3DB276BC90DF3012F34E07E9BE5487CA08F8E5C87A3EEF05B7BCD1BB7815492DE2A1E982824FF9A1B770A7FA1468EBF87FEA7E881107A0562D62021ADE5BC1CDFBFBF882B80598BEA39923DD042D520D79F72A4B38E3A306357F461790A8F31CBAFE93CDE945E561EE4A4B5CA6717AC93AF0D4FE32DDCBF129A78E769394CE61220D1161C647F97B424C42C24AB7805068455B40F29DF71D8ECAF6CE04CF4FB433916C13DA529BC72B28F7D0EF8DC57BBA791B18A345252BDAD9000A7748AEE7D5678F1F9553040984C61D");
        
    }
    
    catch (SBException E)
    
    {
        
    }
    
    
    
    
    
}




//extern "C"
//{
    int ValidateTOTP_(char * keySecret, int keySecretLen, char * password)
    {
        
        string pwd = password;
        InitSecBB();
        
        
        vector<uint8_t> ks;
        ks.assign(keySecret, keySecret + keySecretLen);
        
        
        
        SecureBlackbox::TElTOTPServer serv(NULL);
        TElTOTPUser user;
        string greg = "greg";
        
        //serv.set_Delta(5);
        
        user.set_UserID(greg);
        user.set_PasswordLen(pwd.length());
        user.set_KeySecret(ks);
        user.set_TimeInterval(gInterval);
        
        
        //cout << "press key...or wait it out to see when pwd will faile" << endl;
        //cin.get();
        
        if (serv.IsPasswordValid(user, pwd))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        
        
    }
    int GetTOTP_(char * keySecret, int keySecretLen, char * buffer)
    {
        vector<uint8_t> ks;
        
        
        ks.assign(keySecret, keySecret + keySecretLen);
        
        string pwd;
        InitSecBB();
        SecureBlackbox::TElTOTPClient c(ks, ks.size());
        c.set_TimeInterval(gInterval);
        c.GetPassword(pwd);
        strcpy(buffer, pwd.c_str());
        return pwd.length();
        
        
    }
    
    void SetTimeInterval(int interval)
    {
        
        gInterval = interval;
        
    }
    
//}






void maceldos::HelloWorld(const char * s)
{
	 maceldosPriv *theObj = new maceldosPriv;
	 theObj->HelloWorldPriv(s);
	 delete theObj;
};

void maceldosPriv::HelloWorldPriv(const char * s) 
{
	std::cout << s << std::endl;
};

