# FT_IRC

L’objectif de ce projet est de reproduire le fonctionnement d’un serveur IRC.

## Client IRC de références
WeeChat

## Notion importante
>* [Client IRC(Internet Relay Chat)](https://www.ionos.fr/digitalguide/serveur/know-how/irc/)
>* [Serveur IRC(Internet Relay Chat)](https://www.ionos.fr/digitalguide/serveur/know-how/serveur-irc/)
>   * [Serveur](https://www.ionos.fr/digitalguide/serveur/know-how/quest-ce-quun-serveur-une-notion-deux-definitions/)
>   * [IRCd](https://fr.wikipedia.org/wiki/IRCD)
>* [Protocole IRC](http://abcdrfc.free.fr/rfc-vf/rfc1459.html)
>* TCP/IP (v4 ou v6)
>* Descripteurs de fichier en mode non bloquant
>* 
>* 
>* 

## Fonctions autorisées
>* socket()
>   * **Résumé:** Les sockets permettent aux applications de se connecter au réseau local sur différents ports. Chaque fois qu'une socket est créée, le programme doit spécifier le type de socket ainsi que l'adresse du domaine.
>   * [Exemple](https://www.linuxhowtos.org/C_C++/socket.htm)
>   * [Man](https://fr.manpages.org/socket/2)
>* setsockopt()
>   * **Résumé:** Manipulent les options pour la socket référencée par le descripteur de fichier sockfd
>   * [Exemple](https://linuxhint.com/setsockopt-function-c/)
>   * [Man](https://www.qnx.com/developers/docs/6.5.0SP1.update/com.qnx.doc.neutrino_lib_ref/s/setsockopt.html)
>* getsockname()
>   * **Résumé:** Renvoie l'adresse actuelle à laquelle la socket
        sockfd est liée, dans le tampon pointé par addr 
>   * [Exemple](https://linuxhint.com/c-getsockname-function-usage/)
>   * [Man](https://man7.org/linux/man-pages/man2/getsockname.2.html)
>* getprotobyname()
>   * **Résumé:**  Renvoie un pointeur vers un protocent structure pour le protocole réseau spécifié sur l'appel
>   * [Exemple](https://cpp.hotexamples.com/examples/-/-/getprotobyname/cpp-getprotobyname-function-examples.html)
>   * [Man](https://www.ibm.com/docs/en/zos/2.1.0?topic=functions-getprotobyname-get-protocol-entry-by-name)
>* gethostbyname()
>   * **Résumé:** Renvoie une structure de type hostent pour le nom 
       d'hôte donné ATTENTION fonction obsolete preferer getaddrinfo()
>   * [Exemple](https://linuxhint.com/gethostbyname-function-c/)
>   * [Man](https://man7.org/linux/man-pages/man3/gethostbyname.3.html)
>* getaddrinfo()
>   * **Résumé:** Renvoie une ou plusieurs structures addrinfo ,
       dont chacun contient une adresse Internet qui peut être spécifiée
       dans un appel à bind(2) ou connect(2) 
>   * [Exemple](https://linuxhint.com/c-getaddrinfo-function-usage/#:~:text=Example%201,allotted%20to%20the%20specific%20address.)
>   * [Man](https://man7.org/linux/man-pages/man3/getaddrinfo.3.html)
>* freeaddrinfo()
>   * **Résumé:** La fonction freeaddrinfo () doit libérer une ou plusieurs structures addrinfo renvoyées par getaddrinfo()
>   * [Exemple](https://stackoverflow.com/questions/37959585/what-happened-on-freeaddrinfo-called)
>   * [Man](https://pubs.opengroup.org/onlinepubs/009695399/functions/freeaddrinfo.html)
>* bind()
>   * **Résumé:** Fourni un nom à une socket  
>   * [Exemple](https://linuxhint.com/bind-system-call-c/)
>   * [Man](http://manpagesfr.free.fr/man/man2/bind.2.html)
>* connect()
>   * **Résumé:** Débute une connexion sur une socket 
>   * [Exemple](https://linuxhint.com/c-connect-function-system-call/)
>   * [Man](http://manpagesfr.free.fr/man/man2/connect.2.html)
>* listen()
>   * **Résumé:** Attend des connexions sur une socket
>   * [Exemple](https://linuxhint.com/c-connect-function-system-call/)
>   * [Man](http://manpagesfr.free.fr/man/man2/listen.2.html)
>* accept()
>   * **Résumé:** Accepte une connexion sur une socket  
>   * [Exemple](https://linuxhint.com/c-connect-function-system-call/)
>   * [Man](http://manpagesfr.free.fr/man/man2/accept.2.html)
>* htons()
>   * **Résumé:** Convertit l'entier court non signé hostshort de l'ordre des octets de l'hôte à l'ordre des octets du réseau.
>   * [Exemple](https://linuxhint.com/c-connect-function-system-call/)
>   * [Man](https://linux.die.net/man/3/htons)
>* htonl()
>   * **Résumé:** Convertit l'entier non signé hostlong de l'ordre des octets de l'hôte vers l'ordre des octets du réseau.
>   * [Exemple](https://linuxhint.com/c-connect-function-system-call/)
>   * [Man](https://linux.die.net/man/3/htons)
>* ntohs()
>   * **Résumé:** Convertit l'entier court non signé netshort de l'ordre des octets du réseau à l'ordre des octets de l'hôte.
>   * [Exemple](https://linuxhint.com/c-connect-function-system-call/)
>   * [Man](https://linux.die.net/man/3/htons)
>* ntohl()
>   * **Résumé:** Convertit l'entier non signé netlong de l'ordre des octets du réseau à l'ordre des octets de l'hôte.
>   * [Exemple](https://linuxhint.com/c-connect-function-system-call/)
>   * [Man](https://linux.die.net/man/3/htons)
>* inet_addr()
>   * **Résumé:** Convertit l'adresse de l'hôte Internet cp à partir de la notation de nombres et de points IPv4 en données binaires dans l'ordre des octets du réseau. 
>   * [Exemple](http://www.ccplusplus.com/2011/08/inetaddr-sample-c-code.html)
>   * [Man](https://linux.die.net/man/3/inet_addr)
>* inet_ntoa()
>   * **Résumé:** Convertit une adresse Internet IPv4 en une chaîne ASCII représentant l'adresse en notation par points (par exemple, " 127.0. 0.1 ").
>   * [Exemple](https://www.gta.ufrj.br/ensino/eel878/sockets/inet_ntoaman.html)
>   * [Man](https://linux.die.net/man/3/inet_addr)
>* send()
>   * **Résumé:** Envoye un message sur une socket
>   * [Exemple](https://stackoverflow.com/questions/13479760/c-socket-recv-and-send-all-data)
>   * [Man](http://manpagesfr.free.fr/man/man2/send.2.html)
>* recv()
>   * **Résumé:** Recevoir un message sur une socket  
>   * [Exemple](https://linuxhint.com/c-recv-function-usage/)
>   * [Man](http://manpagesfr.free.fr/man/man2/recv.2.html)
>* signal()
>   * **Résumé:** Le comportement de signal() varie selon les versions d'Unix, et a également varié au cour du temps dans les différentes versions de Linux. Évitez son utilisation : utilisez plutôt sigaction(2). Voir Portabilité plus loin.
>   * [Exemple](https://www.geeksforgeeks.org/signals-c-language/)
>   * [Man](http://manpagesfr.free.fr/man/man2/signal.2.html)
>* lseek()
>   * **Résumé:** Permet de placer la tête au-delà de la fin actuelle du fichier (mais cela ne modifie pas la taille du fichier). Si des données sont écrites à cet emplacement, une lecture ultérieure de l'espace intermédiaire (un « trou ») retournera des zéros (« \0 ») jusqu'à ce que d'autres données y soient écrites.  
>   * [Exemple](https://www.geeksforgeeks.org/lseek-in-c-to-read-the-alternate-nth-byte-and-write-it-in-another-file/)
>   * [Man](http://manpagesfr.free.fr/man/man2/lseek.2.html)
>* fstat()
>   * **Résumé:** La fonction fstat () doit obtenir des informations sur un fichier ouvert associé au descripteur de fichier fildes , et l'écrira dans la zone pointée par buf .
>   * [Exemple](https://linuxhint.com/fstat-function-c/)
>   * [Man](https://man7.org/linux/man-pages/man3/fstat.3p.html)
>* fcntl()
>   * **Résumé:** Voir man^^
>   * [Exemple](https://linuxhint.com/fcntl-function-c/)
>   * [Man](https://linux.die.net/man/3/fcntl)
>* poll()
>   * **Résumé:** Est une variation de select(2) : il attend que l'un des descripteurs de fichier parmi un ensemble soit prêt pour effectuer des entrées-sorties.
>   * [Exemple](https://linuxhint.com/use-poll-system-call-c/)
>   * [Man](http://manpagesfr.free.fr/man/man2/poll.2.html)
>* select()
>   * **Résumé:** Les fonctions select() et pselect() permettent à un programme de surveiller plusieurs descripteurs de fichier, attendant qu'au moins l'un des descripteurs de fichier devienne « prêt » pour certaines classes d'opérations d'entrées-sorties (par exemple, entrée possible). Un descripteur de fichier est considéré comme prêt s'il est possible d'effectuer l'opération d'entrées-sorties correspondante (par exemple, un read(2)) sans bloquer.
>   * [Exemple](https://www.ibm.com/docs/en/i/7.1?topic=designs-example-nonblocking-io-select)
>   * [Man](https://www.ibm.com/docs/en/zos/2.4.0?topic=calls-select)
>* kqueue()
>   * **Résumé:** Kqueue fournit une API standard permettant aux applications d'enregistrer leur intérêt pour divers événements/conditions et de recevoir les notifications correspondantes de manière efficace. Il a été conçu pour être évolutif, flexible, fiable et correct.
>   * [Exemple](https://wiki.netbsd.org/tutorials/kqueue_tutorial/)
>   * [Man](https://wiki.netbsd.org/tutorials/kqueue_tutorial/)
>* epoll()
>   * **Résumé:** est une variante de poll(2) que l'on peut déclencher par niveau ou par changement d'état, et monte bien en charge pour un grand nombre de descripteurs simultanés. Trois appels système sont fournis pour configurer et commander un ensemble epoll : epoll_create(2), epoll_ctl(2), epoll_wait(2).
>   * [Exemple](https://linuxhint.com/epoll-7-c-function/)
>   * [Man](http://manpagesfr.free.fr/man/man7/epoll.7.html)

## Sources
>* 
>* 
>* 
>* 
>* 
>* 
>* 
>* 
>* 
>* 