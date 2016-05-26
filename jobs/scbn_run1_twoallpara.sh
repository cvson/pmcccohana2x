#!/bin/bash 
source /home/cvson/rootv5r34_setup.sh
scriptFile=`printf "/home/cvson/scraid2/cc1picoh/FIT/versionfsicombgenie/bin/simpleTest2allpara.exe"`
outputFile=`printf "/home/cvson/scraid2/cc1picoh/FIT/versionfsicombgenie/outputs/two/fittoy_result_1allpara.root"`
#cd /home/cvson/scraid2/cc1picoh/FIT/version04genieAllParaTSpline/bin
echo ${scriptFile}
echo ${outputFile}
${scriptFile}  -o ${outputFile} -s 87


