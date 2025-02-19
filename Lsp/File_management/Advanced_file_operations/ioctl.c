/*
* Name : Tejo prapulla
* KMID : KM56BESD04
* Date : 28-01-2025
* Program: Write a system program to print the names of the input devices located in the /dev/input folder?

* Sample Input   :sudo ./a.out /dev/input/event2
* Sample output  :Name of device:AT Translated Set 2 keyboard
*
*/
#include <fcntl.h>
#include <linux/kd.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>

#define BLINK_DELAY 500000  // 0.5 seconds

int main() 
{
    int ret,fd = open("/dev/tty0", O_NOCTTY);
	int fd2 = open("/dev/input/event0",O_RDONLY);

    if (fd < 0) {
        perror("Failed to open /dev/tty0");
        return 1;
    }

    int leds = LED_CAP | LED_NUM; 

    for (int i = 0; i < 10; i++) 
	{
        //Turn on leds
		
		ret = ioctl(fd, KDSETLED, leds);
        if (ret < 0) 
		{
            perror("Failed to set LEDs");
            close(fd);
            return 1;
        }
        sleep(1);

        // Turn off LEDs
        if (ioctl(fd, KDSETLED, 0) < 0)
		{
            perror("Failed to clear LEDs");
            close(fd);
            return 1;
        }
        sleep(1);
    }

     //printf("Done blinking LEDs.\n");
    close(fd);
    return 0;
}

