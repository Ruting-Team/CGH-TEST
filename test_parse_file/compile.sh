opt="-D__CHAR__ -std=c++11 -O2"
CGH_HOME=/Users/iEric/Downloads/git/CGH-PRO
opt_inc="-I$CGH_HOME/include"
echo g++ $opt $opt_inc main.cpp
g++ $opt $opt_inc main.cpp
