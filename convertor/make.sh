rm -rf *.o
echo "Compiling...\n"
gcc -c *.c
gcc -o main *.o
rm -rf *.o
echo "Running...\n"
./main
