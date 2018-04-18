# agl-code-analysers
Files related to the work we've done on static code analyzers


How to use?


cppcheck:

cppcheck *.c 2> report.log
cppcheck *.cpp 2> report.log


sonarqube:

create a file sonar-project.properties with the content below : 


###########################################

# must be unique in a given SonarQube instance
sonar.projectKey=agl:binder
# this is the name and version displayed in the SonarQube UI. Was mandatory prior to SonarQube 6.1.
sonar.projectName=AGL binder
sonar.projectVersion=1.0
 
# Path is relative to the sonar-project.properties file. Replace "\" by "/" on Windows.
# This property is optional if sonar.modules is set. 
sonar.sources=.
 
# Encoding of the source code. Default is default system encoding
#sonar.sourceEncoding=UTF-8

###########################################
