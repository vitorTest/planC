#!/bin/bash
# playing with scripts, <vf>





# if [ -f exeAloha ]; then
# 	read -p " do you want to exclude an onder exeAloha(y/n)? " choice

# 	case $choice in
# 		y|Y)
# 			rm exeAloha
# 			printf "\n An older exeAloha was excluded \n"
# 			printf " A new exeAloha is being compiled...\n\n"
# 			g++ -o exeAloha alohaMain.cpp AlohaFunc.cpp

# 			if [ -f exeAloha ]; then
# 				printf " Compiled with Success!\n"
# 			else
# 				printf " compile.sh: Compilation Failed Miserably\n"
# 			fi
# 		;;

# 		*)
# 		printf "\n A temporary file is being created\n"
# 		g++ -o exeAlohaTemp alohaMain.cpp AlohaFunc.cpp

# 		if [ -f exeAlohaTemp ]; then
# 			printf " Compiled with Success!\n"
# 		else
# 			printf " compile.sh: Compilation Failed Miserably\n"
# 		fi
# 		;;

# 	esac

# else
# 	g++ -o exeAloha alohaMain.cpp AlohaFunc.cpp

# 	if [ -f exeAloha ]; then
# 		printf " Compiled with Success!\n"
# 	else
# 		printf " compile.sh: Compilation Failed Miserably\n"
# 	fi
# fi



if [ "$1" ] && [ "$2" ]; then
	printf "[ + ] compiling $1 into $2... \n\n"
else
	echo "[ - ] no arguments passed"
	echo "[ - ] remember: ./compiler file.cpp output"
	exit 1
fi


if [ -f "$2" ]; then
	rm "$2"
fi

g++ -o "$2" "$1" 

	if [ -f "$2" ]; then
		printf "[ + ] Compiled with Success!\n"
	else
		printf "[ - ] compile.sh: Compilation Failed Miserably\n"
	fi

