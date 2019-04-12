-- --------------------------------------------------------
-- Хост:                         localhost
-- Версия сервера:               5.6.38 - MySQL Community Server (GPL)
-- Операционная система:         Win32
-- HeidiSQL Версия:              9.4.0.5125
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;

-- Дамп структуры для таблица EntropiMySQL.CustomItems
CREATE TABLE IF NOT EXISTS `CustomItems` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(50) DEFAULT NULL,
  `Price` decimal(5,2) DEFAULT NULL,
  `UserId` int(11) NOT NULL,
  `Chosed` bit(1) DEFAULT NULL,
  `BeginQuantity` int(11) DEFAULT NULL,
  `Markup` decimal(6,2) DEFAULT NULL,
  `PurchasePrice` decimal(8,2) DEFAULT NULL,
  `Step` int(11) DEFAULT '1',
  PRIMARY KEY (`Id`),
  KEY `FK_CustomItems_Users` (`UserId`),
  CONSTRAINT `FK_CustomItems_Users` FOREIGN KEY (`UserId`) REFERENCES `Users` (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Дамп данных таблицы EntropiMySQL.CustomItems: ~0 rows (приблизительно)
/*!40000 ALTER TABLE `CustomItems` DISABLE KEYS */;
/*!40000 ALTER TABLE `CustomItems` ENABLE KEYS */;

-- Дамп структуры для таблица EntropiMySQL.Messages
CREATE TABLE IF NOT EXISTS `Messages` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `SenderId` int(11) DEFAULT NULL,
  `SenderEmail` varchar(50) DEFAULT NULL,
  `SenderName` varchar(50) DEFAULT NULL,
  `Date` datetime NOT NULL,
  `RecId` int(11) NOT NULL,
  `Title` varchar(128) DEFAULT NULL,
  `Text` varchar(512) DEFAULT NULL,
  `Sent` bit(1) DEFAULT NULL,
  `Read` bit(1) DEFAULT NULL,
  PRIMARY KEY (`Id`),
  KEY `FK_Messages_Users` (`RecId`),
  CONSTRAINT `FK_Messages_Users` FOREIGN KEY (`RecId`) REFERENCES `Users` (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Дамп данных таблицы EntropiMySQL.Messages: ~0 rows (приблизительно)
/*!40000 ALTER TABLE `Messages` DISABLE KEYS */;
/*!40000 ALTER TABLE `Messages` ENABLE KEYS */;

-- Дамп структуры для таблица EntropiMySQL.RoleOptions
CREATE TABLE IF NOT EXISTS `RoleOptions` (
  `Id` int(11) NOT NULL,
  `AmountPoints` int(11) DEFAULT NULL,
  `AmountStandartItems` int(11) DEFAULT NULL,
  `AmountCustomItems` int(11) DEFAULT NULL,
  PRIMARY KEY (`Id`),
  CONSTRAINT `FK_RoleOptions_Roles` FOREIGN KEY (`Id`) REFERENCES `Roles` (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Дамп данных таблицы EntropiMySQL.RoleOptions: ~0 rows (приблизительно)
/*!40000 ALTER TABLE `RoleOptions` DISABLE KEYS */;
/*!40000 ALTER TABLE `RoleOptions` ENABLE KEYS */;

-- Дамп структуры для таблица EntropiMySQL.Roles
CREATE TABLE IF NOT EXISTS `Roles` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(128) NOT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB AUTO_INCREMENT=116 DEFAULT CHARSET=utf8;

-- Дамп данных таблицы EntropiMySQL.Roles: ~5 rows (приблизительно)
/*!40000 ALTER TABLE `Roles` DISABLE KEYS */;
REPLACE INTO `Roles` (`Id`, `Name`) VALUES
	(1, 'SuperAdmin'),
	(2, 'Silver User'),
	(94, 'Gold User'),
	(110, 'Default'),
	(111, 'Bronze User');
/*!40000 ALTER TABLE `Roles` ENABLE KEYS */;

-- Дамп структуры для таблица EntropiMySQL.SelectedStandartItems
CREATE TABLE IF NOT EXISTS `SelectedStandartItems` (
  `UserId` int(11) NOT NULL,
  `ItemId` int(11) NOT NULL,
  `BeginQuantity` int(11) DEFAULT NULL,
  `Step` int(11) NOT NULL DEFAULT '1',
  `Markup` decimal(5,2) DEFAULT NULL,
  `PurchasePrice` decimal(8,2) DEFAULT NULL,
  KEY `FK_SelectedStandartItems_Users` (`UserId`),
  KEY `FK_SelectedStandartItems_StandartItems` (`ItemId`),
  CONSTRAINT `FK_SelectedStandartItems_StandartItems` FOREIGN KEY (`ItemId`) REFERENCES `StandartItems` (`Id`),
  CONSTRAINT `FK_SelectedStandartItems_Users` FOREIGN KEY (`UserId`) REFERENCES `Users` (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Дамп данных таблицы EntropiMySQL.SelectedStandartItems: ~0 rows (приблизительно)
/*!40000 ALTER TABLE `SelectedStandartItems` DISABLE KEYS */;
/*!40000 ALTER TABLE `SelectedStandartItems` ENABLE KEYS */;

-- Дамп структуры для таблица EntropiMySQL.StandartItemCategories
CREATE TABLE IF NOT EXISTS `StandartItemCategories` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(50) DEFAULT NULL,
  `ParentId` int(11) DEFAULT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Дамп данных таблицы EntropiMySQL.StandartItemCategories: ~0 rows (приблизительно)
/*!40000 ALTER TABLE `StandartItemCategories` DISABLE KEYS */;
/*!40000 ALTER TABLE `StandartItemCategories` ENABLE KEYS */;

-- Дамп структуры для таблица EntropiMySQL.StandartItems
CREATE TABLE IF NOT EXISTS `StandartItems` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `Name` varchar(100) NOT NULL,
  `Price` decimal(16,2) DEFAULT NULL,
  `CategoryId` int(11) DEFAULT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Дамп данных таблицы EntropiMySQL.StandartItems: ~0 rows (приблизительно)
/*!40000 ALTER TABLE `StandartItems` DISABLE KEYS */;
/*!40000 ALTER TABLE `StandartItems` ENABLE KEYS */;

-- Дамп структуры для таблица EntropiMySQL.UserClaims
CREATE TABLE IF NOT EXISTS `UserClaims` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `UserId` int(11) DEFAULT NULL,
  `ClaimType` longtext,
  `ClaimValue` longtext,
  PRIMARY KEY (`Id`),
  KEY `FK_UserClaims_Users` (`UserId`),
  CONSTRAINT `FK_UserClaims_Users` FOREIGN KEY (`UserId`) REFERENCES `Users` (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Дамп данных таблицы EntropiMySQL.UserClaims: ~0 rows (приблизительно)
/*!40000 ALTER TABLE `UserClaims` DISABLE KEYS */;
/*!40000 ALTER TABLE `UserClaims` ENABLE KEYS */;

-- Дамп структуры для таблица EntropiMySQL.UserRoles
CREATE TABLE IF NOT EXISTS `UserRoles` (
  `UserId` int(11) NOT NULL,
  `RoleId` int(11) NOT NULL,
  KEY `FK_UserRoles_Users` (`UserId`),
  KEY `FK_UserRoles_Roles` (`RoleId`),
  CONSTRAINT `FK_UserRoles_Roles` FOREIGN KEY (`RoleId`) REFERENCES `Roles` (`Id`),
  CONSTRAINT `FK_UserRoles_Users` FOREIGN KEY (`UserId`) REFERENCES `Users` (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Дамп данных таблицы EntropiMySQL.UserRoles: ~0 rows (приблизительно)
/*!40000 ALTER TABLE `UserRoles` DISABLE KEYS */;
/*!40000 ALTER TABLE `UserRoles` ENABLE KEYS */;

-- Дамп структуры для таблица EntropiMySQL.Users
CREATE TABLE IF NOT EXISTS `Users` (
  `Id` int(11) NOT NULL AUTO_INCREMENT,
  `Email` varchar(128) NOT NULL,
  `EmailConfirmed` bit(1) DEFAULT NULL,
  `PasswordHash` varchar(50) NOT NULL,
  `SecurityStamp` varchar(50) DEFAULT NULL,
  `PhoneNumber` varchar(50) DEFAULT NULL,
  `PhoneNumberConfirmed` bit(1) DEFAULT NULL,
  `TwoFactorEnabled` bit(1) DEFAULT NULL,
  `LockoutEndDateUtc` datetime DEFAULT NULL,
  `LockoutEnabled` bit(1) DEFAULT NULL,
  `AccessFailedCount` int(11) DEFAULT NULL,
  `UserName` varchar(128) NOT NULL,
  PRIMARY KEY (`Id`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8;

-- Дамп данных таблицы EntropiMySQL.Users: ~0 rows (приблизительно)
/*!40000 ALTER TABLE `Users` DISABLE KEYS */;
/*!40000 ALTER TABLE `Users` ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
