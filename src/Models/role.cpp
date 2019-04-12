#include "role.h"

#include "user.h"

Role::Role()
{

}

unsigned int Role::getId() const
{
    return id;
}

void Role::setId(unsigned int value)
{
    id = value;
}

std::string Role::getName() const
{
    return name;
}

void Role::setName(const std::string &value)
{
    name = value;
}

RoleOption Role::getRoleOption() const
{
    return roleOption;
}

void Role::setRoleOption(const RoleOption &value)
{
    roleOption = value;
}

std::vector<User> Role::getUsers() const
{
    return users;
}

void Role::setUsers(const std::vector<User> &value)
{
    users = value;
}
