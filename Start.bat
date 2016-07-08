@echo off
color 0a
title Exile Monitor
:Serverstart
echo Launching Server
echo Exile Server Monitor... Active !
start "Arma3" /min /wait arma3server.exe "-mod=@exile;" -servermod=@exileserver;@infiSTAR_Exile;@JSRS4APEX; -config=@ExileServer\config.cfg -port=2302 -profiles=SC -cfg=@ExileServer\basic.cfg -name=Config -autoinit
ping 127.0.0.1 -n 15 >NUL
echo Exile Server Shutdown ... Restarting!
ping 127.0.0.1 -n 5 >NUL
cls
goto Serverstart
