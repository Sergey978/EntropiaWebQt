#ifndef SQLREPOSITORY_H
#define SQLREPOSITORY_H

#include <vector>
#include <sqlpp11/sqlpp11.h>
#include "EntropiaMySQl.h"
#include "dbcontext.h"
#include "../user.h"
#include "../role.h"


class SqlRepository
{
public:
    SqlRepository(){}

        //User repository userrepo.cpp file
        std::vector<User>  getUsers();
        std::vector<User>  getUsersWithRoles();
        bool createUser(User &instance);
        bool updateUser(User &instance);
        bool removeUser(int userId);
        User findUserById(int id);
        User findUserByUserName(std::string const &userName );
        User findUserByEmail(std::string const &email);
        User findUserByLogin(std::string const &login);


        // Role Repository
        std::vector<Role>  getRoles();
        std::vector<Role> getUserRoles(int id);
        bool createRole(Role &instance);
        bool updateRole(Role &instance);
        bool removeRole(int RoleId);

private:

    dBRepo::Roles roleTab_;
    dBRepo::Users userTab_;
    dBRepo::UserRoles userRolesTab_;
    std::vector<Role> roles_;
    std::vector<User> users;
};

#endif // SQLREPOSITORY_H
