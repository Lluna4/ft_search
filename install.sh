# This is a really rough (and really bad) installation script, i'll probably update it when i know more bash
git clone https://github.com/carlyjb17/ft_search ft_search
cd ft_search
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
echo "alias search=$path" > $HOME/.bashrc
source $HOME/.bashrc
echo "For this command to work close and open the terminal"
