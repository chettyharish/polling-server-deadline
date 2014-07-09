#include <stdio.h>


int main(){
system("dmesg -c");
system("> /var/log/syslog");
system("clear");
system("clear");
system("tail -f /var/log/syslog");


return 0;
}
