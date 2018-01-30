IF NOT DEFINED CXXSTD (..\..\..\b2 config_info_travis_install "%ARGS%")
IF DEFINED CXXSTD FOR %%A IN (%CXXSTD%) DO (
..\..\..\b2 -a -d2 config_info_travis_install %ARGS% cxxstd=%%A
config_info_travis
del config_info_travis.exe
)