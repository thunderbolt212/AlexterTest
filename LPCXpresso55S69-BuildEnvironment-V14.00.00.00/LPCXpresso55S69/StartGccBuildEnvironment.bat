@echo off

:: *************************************************************************************************
:: Please set the ABSOLUTE installation path of the flash utility
:: *************************************************************************************************

set Flash_Utility_Path=

:: *************************************************************************************************
:: Please do NOT change the following settings
:: *************************************************************************************************
set PlatformName=LPCXpresso55S69
set ExternalLoader=
set GettingStartedLink=getting-started-lpcxpresso55s69
cmd /K Application\Project\GCC\devenv.cmd
