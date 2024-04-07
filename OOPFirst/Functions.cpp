#include "Functions.hpp"

void Phonebook::setFullName(string fullName)
{
    if (fullName.empty())
    {
        this->FullName = "unknown";
    }
    else
    {
        this->FullName = fullName;
    }
}
void Phonebook::setHomeNumber(int homeNumber)
{
    if(homeNumber < 0)
    {
        homeNumber = 0;
    }
    else
    {
        this->HomeNumber = homeNumber;
    }
}
void Phonebook::setWorkNumber(int workNumber)
{
    if(workNumber < 0)
    {
        workNumber = 0;
    }
    else
    {
        this->WorkNumber = workNumber;
    }
}
    void Phonebook::setMobileNumber(int mobileNumber)
{
    if(mobileNumber < 0)
    {
        mobileNumber = 0;
    }
    else
    {
        this->MobileNumber = mobileNumber;
    }
}
void Phonebook::setAdditionalInformation(string additionalInformation)
{
    if (additionalInformation.empty())
    {
        this->AdditionalInformation = "unknown";
    }
    else
    {
        this->AdditionalInformation = additionalInformation;
    }
}
    
string Phonebook::getFullName()
{
    return FullName;
}
int Phonebook::getHomeNumber()
{
    return HomeNumber;
}
int Phonebook::getWorkNumber()
{
    return WorkNumber;
}
int Phonebook::getMobileNumber()
{
    return MobileNumber;
}
string Phonebook::getAdditionalInformation()
{
    return AdditionalInformation;
}

void Phonebook::printContact()
{
    cout<<"FullName - "<<FullName<<endl;
    cout<<"HomeNumber - "<<HomeNumber<<endl;
    cout<<"WorkNumber - "<<WorkNumber<<endl;
    cout<<"MobileNumber - "<<MobileNumber<<endl;
    cout<<"AdditionalInformation - "<<AdditionalInformation<<endl;
}
