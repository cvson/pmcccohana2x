#!/bin/bash 
source /home/cvson/rootv5r34_setup.sh
scriptFile=`printf "/home/cvson/scraid2/cc1picoh/FIT/versionfsicombgenie/bin/simpleTest4.exe"`
outputFile=`printf "/home/cvson/scraid2/cc1picoh/FIT/versionfsicombgenie/outputs/four/fittoy_result_1.root"`
#cd /home/cvson/scraid2/cc1picoh/FIT/version04genieAllParaTSpline/bin
echo ${scriptFile}
echo ${outputFile}
${scriptFile}  -o ${outputFile} -s 87


