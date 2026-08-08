#!/usr/bin/bash
set -e

JAVA="java"
JAVAC="javac"
ANTLR_JAR="antlr-4.12.0-complete.jar"
CLASS_OUTPUT_PATH="parser-classes"

cd "$(dirname $0)"
$JAVAC -cp $ANTLR_JAR parser/*.java -d $CLASS_OUTPUT_PATH
echo "Please enter the string you want to parse. After you finish entering, please close the input stream"
echo "(press Ctrl+D twice on Linux/Mac, press Enter then Ctrl+Z then Enter on Windows):"
$JAVA -cp $ANTLR_JAR:$CLASS_OUTPUT_PATH org.antlr.v4.gui.TestRig regex regex -gui -tokens
