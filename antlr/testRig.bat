@echo off

set JAVA=java
set JAVAC=javac
set ANTLR_JAR=antlr-4.12.0-complete.jar
set CLASS_OUTPUT_PATH=parser-classes

cd /D "%~dp0"
%JAVAC% -cp %ANTLR_JAR% parser/*.java -d %CLASS_OUTPUT_PATH% || exit /b
echo Please enter the string you want to parse. After you finish entering, please close the input stream 
echo (press Ctrl+D twice on Linux/Mac, press Enter then Ctrl+Z then Enter on Windows):
%JAVA% -cp %ANTLR_JAR%;%CLASS_OUTPUT_PATH% org.antlr.v4.gui.TestRig regex regex -gui -tokens || exit /b
