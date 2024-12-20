#!/bin/bash 
if ! [ -d practicefile ]; then
	echo "practicefile does not exist"
	mkdir practicefile
fi

cp *.sh practicefile
cp *.py practicefile
cp *.java practicefile

cd practicefile; ls -lrt 
