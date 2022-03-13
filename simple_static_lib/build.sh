#!/usr/bin/bash

ENV_SH=../env.sh
if [[ -f $ENV_SH && -x $ENV_SH ]]
then ./$ENV_SH
else echo WARNING: \$ENV_BAT is not found\! Global environment is used.
fi

BUILD_DIR_PREF=build
TEST_ENABLE=OFF

if [[ $2 = "test" ]]
then TEST_ENABLE=ON
fi

BUILD_TYPE=release
if [[ $1 = "debug" ]]
then BUILD_TYPE=debug
fi

BUILD_DIR="${BUILD_DIR_PREF}_gcc_${BUILD_TYPE}"

if ! [[ -d $BUILD_DIR ]] 
then mkdir $BUILD_DIR
fi
cd $BUILD_DIR
echo Clean solution: $BUILD_DIR
rm -r ./* > /dev/null

cmake ../ -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=$BUILD_TYPE -DTEST_ENABLE=$TEST_ENABLE
make && make install
cd ../

if [[ $TEST_ENABLE = ON ]]
then 
cd bin
    if ! [[ -d tests ]] 
    then mkdir tests
    fi
cd tests
for f in $(ls);
do
    ./$f
done;
cd ../..
fi
