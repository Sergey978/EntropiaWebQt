#include "user.h"

User::User(unsigned int id,
           std::string const &email,
           std::string const  &userName,
           std::string const &passwordHash,
           bool emailConfirm ,
           std::string const &securityStamp,
           std::string const &phoneNumber,
           bool phoneNumberConfirmed,
           system_clock::time_point lockoutEndDate,
           bool lockoutEnabled,
           unsigned int accessFailedCount
           ):Model(), id(id), email(email),
    userName(userName), emailConfirmed(emailConfirm),
    passwordHash(passwordHash),
    securityStamp(securityStamp),phoneNumber(phoneNumber),
    phoneNumberConfirmed(phoneNumberConfirmed),
    lockoutEndDate(lockoutEndDate),
    lockoutEnabled(lockoutEnabled),
    accessFailedCount(accessFailedCount)
{    
}


bool User::isValid()
{
    return true;
}

bool User::isUserNameUnique()
{

}

unsigned int User::getId() const
{
    return id;
}


std::string User::getEmail() const
{
    return email;
}

void User::setEmail(const std::string &value)
{
    email = value;
}

bool User::getEmailConfirmed() const
{
    return emailConfirmed;
}

void User::setEmailConfirmed(bool value)
{
    emailConfirmed = value;
}

std::string User::getPasswordHash() const
{
    return passwordHash;
}

void User::setPasswordHash(const std::string &value)
{
    passwordHash = value;
}

std::string User::getSecurityStamp() const
{
    return securityStamp;
}

void User::setSecurityStamp(const std::string &value)
{
    securityStamp = value;
}

std::string User::getPhoneNumber() const
{
    return phoneNumber;
}

void User::setPhoneNumber(const std::string &value)
{
    phoneNumber = value;
}

bool User::getPhoneNumberConfirmed() const
{
    return phoneNumberConfirmed;
}

void User::setPhoneNumberConfirmed(bool value)
{
    phoneNumberConfirmed = value;
}

bool User::getTwoFactorEnabled() const
{
    return twoFactorEnabled;
}

void User::setTwoFactorEnabled(bool value)
{
    twoFactorEnabled = value;
}

system_clock::time_point User::getLockoutEndDate() const
{
    return lockoutEndDate;
}

void User::setLockoutEndDate(const system_clock::time_point &value)
{
    lockoutEndDate = value;
}

bool User::getLockoutEnabled() const
{
    return lockoutEnabled;
}

void User::setLockoutEnabled(bool value)
{
    lockoutEnabled = value;
}

unsigned int User::getAccessFailedCount() const
{
    return accessFailedCount;
}

void User::setAccessFailedCount(unsigned int value)
{
    accessFailedCount = value;
}

std::string User::getUserName() const
{
    return userName;
}

void User::setUserName(const std::string &value)
{
    userName = value;
}
