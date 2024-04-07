#pragma once
#include <iostream>
#include <string>
using namespace std;


#include "Functions.hpp"
class Phonebook
{
private:
    string FullName;
    int HomeNumber;
    int WorkNumber;
    int MobileNumber;
    string AdditionalInformation;
public:
    Phonebook(string fullName, int homeNumber, int workNumber, int mobileNumber, string additionalInformation):
    FullName { fullName },
    HomeNumber {homeNumber},
    WorkNumber {workNumber},
    MobileNumber {mobileNumber},
    AdditionalInformation {additionalInformation}{}
        
    
    void setFullName(string fullName);
    void setHomeNumber(int homeNumber);
    void setWorkNumber(int workNumber);
    void setMobileNumber(int mobileNumber);
    void setAdditionalInformation(string additionalInformation);
        
    string getFullName();
    int getHomeNumber();
    int getWorkNumber();
    int getMobileNumber();
    string getAdditionalInformation();
    
    void printContact();
};
