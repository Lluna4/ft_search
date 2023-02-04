# This is a really rough (and really bad) installation script, i'll probably update it when i know more bash
cd libft
make
make clean
cd ..
cd printf
make
make clean
cd ..
gcc main.c libft/libft.a printf/libftprintf.a
path=$(realpath a.out)
echo "alias search=$path" > ~/.bashrc
source ~/.bashrc