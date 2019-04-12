#ifndef ROLE_H
#define ROLE_H

#include <iostream>
#include <vector>
#include "roleoption.h"

class User;

class Role
{
public:
    Role();
    unsigned int getId() const;
    void setId(unsigned int value);

    std::string getName() const;
    void setName(const std::string &value);

    RoleOption getRoleOption() const;
    void setRoleOption(const RoleOption &value);

    std::vector<User> getUsers() const;
    void setUsers(const std::vector<User> &value);

private:
    unsigned int id;
    std::string name;
    RoleOption roleOption;
    std::vector<User> users;
};

#endif // ROLE_H
