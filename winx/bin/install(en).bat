@echo off

if "%MSDEVDIR%"=="" goto error
if not exist "%MSDEVDIR%\Template" md "%MSDEVDIR%\Template" 
echo on
copy en\winxwiz60.awx "%MSDEVDIR%\Template"
@pause
exit


:error
echo ERROR: 
