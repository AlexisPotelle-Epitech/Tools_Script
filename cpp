#!/bin/bash

YEAR=`date +"%Y"`

if [ -z $1 ]; then
    echo "Error Syntax --> Usage: ./cpp [FILE_NAME] ..."
    echo "You can generate 1 or more file "
    exit 1
fi

while [ $# > 1 ]; do
    touch $1.cpp
    echo "/*" >> $1.cpp
    echo "** EPITECH PROJECT, $YEAR" >> $1.cpp
    echo "** $PWD" >> $1.cpp
    echo "** File description:" >> $1.cpp
    echo "** $1.cpp" >> $1.cpp
    echo "*/" >> $1.cpp
    echo "" >> $1.cpp
    echo "#include \"$1.hpp\" " >> $1.cpp
    touch $1.hpp
    echo "/*" >> $1.hpp
    echo "** EPITECH PROJECT, $YEAR" >> $1.hpp
    echo "** $PWD" >> $1.hpp
    echo "** File description:" >> $1.hpp
    echo "** $1.hpp" >> $1.hpp
    echo "*/" >> $1.hpp
    echo "" >> $1.hpp
    echo "#include <iostream>" >> $1.hpp
    echo "#include <string>" >> $1.hpp
    echo "#include <fstream>" >> $1.hpp
    echo "#include <iomanip>" >> $1.hpp
    echo "" >> $1.hpp
    echo "class $1 {" >> $1.hpp
    echo "private:" >> $1.hpp
    echo "    /* data */" >> $1.hpp
    echo "" >> $1.hpp
    echo "public:" >> $1.hpp
    echo "    $1 ();" >> $1.hpp
    echo "    virtual ~$1 ();" >> $1.hpp
    echo "};" >> $1.hpp
    rm -f 1
    shift
    if [ -z $2 ]; then
        touch $1.cpp
        echo "/*" >> $1.cpp
        echo "** EPITECH PROJECT, $YEAR" >> $1.cpp
        echo "** $PWD" >> $1.cpp
        echo "** File description:" >> $1.cpp
        echo "** $1.cpp" >> $1.cpp
        echo "*/" >> $1.cpp
        echo "" >> $1.cpp
        echo "#include \"$1.hpp\" " >> $1.cpp
        touch $1.hpp
        echo "/*" >> $1.hpp
        echo "** EPITECH PROJECT, $YEAR" >> $1.hpp
        echo "** $PWD" >> $1.hpp
        echo "** File description:" >> $1.hpp
        echo "** $1.hpp" >> $1.hpp
        echo "*/" >> $1.hpp
        echo "" >> $1.hpp
        echo "#include <iostream>" >> $1.hpp
        echo "#include <string>" >> $1.hpp
        echo "#include <fstream>" >> $1.hpp
        echo "#include <iomanip>" >> $1.hpp
        echo "" >> $1.hpp
        echo "class $1 {" >> $1.hpp
        echo "private:" >> $1.hpp
        echo "    /* data */" >> $1.hpp
        echo "" >> $1.hpp
        echo "public:" >> $1.hpp
        echo "    $1 ();" >> $1.hpp
        echo "    virtual ~$1 ();" >> $1.hpp
        echo "};" >> $1.hpp
        rm -f 1
        exit 0
    fi
done
