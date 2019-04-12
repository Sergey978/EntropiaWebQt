#include "sqlrepository.h"
#include <sqlpp11/sqlpp11.h>
#include "../../requestmapper.h"
#include <set>


std::vector<User> SqlRepository::getUsers()
{
    DbContext   &dbc= DbContext::Instance();
    auto sj = dbc(select(all_of(userTab_)).from(userTab_).unconditionally());
    users.clear();
    for (auto const &user : sj)
    {
        users.push_back(User(user.Id, user.Email, user.UserName,
                             user.PasswordHash, user.EmailConfirmed,
                             user.SecurityStamp, user.PhoneNumber,
                             user.PhoneNumberConfirmed, user.LockoutEndDateUtc.value(),
                             user.LockoutEnabled, user.AccessFailedCount));
    }
    return users;

}

bool SqlRepository::createUser(User &instance)
{
    try {

        DbContext   &dbc= DbContext::Instance();
        dbc(sqlpp::insert_into(userTab_).
            set(
                 userTab_.Email = instance.getEmail(),
                 userTab_.EmailConfirmed = false,
                 userTab_.PasswordHash = instance.getPasswordHash(),
                 userTab_.SecurityStamp = "",
                 userTab_.PhoneNumber = sqlpp::null,
                 userTab_.PhoneNumberConfirmed = false,
                 userTab_.TwoFactorEnabled = false,
                 userTab_.LockoutEndDateUtc = instance.getLockoutEndDate(),
                 userTab_.LockoutEnabled = false,
                 userTab_.AccessFailedCount = 0,
                 userTab_.UserName = instance.getUserName())

            );

    } catch (const sqlpp::exception& e) {

        qDebug("sql exceptions:   %s",  e.what());
        return false;

    }
    return true;


}

User SqlRepository::findUserById(int id)
{
    User *result;
    DbContext   &dbc= DbContext::Instance();
    auto sj = dbc(select(all_of(userTab_)).from(userTab_)
                  .where(userTab_.Id == id)
                  .limit(1u));
    if(!sj.empty())
    {
        auto &row = sj.front();
        result =  new User(row.Id, row.Email, row.UserName, row.PasswordHash);
    }
    else
    {
        result = new User(0, "", "", "");
    }
    return *result;


}

User SqlRepository::findUserByUserName(const std::string &userName)
{
    User *result;
    DbContext   &dbc= DbContext::Instance();
    auto sj = dbc(select(all_of(userTab_)).from(userTab_)
                  .where(userTab_.UserName == userName)
                  .limit(1u));
    if(!sj.empty())
    {
        auto &row = sj.front();
        result =  new User(row.Id, row.Email, row.UserName, row.PasswordHash);
    }
    else
    {
        result = new User(0, "", "", "");
    }
    return *result;

}

User SqlRepository::findUserByEmail(const std::string &email)
{
    User *result;
    DbContext   &dbc= DbContext::Instance();
    auto sj = dbc(select(all_of(userTab_)).from(userTab_)
                  .where(userTab_.Email == email)
                  .limit(1u));
    if(!sj.empty())
    {
        auto &row = sj.front();
        result =  new User(row.Id, row.Email, row.UserName, row.PasswordHash);
    }
    else
    {
        result = new User(0, "", "", "");
    }
    return *result;

}

User SqlRepository::findUserByLogin(const std::string &login)
{
    User *result;
    DbContext   &dbc= DbContext::Instance();
    auto sj = dbc(select(all_of(userTab_)).from(userTab_)
                  .where(userTab_.Email == login or userTab_.UserName == login)
                  .limit(1u));
    if(!sj.empty())
    {
        auto &row = sj.front();
        result =  new User(row.Id, row.Email, row.UserName, row.PasswordHash);
    }
    else
    {
        result = new User(0, "", "", "");
    }
    return *result;

}
