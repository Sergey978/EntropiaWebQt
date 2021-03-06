// generated by E:\Cplus_projects\sqlpp11_test\sqlpp11\scripts\sqlite2cpp.py E:\Cplus_projects\EntropiaAucWebCpp\files\Dbase\Entropia.ddl E:\Cplus_projects\EntropiaAucWebCpp\files\Dbase\EntropiaMySQl.txt dBRepo
#ifndef DBREPO_ENTROPIAMYSQL_TXT_H
#define DBREPO_ENTROPIAMYSQL_TXT_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace dBRepo
{
  namespace CustomItems_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Id;
            T& operator()() { return Id; }
            const T& operator()() const { return Id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct Name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Name;
            T& operator()() { return Name; }
            const T& operator()() const { return Name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct Price
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Price";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Price;
            T& operator()() { return Price; }
            const T& operator()() const { return Price; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::require_insert>;
    };
    struct UserId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "UserId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T UserId;
            T& operator()() { return UserId; }
            const T& operator()() const { return UserId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct Chosed
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Chosed";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Chosed;
            T& operator()() { return Chosed; }
            const T& operator()() const { return Chosed; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::boolean, sqlpp::tag::require_insert>;
    };
    struct BeginQuantity
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "BeginQuantity";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T BeginQuantity;
            T& operator()() { return BeginQuantity; }
            const T& operator()() const { return BeginQuantity; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct Markup
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Markup";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Markup;
            T& operator()() { return Markup; }
            const T& operator()() const { return Markup; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::require_insert>;
    };
    struct PurchasePrice
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "PurchasePrice";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T PurchasePrice;
            T& operator()() { return PurchasePrice; }
            const T& operator()() const { return PurchasePrice; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::require_insert>;
    };
    struct Step
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Step";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Step;
            T& operator()() { return Step; }
            const T& operator()() const { return Step; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
  } // namespace CustomItems_

  struct CustomItems: sqlpp::table_t<CustomItems,
               CustomItems_::Id,
               CustomItems_::Name,
               CustomItems_::Price,
               CustomItems_::UserId,
               CustomItems_::Chosed,
               CustomItems_::BeginQuantity,
               CustomItems_::Markup,
               CustomItems_::PurchasePrice,
               CustomItems_::Step>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "CustomItems";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T CustomItems;
        T& operator()() { return CustomItems; }
        const T& operator()() const { return CustomItems; }
      };
    };
  };
  namespace Messages_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Id;
            T& operator()() { return Id; }
            const T& operator()() const { return Id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct SenderId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "SenderId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T SenderId;
            T& operator()() { return SenderId; }
            const T& operator()() const { return SenderId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct SenderEmail
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "SenderEmail";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T SenderEmail;
            T& operator()() { return SenderEmail; }
            const T& operator()() const { return SenderEmail; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct SenderName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "SenderName";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T SenderName;
            T& operator()() { return SenderName; }
            const T& operator()() const { return SenderName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct Date
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Date";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Date;
            T& operator()() { return Date; }
            const T& operator()() const { return Date; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point, sqlpp::tag::require_insert>;
    };
    struct RecId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "RecId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T RecId;
            T& operator()() { return RecId; }
            const T& operator()() const { return RecId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct Title
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Title";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Title;
            T& operator()() { return Title; }
            const T& operator()() const { return Title; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct Text
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Text";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Text;
            T& operator()() { return Text; }
            const T& operator()() const { return Text; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::require_insert>;
    };
    struct Sent
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Sent";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Sent;
            T& operator()() { return Sent; }
            const T& operator()() const { return Sent; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::boolean, sqlpp::tag::require_insert>;
    };
    struct Read
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Read";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Read;
            T& operator()() { return Read; }
            const T& operator()() const { return Read; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::boolean, sqlpp::tag::require_insert>;
    };
  } // namespace Messages_

  struct Messages: sqlpp::table_t<Messages,
               Messages_::Id,
               Messages_::SenderId,
               Messages_::SenderEmail,
               Messages_::SenderName,
               Messages_::Date,
               Messages_::RecId,
               Messages_::Title,
               Messages_::Text,
               Messages_::Sent,
               Messages_::Read>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "Messages";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T Messages;
        T& operator()() { return Messages; }
        const T& operator()() const { return Messages; }
      };
    };
  };
  namespace RoleOptions_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Id;
            T& operator()() { return Id; }
            const T& operator()() const { return Id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct AmountPoints
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "AmountPoints";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T AmountPoints;
            T& operator()() { return AmountPoints; }
            const T& operator()() const { return AmountPoints; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct AmountStandartItems
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "AmountStandartItems";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T AmountStandartItems;
            T& operator()() { return AmountStandartItems; }
            const T& operator()() const { return AmountStandartItems; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct AmountCustomItems
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "AmountCustomItems";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T AmountCustomItems;
            T& operator()() { return AmountCustomItems; }
            const T& operator()() const { return AmountCustomItems; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
  } // namespace RoleOptions_

  struct RoleOptions: sqlpp::table_t<RoleOptions,
               RoleOptions_::Id,
               RoleOptions_::AmountPoints,
               RoleOptions_::AmountStandartItems,
               RoleOptions_::AmountCustomItems>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "RoleOptions";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T RoleOptions;
        T& operator()() { return RoleOptions; }
        const T& operator()() const { return RoleOptions; }
      };
    };
  };
  namespace Roles_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Id;
            T& operator()() { return Id; }
            const T& operator()() const { return Id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct Name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Name;
            T& operator()() { return Name; }
            const T& operator()() const { return Name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
  } // namespace Roles_

  struct Roles: sqlpp::table_t<Roles,
               Roles_::Id,
               Roles_::Name>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "Roles";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T Roles;
        T& operator()() { return Roles; }
        const T& operator()() const { return Roles; }
      };
    };
  };
  namespace SelectedStandartItems_
  {
    struct UserId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "UserId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T UserId;
            T& operator()() { return UserId; }
            const T& operator()() const { return UserId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct ItemId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ItemId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T ItemId;
            T& operator()() { return ItemId; }
            const T& operator()() const { return ItemId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct BeginQuantity
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "BeginQuantity";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T BeginQuantity;
            T& operator()() { return BeginQuantity; }
            const T& operator()() const { return BeginQuantity; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct Step
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Step";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Step;
            T& operator()() { return Step; }
            const T& operator()() const { return Step; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct Markup
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Markup";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Markup;
            T& operator()() { return Markup; }
            const T& operator()() const { return Markup; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::require_insert>;
    };
    struct PurchasePrice
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "PurchasePrice";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T PurchasePrice;
            T& operator()() { return PurchasePrice; }
            const T& operator()() const { return PurchasePrice; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::require_insert>;
    };
  } // namespace SelectedStandartItems_

  struct SelectedStandartItems: sqlpp::table_t<SelectedStandartItems,
               SelectedStandartItems_::UserId,
               SelectedStandartItems_::ItemId,
               SelectedStandartItems_::BeginQuantity,
               SelectedStandartItems_::Step,
               SelectedStandartItems_::Markup,
               SelectedStandartItems_::PurchasePrice>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "SelectedStandartItems";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T SelectedStandartItems;
        T& operator()() { return SelectedStandartItems; }
        const T& operator()() const { return SelectedStandartItems; }
      };
    };
  };
  namespace StandartItemCategories_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Id;
            T& operator()() { return Id; }
            const T& operator()() const { return Id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct Name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Name;
            T& operator()() { return Name; }
            const T& operator()() const { return Name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct ParentId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ParentId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T ParentId;
            T& operator()() { return ParentId; }
            const T& operator()() const { return ParentId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
  } // namespace StandartItemCategories_

  struct StandartItemCategories: sqlpp::table_t<StandartItemCategories,
               StandartItemCategories_::Id,
               StandartItemCategories_::Name,
               StandartItemCategories_::ParentId>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "StandartItemCategories";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T StandartItemCategories;
        T& operator()() { return StandartItemCategories; }
        const T& operator()() const { return StandartItemCategories; }
      };
    };
  };
  namespace StandartItems_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Id;
            T& operator()() { return Id; }
            const T& operator()() const { return Id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct Name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Name;
            T& operator()() { return Name; }
            const T& operator()() const { return Name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct Price
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Price";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Price;
            T& operator()() { return Price; }
            const T& operator()() const { return Price; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::require_insert>;
    };
    struct CategoryId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "CategoryId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T CategoryId;
            T& operator()() { return CategoryId; }
            const T& operator()() const { return CategoryId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
  } // namespace StandartItems_

  struct StandartItems: sqlpp::table_t<StandartItems,
               StandartItems_::Id,
               StandartItems_::Name,
               StandartItems_::Price,
               StandartItems_::CategoryId>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "StandartItems";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T StandartItems;
        T& operator()() { return StandartItems; }
        const T& operator()() const { return StandartItems; }
      };
    };
  };
  namespace UserClaims_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Id;
            T& operator()() { return Id; }
            const T& operator()() const { return Id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct UserId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "UserId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T UserId;
            T& operator()() { return UserId; }
            const T& operator()() const { return UserId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct ClaimType
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ClaimType";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T ClaimType;
            T& operator()() { return ClaimType; }
            const T& operator()() const { return ClaimType; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct ClaimValue
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "ClaimValue";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T ClaimValue;
            T& operator()() { return ClaimValue; }
            const T& operator()() const { return ClaimValue; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
  } // namespace UserClaims_

  struct UserClaims: sqlpp::table_t<UserClaims,
               UserClaims_::Id,
               UserClaims_::UserId,
               UserClaims_::ClaimType,
               UserClaims_::ClaimValue>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "UserClaims";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T UserClaims;
        T& operator()() { return UserClaims; }
        const T& operator()() const { return UserClaims; }
      };
    };
  };
  namespace UserRoles_
  {
    struct UserId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "UserId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T UserId;
            T& operator()() { return UserId; }
            const T& operator()() const { return UserId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct RoleId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "RoleId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T RoleId;
            T& operator()() { return RoleId; }
            const T& operator()() const { return RoleId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
  } // namespace UserRoles_

  struct UserRoles: sqlpp::table_t<UserRoles,
               UserRoles_::UserId,
               UserRoles_::RoleId>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "UserRoles";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T UserRoles;
        T& operator()() { return UserRoles; }
        const T& operator()() const { return UserRoles; }
      };
    };
  };
  namespace Users_
  {
    struct Id
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Id";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Id;
            T& operator()() { return Id; }
            const T& operator()() const { return Id; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::must_not_insert>;
    };
    struct Email
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "Email";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T Email;
            T& operator()() { return Email; }
            const T& operator()() const { return Email; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct EmailConfirmed
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "EmailConfirmed";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T EmailConfirmed;
            T& operator()() { return EmailConfirmed; }
            const T& operator()() const { return EmailConfirmed; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::boolean, sqlpp::tag::require_insert>;
    };
    struct PasswordHash
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "PasswordHash";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T PasswordHash;
            T& operator()() { return PasswordHash; }
            const T& operator()() const { return PasswordHash; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct SecurityStamp
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "SecurityStamp";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T SecurityStamp;
            T& operator()() { return SecurityStamp; }
            const T& operator()() const { return SecurityStamp; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
    struct PhoneNumber
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "PhoneNumber";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T PhoneNumber;
            T& operator()() { return PhoneNumber; }
            const T& operator()() const { return PhoneNumber; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct PhoneNumberConfirmed
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "PhoneNumberConfirmed";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T PhoneNumberConfirmed;
            T& operator()() { return PhoneNumberConfirmed; }
            const T& operator()() const { return PhoneNumberConfirmed; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::boolean, sqlpp::tag::require_insert>;
    };
    struct TwoFactorEnabled
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "TwoFactorEnabled";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T TwoFactorEnabled;
            T& operator()() { return TwoFactorEnabled; }
            const T& operator()() const { return TwoFactorEnabled; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::boolean, sqlpp::tag::require_insert>;
    };
    struct LockoutEndDateUtc
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "LockoutEndDateUtc";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T LockoutEndDateUtc;
            T& operator()() { return LockoutEndDateUtc; }
            const T& operator()() const { return LockoutEndDateUtc; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point, sqlpp::tag::require_insert>;
    };
    struct LockoutEnabled
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "LockoutEnabled";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T LockoutEnabled;
            T& operator()() { return LockoutEnabled; }
            const T& operator()() const { return LockoutEnabled; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::boolean, sqlpp::tag::require_insert>;
    };
    struct AccessFailedCount
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "AccessFailedCount";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T AccessFailedCount;
            T& operator()() { return AccessFailedCount; }
            const T& operator()() const { return AccessFailedCount; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::integer, sqlpp::tag::require_insert>;
    };
    struct UserName
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "UserName";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T UserName;
            T& operator()() { return UserName; }
            const T& operator()() const { return UserName; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::require_insert>;
    };
  } // namespace Users_

  struct Users: sqlpp::table_t<Users,
               Users_::Id,
               Users_::Email,
               Users_::EmailConfirmed,
               Users_::PasswordHash,
               Users_::SecurityStamp,
               Users_::PhoneNumber,
               Users_::PhoneNumberConfirmed,
               Users_::TwoFactorEnabled,
               Users_::LockoutEndDateUtc,
               Users_::LockoutEnabled,
               Users_::AccessFailedCount,
               Users_::UserName>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "Users";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T Users;
        T& operator()() { return Users; }
        const T& operator()() const { return Users; }
      };
    };
  };
} // namespace dBRepo
#endif
