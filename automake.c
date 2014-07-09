

void main()
{
system("make -j8 -s");
system("make modules_install -j8 ");
system("make install -j8");
system("shutdown -P now");
}
