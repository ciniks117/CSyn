@echo off
set "VSCMD_START_DIR=%CD%"
call "C:\Program Files (x86)\Microsoft Visual Studio\2017\Professional\VC\Auxiliary\Build\VCVARSALL.BAT " amd64

cd .
nmake -f rtwshared.mk  GENERATE_ERT_S_FUNCTION=0 GENERATE_ASAP2=0 OPTS="-DMATLAB_MEX_FILE -DTID01EQ=1"
@if errorlevel 1 goto error_exit
exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1
