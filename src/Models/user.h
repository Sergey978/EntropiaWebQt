#ifndef USER_H
#define USER_H

#include <iostream>
#include<chrono>
#include<vector>
#include <date/date.h>
#include"userclaim.h"
#include"customitem.h"
#include "message.h"
#include "selectedstandartitem.h"
#include "../FrameWork/model.h"
#include "role.h"


using namespace date;
using namespace std::chrono;

class User: public Model
{
public:
    User(unsigned int id,
         std::string const &email,
         std::string const &userName,
         std::string const &passwordHash,
         bool emailConfirm = false,
         std::string const &securityStamp = "" ,
         std::string const &phoneNumber = "",
         bool phoneNumberConfirmed = false,
         system_clock::time_point  lockoutEndDate =  system_clock::time_point{} ,
         bool lockoutEnabled = false,
         unsigned int accessFailedCount = 0
            );


    virtual bool isValid() override;
    bool isUserNameUnique();
    bool isEmailAdressUnique();
    bool isEmailAdressCorrect();


    unsigned int getId() const;
    std::string getEmail() const;
    void setEmail(const std::string &value);

    bool getEmailConfirmed() const;
    void setEmailConfirmed(bool value);

    std::string getPasswordHash() const;
    void setPasswordHash(const std::string &value);

    std::string getSecurityStamp() const;
    void setSecurityStamp(const std::string &value);

    std::string getPhoneNumber() const;
    void setPhoneNumber(const std::string &value);

    bool getPhoneNumberConfirmed() const;
    void setPhoneNumberConfirmed(bool value);

    bool getTwoFactorEnabled() const;
    void setTwoFactorEnabled(bool value);

    system_clock::time_point getLockoutEndDate() const;
    void setLockoutEndDate(const system_clock::time_point &value);

    bool getLockoutEnabled() const;
    void setLockoutEnabled(bool value);

    unsigned int getAccessFailedCount() const;
    void setAccessFailedCount(unsigned int value);

    std::string getUserName() const;

private:
    unsigned int id;
    std::string email;
    std::string userName;
    bool emailConfirmed;    
    std::string passwordHash;
    std::string securityStamp;
    std::string phoneNumber;
    bool phoneNumberConfirmed;
    bool twoFactorEnabled;
    void setUserName(const std::string &value);
    system_clock::time_point  lockoutEndDate;
    bool lockoutEnabled;
    unsigned int accessFailedCount;

    std::vector<UserClaim> userClaims;
    std::vector<CustomItem> customItems;
    std::vector<Message> messages;
    std::vector<SelectedStandartItem> selectedStandartItems;
    std::vector<Role> roles;


};

#endif // USER_H
