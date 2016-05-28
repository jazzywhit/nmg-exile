#Narrow Minded Gaming
##Bolt Action Hardcore

This is the README for our Arma 3 Exile Multiplayer Server, Bolt Action Hardcore. This should provide you with step by step instructions on how to get the server setup.

This markdown was generated at [https://stackedit.io/editor](https://stackedit.io/editor)

##Installation

###WAMP

[Download WAMP](http://www.wampserver.com/en/#download-wrapper) to help setup your MYSQL server easily and inside a neat virtual space.

###MySQL
You will need to update the sql mode of the database by updating your my.ini file.

REPLACE

```sql-mode="STRICT_TRANS_TABLES,NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION"```

WITH

```sql-mode="NO_AUTO_CREATE_USER,NO_ENGINE_SUBSTITUTION"```

Restart your sql server and then you'll be good.

###Visual C++
Install both the x86 and x64 versions of the following:

- [Visual C++ Redistributable Packages for Visual Studio 2013]
(https://www.microsoft.com/en-us/download/details.aspx?id=40784)
- [Visual C++ Redistributable for Visual Studio 2015]
(https://www.microsoft.com/en-us/download/details.aspx?id=48145)

###Firewall
Unblock the extdb2.dll file:

- [http://www.exilemod.com/topic/8835-exileserver-mysql-error-unable-to-locate-extdb2-extension/](http://www.exilemod.com/topic/8835-exileserver-mysql-error-unable-to-locate-extdb2-extension/)

###Issues

Errors encountered while installing:

- [http://www.exilemod.com/topic/757-mysql-error-unable-to-locate-extdb2-extension/](http://www.exilemod.com/topic/757-mysql-error-unable-to-locate-extdb2-extension/)
- [http://www.exilemod.com/topic/1027-mysql-connection-error/](http://www.exilemod.com/topic/1027-mysql-connection-error/)