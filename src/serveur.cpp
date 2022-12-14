#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>
#include <cstdio>

//PORT 2000
/*void error(const char* msg)
{
    (void) msg;
    perror("error");
    exit(1);
}*/
int main(int ac, char **av)
{
    int sockfd;//retour socket()
    int newSockfd;//retour socket()
    int portNo;//port serveur (2000)
    socklen_t cliLen;//taille addr client pour accept()
    int n;//retour read() write()
    char buffer[256];//pour lire le message depuis la socket
    struct sockaddr_in serv_addr;//est une structure contenant une adresse internet. Cette structure est définie dans netinet/in.h.
    struct sockaddr_in cli_addr;

    if(ac < 2)
    {
        std::cerr << "ERR0R, no port" << std::endl;
        exit(1);
    }
    //create socket
    sockfd = socket(AF_INET, SOCK_STREAM,0);
    if (sockfd < 0)
        std::cerr << "ERROR opening socket" << std::endl;
    bzero((char *) &serv_addr, sizeof(serv_addr));
    portNo = atoi(av[1]);
    serv_addr.sin_family = AF_INET;//si communication iternet utlise cette variable sinon AF_UNIX en local
    serv_addr.sin_port = htons(portNo);//converti le port number en network byte order
    serv_addr.sin_addr.s_addr = INADDR_ANY;//contient l'IP de l'hote
    //lie la socket du serveur avec son addr
    if(bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr)) < 0)
        std::cerr << "ERROR on binding" << std::endl;
    //ecoute la socket du serveur et definie le nb de connection en attente
    listen(sockfd, 5);
    cliLen = sizeof(cli_addr);
    newSockfd = accept(sockfd, (struct sockaddr *) &cli_addr, &cliLen);
    bzero(buffer, 256);
    n = read(newSockfd, buffer, 255);
    if (n < 0)
        std::cerr << "ERROR reading from socket" << std::endl;
    std::cout << "Here is the message" << buffer << std::endl;
    n = write(newSockfd, "I got your message", 18);
    if (n < 0)
        std::cerr << "ERROR writing to socket" << std::endl;
    return (0);
}