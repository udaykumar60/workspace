#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <termios.h>

int main() {
    // Open the USB-TTL port and the output file
    int serial_fd = open("/dev/ttyUSB0", O_RDONLY | O_NOCTTY);
    int file_fd = open("rfid_data.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);

    if (serial_fd < 0 || file_fd < 0) {
        printf("Error opening files. Check if /dev/ttyUSB0 exists.\n");
        return 1;
    }

    struct termios tty;
    tcgetattr(serial_fd, &tty);

    // 1. Set the correct speed (Try B115200 if B9600 yields nothing)
    cfsetispeed(&tty, B9600);           
    
    // 2. Set raw hardware properties
    tty.c_cflag |= (CLOCAL | CREAD);    
    tty.c_cflag &= ~PARENB;             
    tty.c_cflag &= ~CSTOPB;             
    tty.c_cflag &= ~CSIZE;              
    tty.c_cflag |= CS8;                 
    
    // 3. STRICT RAW MODE (Bypasses all Linux terminal buffering)
    tty.c_lflag &= ~(ICANON | ECHO | ECHOE | ISIG);
    tty.c_iflag &= ~(IXON | IXOFF | IXANY | ICRNL | INPCK | ISTRIP);
    tty.c_oflag &= ~OPOST;

    // 4. Force read() to return as soon as 1 single byte arrives
    tty.c_cc[VMIN]  = 1; 
    tty.c_cc[VTIME] = 0; 

    tcsetattr(serial_fd, TCSANOW, &tty);

    printf("Listening... Swipe your RFID card now.\n");

    char buffer[64];
    while (1) {
        ssize_t bytes = read(serial_fd, buffer, sizeof(buffer));
        if (bytes > 0) {
            // Print to console so you can see it live
            printf("Received %zd bytes!\n", bytes); 
            
            // Write to file
            write(file_fd, buffer, bytes);
            fsync(file_fd);             
        }
    }

    close(serial_fd);
    close(file_fd);
    return 0;
}
