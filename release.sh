#!/bin/bash

if [ -z "$1" ]; then

	echo usage: $0 --help
        exit

fi

if [ "$1" == "--help" ]; then

	printf "Usage: release-proj [VERSION]"
	echo 
	printf "Releases the build-tools into the wild."
	echo 
	echo 
	printf "VERSION         version number of the project"
	echo 
        printf "                format: [version].[build]"
	echo 
	printf "DESTINATION     remote location"
	echo 
	printf "                format: [user]@[server-ip]"
	echo 
	echo
	printf "Example: ./release.sh 1.4.3 keen@192.168.0.68"
	echo
	echo

else
	printf "Upload release files"
	echo
	git checkout master
	tar --exclude-vcs --exclude=.project -czvf ../build-tools-v$1.tar.gz ../build-tools/
	scp ../build-tools-v$1.tar.gz $2:/data/releases/build-tools
	printf "DONE"
	echo

fi
